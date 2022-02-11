/*
Adafruit Arduino - Lesson 13. DC Motor
*/


int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 10");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 10)
    {
      analogWrite(motorPin, speed);
    }
  }
} 
