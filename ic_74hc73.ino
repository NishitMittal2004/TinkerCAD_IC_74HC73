// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(1000); 
  
  digitalWrite(10, LOW);
  delay(1000); 
  
  
}