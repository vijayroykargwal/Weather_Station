# Weather_Station
Weather Station using DHT11 Temp&amp;Humidity Sensor And Arduino Uno

DHT11 sensor is used to measure the temperature and humidity. It has a resistive humidity sensing component and a negative temperature coefficient (NTC). An 8 bit MCU is also connected in it which is responsible for its fast response. It is very inexpensive but it gives values of both temperature and humidity at a time.

# DHT11 interfacing with arduino
First of all connect the ground and the VCC of the DHT11 temperature and humidity sensor to the ground and 5v of the Arduino. Then connect the data pin of the DHT11 sensor to the pin 2 of the Arduino.

# Installing the DHT11 Library 
To run the following code in Arduino IDE you will first have to install the DHT library in you Arduino directory.

Download the zip file DHT LIbrary and place it in your Arduino library folder. The path to Arduino library folder for my computer is Documents/ Arduino/ Libraries

Unzip the downloaded file and place it in this folder.

After copying the files, the Arduino library folder should have a new folder named DHT containing the dht.h and dht.cpp. After that copy the code(WeatherStation.c) in the Arduino IDE and upload the code.

# Weather Station using DHT11 and arduino
In this example we will make a weather station that will sense the humidity and temperature and will show it on the lcd attached to the Arduino. Make the circuit as shown in the diagram. The resistor in the circuit will make the black light darker. We have used the 220 ohm resistor but you can use any resistor having value near to that. The potentiometer we used in the circuit is used to set the screen contrast. We have used the 10 K ohm value but you can choose any value relative to that one.

# Components Required 
Arduino Uno (you can use any)
16 x 2 LCD
DHT11 Temperature and humidity sensor
10 K ohm potentiometer
220 ohm resistor


