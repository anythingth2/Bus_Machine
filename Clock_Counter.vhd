----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:18:26 05/20/2018 
-- Design Name: 
-- Module Name:    Clock_Counter - Behavioral 
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

entity Clock_Counter is
	generic(
		N : integer
	);
	port(
		clock : in std_logic;
		trigger : out std_logic;
		rgb : out std_logic_vector(2 downto 0)
	);
end Clock_Counter;

architecture Behavioral of Clock_Counter is
	signal c : integer range (0) to (50000000);
begin

	process(clock)
	begin
		if (clock'event and clock = '1') then
			c<= c+1;
			if ( c < N )then
				trigger <= '0';
			else
				trigger <= '1';
				c <= 0;
			end if;			
		end if;
	end process;

end Behavioral;

