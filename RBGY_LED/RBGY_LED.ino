//Declare Variable
// g = green, b=blue, r=red, y=yellow, p = pin 
int g_p = 2;
int b_p = 7;
int r_p = 10;
int y_p = 12;

int dt = 500; // delay time 


void setup() {
  // put your setup code here, to run once:
  pinMode(g_p,OUTPUT);
  pinMode(b_p,OUTPUT);
  pinMode(y_p,OUTPUT);
  pinMode(r_p,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(g_p, HIGH);
delay (dt);
digitalWrite(g_p, LOW);
delay (dt);

digitalWrite(b_p, HIGH);
delay (dt);
digitalWrite(b_p, LOW);
delay (dt);

digitalWrite(r_p, HIGH);
delay (dt);
digitalWrite(r_p, LOW);
delay (dt);

digitalWrite(y_p, HIGH);
delay (dt);
digitalWrite(y_p, LOW);
delay (dt);

}
