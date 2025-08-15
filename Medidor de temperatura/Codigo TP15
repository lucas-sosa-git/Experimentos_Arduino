#include <SoftwareSerial.h>
SoftwareSerial BT(10,11);
#define buzzer 3
#define sensorTemp A5
#define NOTE_C1  33

int dato,leds;

////Inicio de funciones
void prenderOapagarTodo()//prende el led y el buzzer
{
    digitalWrite(6,HIGH);
  delay(250);
  
   tone(buzzer , NOTE_C1 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(6,LOW);
  delay(250);
  
  digitalWrite(5,HIGH);
  delay(250);
  
   tone(buzzer , NOTE_C1 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(5,LOW);
  delay(250);
  
  digitalWrite(4,HIGH);
  delay(250);
  
  tone(buzzer , NOTE_C1 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(4,LOW);
  delay(250); 
}

void prenderOapagarTodo(char apagar)// Cuando tiene una "a" se apaga
{
  if (apagar == 'a' )
  {
   digitalWrite(6,LOW);
  delay(250);
  
   tone(buzzer , 0 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(6,LOW);
  delay(250);
  
  digitalWrite(5,LOW);
  delay(250);
  
   tone(buzzer , 0 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(5,LOW);
  delay(250);
  
  digitalWrite(4,LOW);
  delay(250);
  
  tone(buzzer , 0 , 325 );
  delay(300);
  tone(buzzer , 0 , 325 );
  delay(300);
  
  digitalWrite(4,LOW);
  delay(250);
  }
}

float calcularTemperatura()
{
  float voltaje = analogRead(sensorTemp);
  voltaje = voltaje*5.0;
  voltaje /= 1024.0;
  Serial.print("Temperatura actual: ");
  return round((voltaje - .5)*100);
}

void bluetoothConfig()
{
  if (BT.available()) 
  {
    Serial.write(BT.read);
  }
  
  if (Serial.available())
  {
  	BT.write ( Serial.read());
  }
}


////Final de funciones

void setup()
{
  Serial.begin(9600);
  
  for (int leds = 3;leds<=6;leds++)
  {
    pinMode(leds,INPUT);
  }
  pinMode(sensorTemp,INPUT);
}

void loop()
{
  
  	dato = BT.read();
  	
  	switch( dato )
    {
      case 'on':
      	prenderOapagarTodo();
      case 'off':
      	prenderOapagarTodo('a');
      case 'temp':
      	BT.write((calcularTemperatura()));
      break;
    }
}