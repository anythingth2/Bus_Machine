----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:28:53 05/20/2018 
-- Design Name: 
-- Module Name:    Display_LED - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Display_LED is
	generic( 
		rgbNclock : integer := 10
	);
	port(
		rgb : out std_logic_vector(2 downto 0);
		rgbPos : in std_logic_vector(9 downto 0);
		rgbPos1 : in std_logic_vector(10 downto 0);
		rgbPos2 : in std_logic_vector(10 downto 0);
		clk :in std_logic;
		rgbOut : out std_logic_vector(9 downto 0);
		rgbPosChangedTrigger : in std_logic;
		state : in std_logic_vector(3 downto 0);
		rgbCommon : out std_logic_vector(9 downto 0)
	);
end Display_LED;

architecture Behavioral of Display_LED is
	signal rgbTrigger : std_logic;
	signal rgbIndex : integer range 0 to 11:= 0;
	component Clock_Counter
		generic(
			N : integer
		);
		port(
			clock : in std_logic;
			trigger : out std_logic
		);
	end component;

	signal rgbOutput : std_logic_vector(9 downto 0);
begin

	RGB_COUNTER : Clock_Counter generic map ( N => rgbNclock )
										 port map (clock => clk,trigger => rgbTrigger);
	

	process(rgbTrigger,rgbIndex,rgbOutput)
	begin
		
		if (rgbTrigger'event and rgbTrigger = '1') then
			rgbCommon(rgbIndex-1) <= '1';
			rgbIndex <= rgbIndex + 1;
			if (rgbIndex = 10) then
				rgbIndex <= 0;
			end if;
			
			if (rgbOutput(rgbIndex) = '1')then 
				if( state(3 downto 1) = "000")then
					rgb <= "010";
				else
					rgb <= "001";
				end if;
			else
				rgb <= "100";
			end if;
			
			rgbCommon(rgbIndex) <= '0';
			
		end if;
	end process;
	
	rgbOut <= rgbOutput;
	rgbOutput <= std_logic_vector(unsigned(rgbPos2(9 downto 0)) ) when rgbPos1="0000000000"  else
					 std_logic_vector(unsigned(rgbPos1(9 downto 0)) ) when rgbPos2="0000000000"  else
					 std_logic_vector( unsigned(rgbPos1(8 downto 0) & '0') - unsigned(rgbPos2(9 downto 0)) ) when rgbPos1 > rgbPos2 else					
					 std_logic_vector( unsigned(rgbPos2(8 downto 0) & '0') - unsigned(rgbPos1(9 downto 0)) );

end Behavioral;

