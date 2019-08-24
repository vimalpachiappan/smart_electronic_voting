#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sw1=10;
int sw2=8;
int sw3=9;
int sw4=13;
int sw5=6;
int a=0;
int b=0;
int c=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
  
lcd.begin(16,2);
lcd.setCursor(4,0);
lcd.print("ELECTRONIC");
lcd.setCursor(0,1);
lcd.print("VOTING");
lcd.setCursor(8,1);
lcd.print("MACHINE");
delay(3000);
lcd.clear();

digitalWrite(sw1,HIGH);
digitalWrite(sw2,HIGH);
digitalWrite(sw3,HIGH);
digitalWrite(sw4,HIGH);
digitalWrite(sw5,HIGH);
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("BJP");
lcd.setCursor(6,0);
lcd.print("AAP");
lcd.setCursor(12,0);
lcd.print("CONG");
lcd.setCursor(0,1);
lcd.print("SW1");
lcd.setCursor(6,1);
lcd.print("SW2");
lcd.setCursor(12,1);
lcd.print("SW3");

delay(1000);



}

void loop() {
  
  // put your main code here, to run repeatedly:



if(digitalRead(sw1)==LOW)
{
  a=a+1;
  lcd.clear();
  lcd.setCursor(0,0);
 lcd.print("THANKS FOR");
 lcd.setCursor(5,1);
 lcd.print("VOTING");
 while(digitalRead(sw4)== HIGH);
admin();
     
}
 else if(digitalRead(sw2)== LOW)
{b=b+1;
lcd.clear();
  lcd.setCursor(0,0);
 lcd.print("THANKS FOR");
 lcd.setCursor(5,1);
 lcd.print("VOTING");
while(digitalRead(sw4)==HIGH);
admin();
}
 else if(digitalRead(sw3)== LOW)
{c=c+1;
lcd.clear();
  lcd.setCursor(0,0);
 lcd.print("THANKS FOR");
 lcd.setCursor(5,1);
 lcd.print("VOTING");
while(digitalRead(sw4)==HIGH);
admin();
}
 
 if(digitalRead(sw5)== LOW)
{
  lcd.begin(16,2);z
lcd.setCursor(0,0);
lcd.print("BJP");
lcd.setCursor(6,0);
lcd.print("AAP");
lcd.setCursor(12,0);
lcd.print("CONG");
lcd.setCursor(0,1);
lcd.println(a);
lcd.setCursor(6,1);
lcd.println(b);
lcd.setCursor(12,1);
lcd.println(c);
delay(2000);
lcd.clear();
  int d=a+b+c;
  if(d)
  { if(a>b && a>c )
  {
   lcd.setCursor(0,0);
   lcd.print("CONGRATS");
   lcd.setCursor(5,1);
   lcd.print("BJP WINS");
   delay(2000);
   lcd.clear();
  }
else if(b>a && b>c )
 {
   lcd.setCursor(0,0);
   lcd.print("CONGRATS");
   lcd.setCursor(5,1);
   lcd.print("AAP WINS");
   delay(2000);
   lcd.clear();
 }
 else if(c>b && c>a )
 {
   lcd.setCursor(0,0);
   lcd.print("CONGRATS");
   lcd.setCursor(5,1);
   lcd.print("CONG WINS");
   delay(2000);
   lcd.clear();
 }
 else
 {
  lcd.setCursor(0,0);
  lcd.print("NO RESULT");
  lcd.setCursor(0,1);
  lcd.print("OR TIE");
  
  delay(2000);
   lcd.clear();
 
 }
  }
 else
 {
  lcd.print("NO VOTE");
  delay(2000);
  lcd.clear();
 }
 
  
  
}


}
int admin()
{if(digitalRead(sw4)== LOW)
{lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("BJP");
lcd.setCursor(6,0);
lcd.print("AAP");
lcd.setCursor(12,0);
lcd.print("CONG");
lcd.setCursor(0,1);
lcd.print("SW1");
lcd.setCursor(6,1);
lcd.print("SW2");
lcd.setCursor(12,1);
lcd.print("SW3");

delay(1000);

}
}
