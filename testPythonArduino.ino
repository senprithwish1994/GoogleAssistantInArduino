
int data;
void setup() {
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(8, OUTPUT); //make the LED pin (13) as output
  digitalWrite (8, LOW);
  //Serial.println("Hi!, I am Arduino");
}
void loop() {
while (Serial.available()){
  data = Serial.read();


if (data == 0){
digitalWrite (8, HIGH);
delay(5000);
}
else if (data == 1)
{digitalWrite (8, LOW);
delay(5000);
}
}
}
