# AI-blinky

Speech controlled blinky app for ESP32 LyraT v4.3
wakeword expression: "Hi, Lexin!" (audio file for pronounciation provided in "hilexin.wav")
speech commands: - (1) "Turn on the light"
                 - (2) "Turn off the light"
                 - (3) "Upali svijetlo"
                 - (4) "Ugasi svijetlo"
                 
ESP-IDF v3.3.1 required
  - https://github.com/espressif/esp-idf/releases/tag/v3.3.1
  - follow instructions on https://github.com/espressif/esp-skainet/tree/ce9bb5a1e7fa8f476a3c668236487f3d758861a1/examples/get_started

build app with ```make```
build and flash with ```make flash monitor```
in mingw32.exe command promt
