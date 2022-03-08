int readColor() {
 digitalWrite(S2, LOW);
 digitalWrite(S3, LOW);
 frequency = pulseIn(sensorOut, LOW);
 int R = frequency;
 delay(50);
 
 digitalWrite(S2, HIGH);
 digitalWrite(S3, HIGH);
 
 frequency = pulseIn(sensorOut, LOW);
 int G = frequency;
 delay(50);
 
 digitalWrite(S2, LOW);
 digitalWrite(S3, HIGH);
12
 
 frequency = pulseIn(sensorOut, LOW);
 int B = frequency;
 delay(50);
if(R>115 & R<119 & B>106 & B<109)
{
 color = 1; // Purple
 }
 
 if(R>=101 & R<=104 & G>=107 & G<=113)
{
 color = 3; // Green
 }
 if(R>=94 & R<=99 && G>=106 & G<=109)
{
 color = 4; // Yellow
 }
 if (G>124 & G<128 & B>117 &B<121)
{
 color = 5; // Blue
 }
 return color; 
}

