# ArduinoAnalogGPIO
When you have run out of conventional digital pins in your Arduino Uno you can use the analog pins
You can use the Arduino Uno's analog input pins as digital pins for various purposes, such as turning relays on and off. The analog pins on the Arduino Uno, labeled A0 to A5, can function as digital input/output (I/O) pins.

When using the analog pins as digital I/O, you will need to refer to them using their digital pin numbers instead of their analog pin labels. The mapping of analog to digital pin numbers on the Arduino Uno is as follows:

A0 = digital pin 14

A1 = digital pin 15

A2 = digital pin 16

A3 = digital pin 17

A4 = digital pin 18

A5 = digital pin 19

To use an analog pin as a digital I/O, you can set it up in your sketch just like you would with a digital pin. For example, if you want to use analog pin A1 as a digital output to control a relay, you would use the code in this repo.
