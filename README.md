# dedicated_light_control
This project based on Arduino nano ATmega mc<br>
Components required:<br>
1.Arduino Nano(optional: Mega/mini etc.) <br>
2.Control High Voltage Device: Relay 5V Arduino<br>
3.Bluetooth module HC-05(optional: another bluetooth/BLE module)<br>
4.Connecting wires<br>
5.Electric network 220V<br>
6.Power suply 12V 1-2A(Any smartphone charger)<br>
Optional:<br>
7.Maket board<br>

Connecting:<br>
1.Arduino 5V pin & Bluetooth 5V pin && Relay VCC pin connecting to power suply<br>
2.Bluetooth GND pin && Relay GND connecting to Arduino GND pin<br>
3.Bluetooth Rx pin -> Arduino Tx pin<br>
4.Bluetooth Tx pin -> Arduino Rx pin<br>
5.Relay IN pin -> Arduino D7 pin<br>
6.Connecting "+" wire to light bulb and to Relay connect slot, "-" to another connect slot<br>

Sketch:<br>
1.Download dedicated_light_control.ino from this repository <br>
2.Firmware Arduino with this sketch using Arduino IDE<br>

Use:<br>
1.Connect to Bluetooth module with your smartphone etc.(not working on Apple prod.)<br>
2.Enter password (usually 1234)<br>
3.Download 'Bluetooth terminal' from Play Market<br>
4.In terminal type command '1' to light the bulb on or '0' to light it off <br>
