int g_p = 2;
int b_p = 7;
int r_p = 10;
int y_p = 12;

int dt = 500;

// Color Picker Strings
String msg = "Please Enter a Color";
String msg_final = "Thank You For Playing";
String msg3 = "NICE!";
String mycolor ;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(g_p,OUTPUT);
  pinMode(b_p,OUTPUT);
  pinMode(y_p,OUTPUT);
  pinMode(r_p,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
while (Serial.available()==0){}
mycolor=Serial.readString();
if (mycolor=="red"){
  digitalWrite(r_p,HIGH);
  digitalWrite(g_p,LOW);
  digitalWrite(b_p,LOW);
  digitalWrite(y_p,LOW);
}
if (mycolor == "green"){
  digitalWrite(r_p,LOW);
  digitalWrite(g_p,HIGH);
  digitalWrite(b_p,LOW);
  digitalWrite(y_p,LOW);
}
if (mycolor =="blue"){
  digitalWrite(r_p,LOW);
  digitalWrite(g_p,LOW);
  digitalWrite(b_p,HIGH);
  digitalWrite(y_p,LOW);
  Serial.println(msg3);
}
if (mycolor =="yellow"){
  digitalWrite(r_p,LOW);
  digitalWrite(g_p,LOW);
  digitalWrite(b_p,LOW);
  digitalWrite(y_p,HIGH);
}

}
