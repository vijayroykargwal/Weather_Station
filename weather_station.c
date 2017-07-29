#include <dht.h>

#include <LiquidCrystal.h>  // including the LCD library

LiquidCrystal lcd ( 12, 11, 5, 4, 3, 2 );// initializing the lcd pins

dht DHT;// declaring dht a variable

#define DHT11_PIN 8  // initializing pin 8 for dht

void setup ( ) 
{

lcd.begin ( 16, 2 ); // starting the 16 x 2 lcd

}

void loop ( )

{

int chk = DHT.read11(DHT11_PIN );// Checking that either the dht is working or not

lcd.setCursor ( 0, 0 );//Â  starting the cursor fromâ€šÂ  top left

lcd.print ( " Temperature: " );// printing the Â¢Ã¢â€šÂ¬â€œ Temperature is : ÃƒÂ¢Ã¢â€šÂ¬Ã¯Â¿Â½ on the lcdÃƒâ€šÃ‚Â 

lcd.print ( DHT.temperature );// printing the temperature on the lcd

lcd.print ( ( char ) 223 );

lcd.print ( " C " );// Printing ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œ C ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œ on the display

lcd.setCursor ( 0,1 );

lcd.print ( " Humidity : " );// printing ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œ humidity is : ÃƒÂ¢Ã¢â€šÂ¬Ã¯Â¿Â½ on the display

lcd.print ( DHT.humidity );// printing humidity on the display

lcd.print ( " % " );// printing ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œ % ÃƒÂ¢Ã¢â€šÂ¬Ã¯Â¿Â½ on display

delay ( 1000 );// Giving delay of 1 second.

}



