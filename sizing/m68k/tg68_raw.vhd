library IEEE; use IEEE.std_logic_1164.all;
-- TG68K kernel configured as a 68000, registered pins only, for area measurement.
entity tg68_raw is port (
  clk : in std_logic; nReset : in std_logic; clkena_in : in std_logic;
  data_in : in std_logic_vector(15 downto 0); IPL : in std_logic_vector(2 downto 0);
  addr_out : out std_logic_vector(31 downto 0); FC : out std_logic_vector(2 downto 0);
  data_write : out std_logic_vector(15 downto 0); busstate : out std_logic_vector(1 downto 0);
  nWr, nUDS, nLDS : out std_logic);
end;
architecture a of tg68_raw is
begin
  k : entity work.TG68KdotC_Kernel
    generic map (SR_Read => 0, VBR_Stackframe => 0, extAddr_Mode => 0, MUL_Mode => 0, DIV_Mode => 0,
                 BitField => 0, BarrelShifter => 0, MUL_Hardware => 0)
    port map (CPU => "00", clk => clk, nReset => nReset, clkena_in => clkena_in, data_in => data_in,
              IPL => IPL, IPL_autovector => '1', addr_out => addr_out, berr => '0', FC => FC,
              data_write => data_write, busstate => busstate, nWr => nWr, nUDS => nUDS, nLDS => nLDS,
              nResetOut => open, skipFetch => open);
end;
