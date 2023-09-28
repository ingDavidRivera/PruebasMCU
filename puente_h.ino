#define pulsadorSH 14
#define pulsadorSAH 15
#define MotorSH 16
#define MotorSAH 17

void setup() {
  pinMode(MotorSH,OUTPUT);
  pinMode(MotorSAH,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT); // LED de verificación para los pulsadores  
}

void loop() {
  prueba_motor(); // Función de prueba para verificar el funcionamiento de los motores, se puede eliminar una vez verificado


}

// Función de prueba de los motores
void prueba_motor(){
  // Sentido horario
  digitalWrite(MotorSH,HIGH); // Activa el motor en sentido horario
  delay(1000);                // Esperar 1 segundo
  digitalWrite(MotorSH,LOW);  // Apagar el motor en sentido antihorario
  delay(2000);                // Esperar 2 segundos
  // Sentido antihorario
  digitalWrite(MotorSH,HIGH); // Activa el motor en sentido horario
  delay(2000);                // Esperar 2 segundos
  digitalWrite(MotorSH,LOW);  // Apagar el motor en sentido horario
  delay(2000);                // Esperar 2 segundos
}

void prueba_pulsadores(){
  
}
