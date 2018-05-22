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
		
		button : in STD_LOGIC_VECTOR (3 downto 0);  -- 1 2 5 10
	  priceseg : out  STD_LOGIC_VECTOR (6 downto 0);
	  pricecom : out  STD_LOGIC_VECTOR (1 downto 0);
	  changeseg : out  STD_LOGIC_VECTOR (6 downto 0);
	  changecom : out  STD_LOGIC_VECTOR (3 downto 0);
	  buzzer : out  STD_LOGIC;
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
			rgbPos : in std_logic_vector(9 downto 0) := "0000000000";
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
	
	signal station : integer range (0) to (24);
		
	signal price : integer range (0) to (24);
	signal price0 : STD_LOGIC;
	signal price1 : STD_LOGIC;
	signal price2 : STD_LOGIC;
	signal price3 : STD_LOGIC;
	
	Signal c : integer range (0) to (50000);
	Signal x : integer range (0) to (9);	
	Signal z : integer range (0) to (24);
	
	Signal sum : integer range (0) to (10):=0;
	Signal count : integer range (0) to (9):=0;
	Signal countsum : integer range (0) to (2):=0;
	
	Signal statecount : STD_LOGIC := '0';
	Signal stateprice : STD_LOGIC := '0';
	Signal test : STD_LOGIC_VECTOR (9 downto 0);
	
	
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



	priceseg <="1101111" when x = 9 else	--9	  
					  "1111111" when x = 8 else	--8
					  "0000111" when x = 7 else	--7
					  "1111101" when x = 6 else	--6
					  "1101101" when x = 5 else	--5
					  "1100110" when x = 4 else	--4
					  "1001111" when x = 3 else	--3
					  "1011011" when x = 2 else	--2
					  "0000110" when x = 1 else	--1
					  "0111111";	--0
					  
		--changeseg <="1101111" when z = 9 else	--9	  
		--			  "1111111" when z = 8 else	--8
		--			  "0000111" when z = 7 else	--7
		--			  "1111101" when z = 6 else	--6
		--			  "1101101" when z = 5 else	--5
		--			  "1100110" when z = 4 else	--4
		--			  "1001111" when z = 3 else	--3
		--			  "1011011" when z = 2 else	--2
		--			  "0000110" when z = 1 else	--1
		--			  "0111111";	--0
		--			  changecom <= "1110";
					  --z<= money - price when price > station else
					  --0;	
					  
--	test <= "0000100001";	
	test <= rgbPos when state ="0010";
	
	station <= 
				  24 when z = 9 else
			     22 when z = 8 else
				  20 when z = 7 else
				  18 when z = 6 else
				  16 when z = 5 else
				  14 when z = 4 else
				  12 when z = 3 else
				  10 when z = 2 else
				  8 when z = 1 else
				  0;
		
		
--		price <= station - 1 when button(0) = '1' and price > 0 else
--					station - 2 when button(1) = '1' and price > 0 else
--				  	station - 5 when button(2) = '1' and price > 0 else				  
--					station - 10 when button(3) = '1' and price > 0 else
--					station;

	price <= station - 1 when price0 = '1' else
				station - 2 when price1 = '1' else
				station - 5 when price2 = '1' else				  
				station - 10 when price3 = '1' else
				station;
				
	process(button(0))
	begin
		if(falling_edge(button(0)))then
			price0 <= not price0;
		end if;
	end process;

	process(button(1))
	begin
		if(falling_edge(button(1)))then
			price1 <= not price1;
		end if;
	end process;

	process(button(2))
	begin
		if(falling_edge(button(2)))then
			price2 <= not price2;
		end if;
	end process;

	process(button(3))
	begin
		if(falling_edge(button(3)))then
			price3 <= not price3;
		end if;
	end process;
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
	
	
			
	process(clk,statecount)	 -- check station
	begin		
			if (clk'event and clk = '1' and statecount = '0' and state="0010") then
				
				if test(count) = '1' then
					countsum <= countsum+1;			
				end if;	
				
				if countsum = 1 then			
					sum <=sum+1;
				end if;	
				
				if count = 9 then
					if stateprice = '0' then
						z<=sum;
						stateprice <= '1'; 
					end if;
					if stateprice = '1' then
						z<=0;
					end if;
					count <=0;	
					statecount <= '1'; 				
				end if;
				count <= count+1;
				
			end if;
			
	end process;			

	process(clk,price)  -- 
	begin
		if (clk'event and clk = '1') then
			c<= c+1;
			if(c <= 25000) then
				x <= price mod 10;
				pricecom<="10";
			elsif (c > 25001 and c <= 50000) then
				x <= price / 10;
				pricecom<="01";
			end if;			
		end if;
	end process;


	input_pos : for i in posButton'range generate
		input_process : process(posButton,state) is
		begin
			
			if (posButton(i)'event and posButton(i) = '1') then
				
				if(state = "0000" )then
					rgbPos1(i) <= '1';
					rgbPos(i) <= '1';
				elsif(state = "0001" and rgbPos1(i)='0' ) then
					rgbPos2(i) <= '1';
					rgbPos(i) <= '1';
				end if;
			
			end if;	
			

		end process input_process;
	end generate;
	
end Behavioral;

