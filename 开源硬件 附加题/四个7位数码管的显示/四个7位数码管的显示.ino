void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
byte in;
void loop()
{
  int k1,k2,k3,k4;
  k1=1;
 while(k1)
  {
    if(Serial.available()>0)
{
      k1=0;
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
 
    in=Serial.read();
  delay(10);
  in=in-'0';
  if(in&0x1>0)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
   if((in>>1)&0x1>0)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }
     if((in>>2)&0x1>0)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
     if((in>>3)&0x1>0)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }
break;}
  }
   digitalWrite(12, HIGH);
  delay(30);
k2=1;
  while(k2)
  { if(Serial.available()>0)
{k2=0;
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  
    in=Serial.read();
  delay(10);
  in=in-'0';
  if(in&0x1>0)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
   if((in>>1)&0x1>0)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }
     if((in>>2)&0x1>0)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
     if((in>>3)&0x1>0)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }
 break;}
}
   digitalWrite(7, HIGH);
   delay(30);
  k3=1;
  while(k3)
  {if(Serial.available()>0)
{
    k3=0;
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  
    in=Serial.read();
  delay(10);
  in=in-'0';
  if(in&0x1>0)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
   if((in>>1)&0x1>0)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }
     if((in>>2)&0x1>0)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
     if((in>>3)&0x1>0)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }
break;}
  }
   digitalWrite(8, HIGH);
  
  delay(30);
  k4=1;
while(k4)
{if(Serial.available()>0)
{ k4=0;
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
 
    in=Serial.read();
  delay(10);
  in=in-'0';
  if(in&0x1>0)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
   if((in>>1)&0x1>0)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }
     if((in>>2)&0x1>0)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
     if((in>>3)&0x1>0)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }
break;}
}
   digitalWrite(13, HIGH);
delay(30);

}
