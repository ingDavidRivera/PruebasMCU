#define pulsadorSH 14
#define pulsadorSAH 15
#define MotorSH 16
#define MotorSAH 17

int boton_sh = 0;
int boton_sah = 0;

void setup() {
  pinMode(MotorSH,OUTPUT);
  pinMode(MotorSAH,OUTPUT);
  pinMode(pulsadorSH,INPUT);
  pinMode(pulsadorSAH,INPUT);  
  pinMode(LED_BUILTIN,OUTPUT); // LED de verificación para los pulsadores  
}

void loop() {
// Inicio de pruebas  
  prueba_motor(); // Función de prueba para verificar el funcionamiento de los motores, se puede eliminar una vez verificado
  prueba_pulsadores(); // Función de prueba para verificar el funcionamiento de los pulsadores, se puede eliminar una vez verificado
// Fin de pruebas
/* Eliminar esta linea para probar funcionamiento conjunto
  if (boton_sh == HIGH){
    digitalWrite(MotorSH,HIGH);
    digitalWrite(MotorSAH,LOW);
  else if (boton_sah == HIGH){
    digitalWrite(MotorSH,LOW);
    digitalWrite(MotorSAH,HIGH);    
  }  
  }
Eliminar esta linea para probar funcionamiento conjunto */ 
}

/* NO ELIMINAR las siguientes líneas */
// Función de prueba de los motores
void prueba_motor(){
  // Sentido horario
  digitalWrite(MotorSH,HIGH); // Activa el motor en sentido horario
  delay(1000);                // Esperar 1 segundo
  digitalWrite(MotorSH,LOW);  // Apagar el motor en sentido antihorario
  delay(2000);                // Esperar 2 segundos
  // Sentido antihorario
  digitalWrite(MotorSAH,HIGH); // Activa el motor en sentido horario
  delay(2000);                // Esperar 2 segundos
  digitalWrite(MotorSAH,LOW);  // Apagar el motor en sentido horario
  delay(2000);                // Esperar 2 segundos
}

void prueba_pulsadores(){
  boton_sh = digitalRead(pulsadorSH);
  digitalWrite(MotorSH, boton_sh);
  boton_sah = digitalRead(pulsadorSAH);
  digitalWrite(MotorSAH, boton_sah);    
}
