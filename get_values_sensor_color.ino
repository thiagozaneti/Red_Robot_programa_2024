// #include <Arduino.h>

// #define S0 4
// #define S1 5
// #define S2 6
// #define S3 7
// #define sensorOut 8

// void setupSensors() {
//   pinMode(S0, OUTPUT);
//   pinMode(S1, OUTPUT);
//   pinMode(S2, OUTPUT);
//   pinMode(S3, OUTPUT);
  
//   pinMode(sensorOut, INPUT);
  
//   digitalWrite(S0,HIGH);
//   digitalWrite(S1,LOW);
// }

// int getRedPW() {
//   digitalWrite(S2,LOW);
//   digitalWrite(S3,LOW);
//   int PW;
//   PW = pulseIn(sensorOut, LOW);
//   return PW;
// }

// int getGreenPW() {
//   digitalWrite(S2,HIGH);
//   digitalWrite(S3,HIGH);
//   int PW;
//   PW = pulseIn(sensorOut, LOW);
//   return PW;
// }

// int getBluePW() {
//   digitalWrite(S2,LOW);
//   digitalWrite(S3,HIGH);
//   int PW;
//   PW = pulseIn(sensorOut, LOW);
//   return PW;
// }

// void print_values_sensors(){
//   redPW = getRedPW();
//   delay(200);
//   greenPW = getGreenPW();
//   delay(200);
//   bluePW = getBluePW();
//   delay(200);

//   Serial.print("Vermelho PW = ");
//   Serial.print(redPW);
//   Serial.print(" - Verde PW = ");
//   Serial.print(greenPW);
//   Serial.print(" - Azul PW = ");
//   Serial.println(bluePW);
// }
