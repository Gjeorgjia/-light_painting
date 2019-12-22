/*
 
 The DDR register, determines whether the pin is an INPUT or OUTPUT.
 The PORT register controls whether the pin is HIGH or LOW, 
 and the PIN register reads the state of INPUT pins.

 https://www.arduino.cc/en/Reference/PortManipulation
 
*/

// A basic everyday NeoPixel strip test program.

// NEOPIXEL BEST PRACTICES for most reliable operation:
// - Add 1000 uF CAPACITOR between NeoPixel strip's + and - connections.
// - MINIMIZE WIRING LENGTH between microcontroller board and first pixel.
// - NeoPixel strip's DATA-IN should pass through a 300-500 OHM RESISTOR.
// - AVOID connecting NeoPixels on a LIVE CIRCUIT. If you must, ALWAYS
//   connect GROUND (-) first, then +, then data.
// - When using a 3.3V microcontroller with a 5V-powered NeoPixel strip,
//   a LOGIC-LEVEL CONVERTER on the data line is STRONGLY RECOMMENDED.
// (Skipping these may work OK on your workbench but can fail in the field)

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define LED_PIN 8


// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 4

 
  

  // Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)


// setup() function -- runs once at startup --------------------------------

uint32_t c;


void setup() {

  //PORTD maps to Arduino digital pins 0 to 7 
  //PORTD 
  DDRD = B11100010; //sets pins2,3,4,5 as INPUT(0) and 11,12,13 as OUTPUT(1)
  
  Serial.begin(9600);
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {  
  // put your main code here, to run repeatedly:
  int value = 31 - PIND>>2; //reads PORTD inputs
  
  Serial.print(value);
  Serial.print(" : ");
  Serial.print(PIND>>2);
  Serial.print(" : ");
  Serial.print(PIND, BIN);

  if(value==0){
    c = strip.Color(0, 0, 0);
    Serial.println("---> 0");  
  }
  if(value==1){
    c = strip.Color(255,255, 0); 
    Serial.println("---> 1");   
  }
  if(value==2){
    c = strip.Color(255, 255, 255); 
    Serial.println("---> 2");   
  }
//  if(value==3){
//    c = strip.Color(0, 0, 255);  
//    Sernial.println("---> 3");  
//  }
//  if(value==4){
//  
//    c = strip.Color(255, 255, 255);  
//    Serial.println("---> 4");  
//  }

  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, c);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
                
  }
}
