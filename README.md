# DS2DllLoader

## Status
The loader injects itself via d3d9.dll. Plugins can be created using the same techniques as in Dungeon Siege 1 (Link to guide below). Plugins should placed inside <Game Directory>\plugins\ with the extension .ds2dll or .ds2dl0, where plugins with the extension .ds2dl0 are loaded before the games own exported functions (basically the skrit functions) and .ds2dll plugins are loaded after.

Link to .dsdll (same procedure) guide (and more): https://siegetheday.org/files/sucompilation.zip
