


// Group 8 - PIR Sensor with LED 
// Odokonyero Ronald 
// 24/U/3416/GIW/PS
// 2410003416
// This code uses a PIR sensor to detect motion and turns on an LED when motion is detected



int ledPin = 17;                // choose the pin for the LED
int inputPin = 19;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected at that moment 
int val = 0;                    // variable for reading the pin status

void setup() {
  // put your setup code here, to run once:
pinMode(,17 OUTPUT);
  digitalWrite( 29, LOW);
  
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;

}
} else
{

digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH) {
      // we have just turned of
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;

}
  }
}
