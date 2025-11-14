// PROGRAMACIÓN PROVISIONAL
#include <Servo.h>

Servo rot;
Servo brazo;
Servo pala;
Servo pinza;

#define X1 A1
#define X2 A0
#define Y1 A2
#define Y2 A3
#define Max 1021

void setup()
{
  rot.attach(11);
  brazo.attach(10);
  pala.attach(6);
  pinza.attach(5);
  
  rot.write(90);
  brazo.write(90);
  pala.write(90);
  pinza.write(90);
  
  Serial.begin(9600);
}

void loop()
{
  manual();
}

void manual(){
  int i, j, k, l;
  
  // Movimiento Rotacional
  if(analogRead(X1)<=510){
    for(i=rot.read();i<180;i++){
      if(analogRead(X1)>510)
        break;
      rot.write(i);
      delay(20);
    }
  }else if(analogRead(X1)>510){
    for(i=rot.read();i>2;i--){
      if(analogRead(X1)<510)
        break;
      rot.write(i);
      delay(20);
    }
  }

  //Movimiento Brazo
  if(analogRead(Y1)<=510){
    for(j=brazo.read();j<180;j++){
      if(analogRead(Y1)>510)
        break;
      brazo.write(j);
      delay(20);
    }
  }else if(analogRead(Y1)>510){
    for(j=brazo.read();j>2;j--){
      if(analogRead(Y1)<510)
        break;
      brazo.write(j);
      delay(20);
    }
  }
  

  
  
  
  
  
  /*Pruebas
  i = rot.read();
  Serial.println(i);
  delay(200);*/
}