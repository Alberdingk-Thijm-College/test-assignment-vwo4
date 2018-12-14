void setup() {
  // put your setup code here, to run once:

  

int ledPin =13;
ledPin (OUTPUT);
digitalWrite(13, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  print("Hello World");
  print("Dit is een voorbeeld!");
  for(int i = 0; i < 5; i++)
  {
  digitalWrite(13, HIGH);
  }
}
