for /f "skip=2 tokens=2,*" %%A IN ('reg query "HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\2K Games\Dungeon Siege 2 Broken World" /v InstallationDirectory') do (
  set DS2PATH=%%B
)
