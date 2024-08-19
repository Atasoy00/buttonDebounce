# buttonDebounce
This repository contains C code developed for an STM32 (f745zgt6) device, featuring a button debounce implementation. The debounce logic ensures that button presses are accurately detected by eliminating the noise and rapid, unintended toggling that can occur when a button is pressed or released.


Hardware prewiev:

![Başlıksız Diyagram drawio](https://github.com/user-attachments/assets/b1e73a05-0cc5-4895-874c-2f7e274ba1ab)

Theory of operation :

Button 1 -> LED 1
Button 2 -> LED 2
Button 3 -> LED 3
Button 4 -> LED 4

When any of the four buttons is pressed, if the debounce period has been completed, the LED connected to the pressed button is toggled.
