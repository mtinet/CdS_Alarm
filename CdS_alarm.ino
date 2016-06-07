const int buzzerpin=8;
const int ledpin=6;
const int sensorpin=A5;
int val =0;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerpin, OUTPUT);
  pinMode(ledpin, OUTPUT);
  val = analogRead(sensorpin)-200;
  Serial.print("Initial Value:");
  Serial.println(val);
}

void loop()
{
  int rate = analogRead(sensorpin);
  Serial.println(rate);
  
  if(rate<val)
  {
    digitalWrite(buzzerpin, HIGH);
    digitalWrite(ledpin, HIGH);
    delay(50);               
    digitalWrite(buzzerpin, LOW); 
    digitalWrite(ledpin, LOW);    
    delay(50);
  }
  else
  {
    digitalWrite(ledpin, LOW);
    delay(200);
    digitalWrite(ledpin,HIGH);
    delay(50);
  }
}
