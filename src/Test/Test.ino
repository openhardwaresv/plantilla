/*
  Test - Traducción al español del ejemplo "Blink" de Arduino

  Enciende un LED por un segundo, luego lo apaga por un segundo, de manera repetida.
 
  Este código de ejemplo es del dominio público.
  Puedes agregar aquí la información de la licencia que utilizas.
 */
 
// El pin 13 tiene un LED conectado en la mayoría de tabletas Arduino.
// colócale un nombre:
int led = 13;

// Esta rutina de inicalización corre la primera vez luego de que presionas reset
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// La rutina loop corre una y otra vez continuamente:
void loop() {
  digitalWrite(led, HIGH);   // enciende el LED (HIGH es el nivel de voltaje)
  delay(1000);               // espera un segundo
  digitalWrite(led, LOW);    // apaga el LED haciendo el voltaje LOW
  delay(1000);               // espera un segundo
}
