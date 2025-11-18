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
  controles();
}



void controles(){
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
    
   //Movimiento Pala (falta calcular limites)
    if(analogRead(Y2)<=510){
    for(k=pala.read();k<180;k++){
      if(analogRead(Y2)>510)
        break;
      pala.write(k);
      delay(20);
    }
  }else if(analogRead(Y2)>510){
    for(k=pala.read();k>2;k--){
      if(analogRead(Y2)<510)
        break;
      pala.write(k);
      delay(20);
    }
  }
      
   //Movimiento Pinza (Hay que ver los limites del servo)
    if(analogRead(X2)<=510){
    for(l=pinza.read();l<180;l++){
      if(analogRead(X2)>510)
        break;
      pinza.write(l);
      delay(20);
    }
  }else if(analogRead(X2)>510){
    for(l=pinza.read();l>2;l--){
      if(analogRead(X2)<510)
        break;
      pinza.write(l);
      delay(20);
    }
  }
  
/*
	Preguntar sik hay alguna función para que se lleven a cabo los tres if a la vez
    PROBLEMA: hasta que no termina de hacer un if no empieza otro movimiento
    Causa: el bucle del if
*/
  
  
  /*Pruebas
  i = rot.read();
  Serial.println(i);
  delay(200);*/
}