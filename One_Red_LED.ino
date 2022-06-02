//Declare Variables

int LED_Pin = 2; //Digital Pin 2 
int dt = 500; //Delay Time

void setup() {
  // put your setup code here, to run once:
pinMode(LED_Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (LED_Pin, HIGH); //LED Turns on 
delay(dt);
digitalWrite(LED_Pin,LOW); //LED Turns Off 
delay(dt);
}
