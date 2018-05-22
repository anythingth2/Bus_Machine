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
		testRgbTrig : out std_logic;
		clk : in std_logic
		
	);
end Bus_Machine;

architecture Behavioral of Bus_Machine is
	
	signal enableeiei : std_logic;
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
	signal rgbPosTrig : std_logic := '0';
	signal nextState : std_logic_vector(3 downto 0) := "0000";
	
begin
	--rgbPos <= "0010000100";
	DisplayLed : Display_LED port map(rgb => rgb,
												rgbPos => rgbPos,
												rgbPos1 => rgbPos1,
												rgbPos2 => rgbPos2,
												state => state,
												clk => clk,
												rgbPosChangedTrigger => rgbPosTrig,
												rgbCommon => rgbCommon,
												rgbOut => rgbOut);
	
	ledState <= state;
--	state <= swState;
	rgbPosTrig <= posButton(9) or  posButton(8) or posButton(7) or posButton(6) or posButton(5) or posButton(4) or posButton(3) or  posButton(2) or posButton(1) or posButton(0) ; 

--	state <= 
--				"0001" when rgbPos1/="00000000000" and state = "0000"  else
--				"0010" when rgbPos2/="00000000000" and state = "0001"  else
--				"0100" when rgbPos="00000000000" and state = "0010"  ;
	
	
--input_process : process(posButton,state) is
--		begin
--			
--			if (posButton(i)'event and posButton(i) = '1') then
--				if(state = "0000" )then
--					rgbPos1(i) <= '1';
--				elsif(state = "0001" ) then
--					rgbPos2(i) <= '1';				
--				end if;
--			end if;	
--
--		end process

--	rgbPos1 <= '0'&  when state = "0000" ;
--
--	rgbPos2 <= '0'&posButton when state = "0001" ;

	sync_proc : process(clk)
	begin
		if (rising_edge(clk))then
			state <= nextState;
			
		end if;
	end process;
	
	next_state_proc : process(state,rgbPos1,rgbPos2)
	begin
		case (state) is
			when "0000" =>
				if (rgbPos1/="00000000000")then
					nextState <= "0001";
				else 
					nextState <= "0000";
				end if;
			when "0001" =>
				if (rgbPos2/="00000000000")then
					nextState <= "0010";
					else 
					nextState <= "0001";
				end if;
			
			when others =>
				nextState <= state;
		end case;
	end process;
	
	input_pos : for i in posButton'range generate
		input_process : process(posButton,state) is
		begin
			
			if (posButton(i)'event and posButton(i) = '1') then
				if(state = "0000" )then
					rgbPos1(i) <= '1';
				elsif(state = "0001" and rgbPos1(i)='0' ) then
					rgbPos2(i) <= '1';
				
				end if;
			end if;	

		end process input_process;
	end generate;
	
end Behavioral;

