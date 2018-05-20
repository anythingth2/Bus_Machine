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
	
	
	signal state : std_logic_vector(4 downto 0) := "00000";
	signal rgbPos : std_logic_vector(9 downto 0):= "0101011000";
	
	
	component Display_LED 
		port(
			rgb : out std_logic_vector(2 downto 0);
			rgbPos : in std_logic_vector(9 downto 0);
			clk :in std_logic;
			rgbCommon : out std_logic_vector(9 downto 0)
		);
	end component;
	
begin

	 DisplayLed : Display_LED port map(rgb => rgb,rgbPos => rgbPos, clk => clk,rgbCommon => rgbCommon);
	
	
	
	
end Behavioral;

