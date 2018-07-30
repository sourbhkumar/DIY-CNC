# DIY-CNC
DIY CNC using Arduino, inkscape and processing. 
Thanks for Download this files for CNC programming codes for Arduino and also there is one another way to control your home made CNC is to use the benbox laser engraver which also included in this downloaded file.

Simply flash your Arduino using the laser engraver.hex file in the benbox folder and upload the image directly to ben box and execute the file to print.



Let me know if you have any questions or querry about this project.
I will love to help you!!

www.grabcad.com/sourbh
www.juverit.com >>> Contact us.


Make your machine two axial, one each stepper connected to X, Y axis.
Servo is Z axis to control pen/Laser up/down respectively.

Connection them according to the circuit diagram. If need to change the pin kindly edit the "arduino_CNC.ino" file.

Burn the "arduino_CNC.ino" under "CNC ARDUINO CODES" folder to Arduino connected to servo and stepper.

Open Processing after installation, feed the "GCODE_PROCESSING_SOURCE_CODE" under the folder "PROCESSING PROGRAM AND EXECUTOR", hit run and follow the commands.

p: select serial port
1: set speed to 0.001 inches (1 mil) per jog
2: set speed to 0.010 inches (10 mil) per jog
3: set speed to 0.100 inches (100 mil) per jog
arrow keys: jog in x-y plane
page up & page down: jog in z axis
$: display grbl settings
h: go home
0: zero machine (set home to the current location)
g: stream a g-code file
x: stop streaming g-code (this is NOT immediate)

