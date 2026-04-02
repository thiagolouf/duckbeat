# DuckBeat!!!
### cute lil spotify display :3

DuckBeat is a tiny duck-themed spotify display powered by an ESP32  
It shows the currently playing track, album art, and playback status. Controlling it using switches and a rotary encoder

#### why i did it 
I wanted a tiny desk companion that displays my currently playing Spotify music in a fun and satisfying way with the switches.  
The duck-themed design is because i love ducks and i have a ton on my room lol

## stuff it haves/does

- displays current song on screen
- rotary knob for control
- mechanical buttons for playback
- RGB LED feedback
- custom 3D printed enclosure

## hardware

- ESP32-C3 SuperMini
- ST7735 1.8" SPI TFT display
- WS2812B LED strip
- EC11 rotary encoder
- 3x MX switches

## wiring

![wiring](images/duckbeat_wiring.png)

## render 

![render](images/duckbeat_render.png)

## bill of materials

| Component | Purpose | Qty | Cost (USD) | Distributor |
|----------|---------|-----|-----------|-------------|
| EC11 Rotary Encoder | control music | 1 | 0.00 | local shop |
| Red MX Switches | control playback | 3 | 5.31 | Aliexpress |
| WS2812B 144/m LED strip (1m, IP30) | move the ligths to the music and more | 1 | 9.97 | Aliexpress |
| TFT ST7735 1.8" Display | display Spotify info | 1 | 5.77 | Aliexpress |
| ESP32-C3 SuperMini | main microcontroller | 1 | 5.66 | Aliexpress |

**Estimated total cost:** $32.32
