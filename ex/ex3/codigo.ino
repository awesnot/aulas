
// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);
}
void loop()
{
  digitalWrite(2,HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(4,HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(9,HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(10,HIGH);
   delay(2000); // Wait for 2000 millisecond(s) 
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
