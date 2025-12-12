#include <Servo.h>

// --- 1. DECLARACIÓN ADELANTADA ---
void mover(int pinJoystick, float& posicionActual, Servo& elServo, int minGrados, int maxGrados);

// --- 2. DEFINICIÓN DE PINES ---
#define X1 A1  // Codo
#define X2 A0  // Garra
#define Y1 A2  // Hombro
#define Y2 A3  // Base

// Servos (Pines digitales PWM)
const int PIN_BASE   = 11; 
const int PIN_HOMBRO = 10; 
const int PIN_CODO   = 6;  
const int PIN_GARRA  = 5;  

// --- 3. OBJETOS Y VARIABLES ---
Servo servorot;
Servo servobrazo;
Servo servopala;
Servo servopinza;

// Posiciones iniciales
float posBase   = 90.0;
float posHombro = 45.0; 
float posCodo   = 70.0; 
float posGarra  = 60.0; 

// Configuración
const int centro = 512;
const int zonaMuerta = 30;
unsigned long tiempoAnterior = 0;
const long intervaloServo = 20; 

// --- 4. SETUP ---
void setup() {
  Serial.begin(9600);

  servorot.attach(PIN_BASE);
  servobrazo.attach(PIN_HOMBRO);
  servopala.attach(PIN_CODO);
  servopinza.attach(PIN_GARRA);
  
  servorot.write((int)posBase);
  servobrazo.write((int)posHombro);
  servopala.write((int)posCodo);
  servopinza.write((int)posGarra);
  
  delay(500); 
}

// --- 5. LOOP ---
void loop() {
  unsigned long tiempoActual = millis();

  if (tiempoActual - tiempoAnterior >= intervaloServo) {
    tiempoAnterior = tiempoActual;

    // AQUI ES DONDE DEFINES LOS LIMITES (Mínimo, Máximo)
    // Cambia los dos últimos números de cada línea según lo que tu robot necesite.
    
    // Base: Suele poder girar casi todo (0 a 180)
    mover(Y2, posBase, servorot, 0, 180);     
    
    // Hombro: Cuidado que no pegue en el suelo (Ej: 10 a 150)
    mover(Y1, posHombro, servobrazo, 0, 93); 
    
    // Codo: Rango medio (Ej: 20 a 160)
    mover(X1, posCodo, servopala, 0, 140);    
    
    // Garra: No suele necesitar abrirse hasta 180 (Ej: 10 cerrado, 90 abierto)
    mover(X2, posGarra, servopinza, 60, 90);  
  }
}

// --- 6. FUNCIÓN MOVER MEJORADA ---
void mover(int pinJoystick, float& posicionActual, Servo& elServo, int minGrados, int maxGrados) {
  
  int lectura = analogRead(pinJoystick);

  if (abs(lectura - centro) > zonaMuerta) {
    
    // Velocidad: Ajusta el 40.0 para ir más lento o rápido
    float velocidad = (lectura - centro) / 90.0;
    
    posicionActual = posicionActual + velocidad;

    // AQUI OCURRE LA MAGIA:
    // Limitamos usando los números que enviaste desde el Loop
    posicionActual = constrain(posicionActual, minGrados, maxGrados);

    elServo.write((int)posicionActual);
  }
}
