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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Bus_Machine is
	port(
		posButton : in std_logic_vector(9 downto 0);
		rgbCommon : out std_logic_vector(9 downto 0);
		rgb : out std_logic_vector(2 downto 0)
	);
end Bus_Machine;

architecture Behavioral of Bus_Machine is
	signal position : std_logic_vector(7 downto 0);
	
begin
	rgbCommon <= posButton;
	rgb <= "100";

end Behavioral;

