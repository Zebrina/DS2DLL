set ds2bw_reg_key=HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\2K Games\Dungeon Siege 2 Broken World
for /f "skip=2 tokens=2,*" %%A IN ('reg query "%ds2bw_reg_key%" /v InstallationDirectory') do (
  set ds2bw_install_dir=%%B
)
echo %ds2bw_install_dir%
pause