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
		swState : in std_logic_vector(3 downto 0);
		ledState : out std_logic_vector(3 downto 0);
		rgbOut : out std_logic_vector(9 downto 0);
		clk : in std_logic

	);
end Bus_Machine;

architecture Behavioral of Bus_Machine is
	
	
	signal state : std_logic_vector(3 downto 0) := "0000";
	signal rgbPos : std_logic_vector(9 downto 0):= "0000000000";
	signal rgbPos1 : std_logic_vector(10 downto 0):= "00000000000";
	signal rgbPos2 : std_logic_vector(10 downto 0):= "00000000000";
	
	component Display_LED 
		port(
			rgb : out std_logic_vector(2 downto 0);
			rgbPos : in std_logic_vector(9 downto 0) := "0010000100";
			rgbPos1 : in std_logic_vector(10 downto 0):= "00000000000";
			state : in std_logic_vector(3 downto 0);
			rgbPos2 : in std_logic_vector(10 downto 0):= "00000000000";
			rgbPosChangedTrigger : in std_logic;
			clk :in std_logic;
			rgbOut : out std_logic_vector(9 downto 0);
			rgbCommon : out std_logic_vector(9 downto 0)
		);
	end component;
	signal rgbPosChangedTrigger : std_logic := '0';
begin
	--rgbPos <= "0010000100";
	DisplayLed : Display_LED port map(rgb => rgb,
												rgbPos => rgbPos,
												rgbPos1 => rgbPos1,
												rgbPos2 => rgbPos2,
												state => state,
												clk => clk,
												rgbPosChangedTrigger => rgbPosChangedTrigger,
												rgbCommon => rgbCommon,
												rgbOut => rgbOut);
	state <= swState;
	ledState <= state;
	State_Machine: process(posButton,state)
	begin
		
		if (state(3) = '0')then
			if(state(0) = '0')then
				
				
--				for i in 0 to 9 loop
--					tmp <= posButton(i);
--					if ( tmp'event and tmp = '0')then
--						rgbPos(i) <= not rgbPos(i);
--					end if;
--					
--				end loop;

			end if;
		elsif (state(3) = '1') then
		end if;
	end process State_Machine;
	
	input_pos : for i in posButton'range generate
		input_process : process(posButton,state) is
		begin
			
			if (posButton(i)'event and posButton(i) = '1') then
				if(state = "0000" )then
					rgbPos1(i) <= '1';
				elsif(state = "0001" and rgbPos(i) = '0') then
					rgbPos2(i) <= '1';
					
				end if;
			end if;
			

		end process input_process;
	end generate;
	
	
end Behavioral;

