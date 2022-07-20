int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int delayTime = 1000;

//usuń komentarz dla diody ze wspólną anodą 
#define COMMON_ANODE

void setup() 
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

  void loop() 
{
    setColor(255, 0,0); //red
    delay(delayTime);
    setColor(0, 255,0); //green
    delay(delayTime); 
    setColor(0,0, 255); //blue
    delay(delayTime);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue);
}
