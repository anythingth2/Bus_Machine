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
		posButton : in std_logic_vector(9 downto 0);		-- Input ???????????????????
		rgbCommon : out std_logic_vector(9 downto 0);	-- selector ??? rgb
		rgb : out std_logic_vector(2 downto 0);			-- select ?? rgb
		swState : in std_logic_vector(3 downto 0);		
		ledState : out std_logic_vector(3 downto 0);		-- ???? state ???????????????
		rgbOut : out std_logic_vector(9 downto 0);	
		testRgbTrig : out std_logic;
		
		button : in STD_LOGIC_VECTOR (3 downto 0);  -- 1 2 5 10 ????????????
	  priceseg : out  STD_LOGIC_VECTOR (6 downto 0);	-- ???????????????????
	  pricecom : out  STD_LOGIC_VECTOR (1 downto 0);	-- selector ??? 7- segment 
	  changeseg : out  STD_LOGIC_VECTOR (6 downto 0);	
	  changecom : out  STD_LOGIC_VECTOR (3 downto 0);
	  buzzer : out  STD_LOGIC;
	  
	  selectButton : in std_logic;			-- ??????????
	  cancelButton : in std_logic;
		clk : in std_logic
		
	);
end Bus_Machine;

architecture Behavioral of Bus_Machine is
	
	signal stat : std_logic :='0';
	signal state : std_logic_vector(3 downto 0) := "0000";
	signal rgbPos : std_logic_vector(9 downto 0):= "0000000000";		-- ????????????????
	signal rgbPos1 : std_logic_vector(10 downto 0):= "00000000000";
	signal rgbPos2 : std_logic_vector(10 downto 0):= "00000000000";
	
	
	-- ??????????????????? RGB LED
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
	
	
	signal station : integer range 0 to 256 :=0;			-- ???????
	signal station1 : integer range (0) to 256 := 0;
		
	signal price : integer range 0 to 256 :=0;	
	signal price0 : STD_LOGIC;
	signal price1 : STD_LOGIC;
	signal price2 : STD_LOGIC;
	signal price3 : STD_LOGIC;
	signal can : STD_LOGIC;
	
	Signal c : integer range (0) to (50000);		-- counter 7-segment
	Signal x : integer range (0) to (9);			-- buffer ??? 7- segment
	Signal b : integer range (0) to (9);			-- buffer ??? 7- segment
	Signal z : integer range (0) to (24);			-- ??????????????????
	
	Signal sum : integer range (0) to (10):=0;	-- buffer ??????????? z
	Signal count : integer range (0) to (10):=0;	-- buffer ??????????? z
	Signal countsum : integer range (0) to (2):=0; -- buffer ??????????? z
	
	Signal statecount : STD_LOGIC := '0';	-- buffer ??????????? z
	Signal stateprice : STD_LOGIC := '0';
	Signal test : STD_LOGIC_VECTOR (9 downto 0);	-- ???input ?????????????????
	
	signal ccc : integer range 0 to 10;
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
	
	ledState <= state;	-- ???? state ?????????? led ???????

	rgbPosTrig <= posButton(9) or  posButton(8) or posButton(7) or posButton(6) or posButton(5) or posButton(4) or posButton(3) or  posButton(2) or posButton(1) or posButton(0) ; 

	-- ????????
	priceseg <=  "1101111" when x = 9 else	--9	  
					   "1111111" when x = 8 else	--8
					   "0000111" when x = 7 else	--7
					   "1111101" when x = 6 else	--6
					   "1101101" when x = 5 else	--5
					   "1100110" when x = 4 else	--4
					   "1001111" when x = 3 else	--3
					   "1011011" when x = 2 else	--2
					   "0000110" when x = 1 else	--1
					   "0111111" ;
					  		  
	
	test <= rgbPos when state ="0010";					-- ?????????????????????????????????
	rgbPos<= rgbPos1(9 downto 0 ) or rgbPos2(9 downto 0 );
	
	process(cancelButton)
	begin
		if(falling_edge(cancelButton))then
			can <= not can;
		end if;
	end process;

	-- ??????? state
	sync_proc : process(clk)
	begin
		if (rising_edge(clk))then
			state <= nextState;
			
		end if;
	end process;
	
	
	-- ?? next state
	next_state_proc : process(state,rgbPos1,rgbPos2,price0,price1,price2,price3,station,button,cancelButton,price,can)
	begin
		case (state) is
			-- state ???????????????????????
			when "0000" =>
				if (rgbPos1/="00000000000")then
					nextState <= "0001";
				else 
					nextState <= "0000";
				end if;
			-- state ????????????????????????
			when "0001" =>
				if (rgbPos2/="00000000000")then
					nextState <= "0010";
				else 
					nextState <= "0001";
				end if;
				-- state ????????????????????????????????
			when "0010" => 
				if (selectButton = '1')then
					nextState <= "1000";
					station <= (z*2)+6;
				else
					nextState <= "0010";
				end if;

		

			when others =>
				nextState <= state;
		end case;
	end process;
	
	price1 <= button(0) or button(1) or button(2) or button(3) ;

			
	process(clk,statecount,state)	 -- check station
	begin		
			if (clk'event and clk = '1' and statecount = '0' and state="0010") then
				
				if test(count) = '1' then
					countsum <= countsum+1;			
				end if;	
				
				if countsum = 1 then			
					sum <=sum+1;
				end if;	
				
				if count = 10 then

			
					z<=sum;
					count <=0;	
					statecount <= '1'; 				
				end if;
				count <= count+1;
				
			end if;
			
	end process;			

	process(clk,price)  -- ?????? ????????
	begin
		if (clk'event and clk = '1') then
			c<= c+1;
			if(c <= 25000) then
				x <= station mod 10;
				pricecom<=  "10";
			elsif (c > 25001 and c <= 50000) then
				x <= station / 10;
				pricecom<=  "01";
			end if;			
		end if;
	end process;

	-- ??? input ???????????????????????
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

