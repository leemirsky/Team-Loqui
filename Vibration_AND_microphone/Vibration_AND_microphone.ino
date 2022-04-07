int led = 13;
const int motorPin = 3;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);

  if (sensorValue > 200){
   digitalWrite(led, HIGH);
   digitalWrite(motorPin, HIGH);
  }
  else{
    digitalWrite(led, LOW);
    digitalWrite(motorPin, LOW);
  }
  }
