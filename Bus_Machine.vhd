----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:08:34 05/18/2018 
-- Design Name: 
-- Module Name:    Bus_Machine - Behavioral 
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


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Bus_Machine is
	generic( rgbNclock : integer :=10);
	port(
		posButton : in std_logic_vector(9 downto 0);
		rgbCommon : out std_logic_vector(9 downto 0);
		rgb : out std_logic_vector(2 downto 0);
		clk : in std_logic

	);
end Bus_Machine;

architecture Behavioral of Bus_Machine is
	signal rgbTrigger : std_logic;
	signal rgbIndex : integer range 0 to 11:= 0;
	signal rgbPos : std_logic_vector(9 downto 0);
	component Clock_Counter
		generic(
			N : integer
		);
		port(
			clock : in std_logic;
			trigger : out std_logic
		);
	end component;
	

begin
	rgbPos <= "0101100111";
	RGB_COUNTER : Clock_Counter generic map ( N => rgbNclock )
										 port map (clock => clk,trigger => rgbTrigger);
	

	process(rgbTrigger,rgbIndex)
	begin
		
		if (rgbTrigger'event and rgbTrigger = '1') then
			rgbCommon(rgbIndex-1) <= '1';
			rgbIndex <= rgbIndex + 1;
			if (rgbIndex = 10) then
				rgbIndex <= 0;
			end if;
			
			
			
			if (rgbPos(rgbIndex) = '1')then 
				rgb <= "010";
			else
				rgb <= "100";
			end if;
			rgbCommon(rgbIndex) <= '0';
			
		end if;
		
	--	for i in rgbCommon'low to rgbCommon'high loop

			
	--		if (rgbPos(i) = '1') then
	--			rgb<= "100";
	--		else
	--			rgb <= "001";
	--		end if;
			
	--		rgbCommon(i) <= '0';
	--	end loop;
	end process;
	
	
	
end Behavioral;

