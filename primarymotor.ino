int input1 = 9;
int input2 = 8;
int analogPin = A0;
float t;

void setup()
{
  pinMode(input1, OUTPUT);
  pinMode(input1, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int input = analogRead(analogPin);
  Serial.println(input);
  double voltage = (double(input)/1023)*5 ;
  Serial.println(voltage);
  double tempc = -50+ (100*voltage);
  t = tempc;
  Serial.println(t);
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  if (t>50)
  {
    digitalWrite(input1,LOW);
    delay(1000);
    digitalWrite(input2, HIGH);
    digitalWrite(input1, LOW);
    delay(5000); //problem
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);
  }
     

}

