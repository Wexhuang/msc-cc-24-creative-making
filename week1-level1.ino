int led1 = 7;
int led2 = 8;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
 digitalWrite(led2,HIGH);
 delay(100);
 digitalWrite(led2,LOW);
 delay(100);
 digitalWrite(led1,HIGH);
 delay(50);
 digitalWrite(led1,LOW);
 delay(50);



}
