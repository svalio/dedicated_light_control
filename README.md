# dedicated_light_control
This project based on Arduino nano ATmega mc
Components required:
1.Arduino Nano(optional: Mega/mini etc.)
2.Control High Voltage Device: Relay 5V Arduino
3.Bluetooth module HC-05(optional: another bluetooth/BLE module)
4.Connecting wires
5.Electric network 220V
6.Power suply 12V 1-2A(Any smartphone charger)
Optional:
7.Maket board

Connecting:
1.Arduino 5V pin & Bluetooth 5V pin && Relay VCC pin connecting to power suply
2.Bluetooth GND pin && Relay GND connecting to Arduino GND pin
3.Bluetooth Rx pin -> Arduino Tx pin
4.Bluetooth Tx pin -> Arduino Rx pin
5.Relay IN pin -> Arduino D7 pin
6.Connecting "+" wire to light bulb and to Relay connect slot, "-" to another connect slot

Sketch:
1.Download dedicated_light_control.ino from this repository 
2.Firmware Arduino with this sketch using Arduino IDE

Use:
1.Connect to Bluetooth module with your smartphone etc.(not working on Apple prod.)
2.Enter password (usually 1234)
3.Download 'Bluetooth terminal' from Play Market
4.In terminal type command '1' to light the bulb on or '0' to light it off 
