// #include <Arduino.h>

// const int sensorPinos[5] = {2, 3, 4, 5, 6};
// const int numSensores = 5;

// void setup_seguir_linha_modulo() {
//   //visualização dos sinais dos sensores
//   // Inicializando os pinos dos sensores como entrada
//   for (int i = 0; i < numSensores; i++) {
//     pinMode(sensorPinos[i], INPUT);
//   }
  
//   // Inicializando a porta serial para depuração
//   Serial.begin(9600);
// }

// void seguir_linha_modulo() {
//   // Array para armazenar os valores dos sensores
//   int leituras[numSensores];
  
//   // Realizando a leitura de todos os sensores
//   for (int i = 0; i < numSensores; i++) {
//     leituras[i] = digitalRead(sensorPinos[i]);
//   }
  
//   // Exibindo os valores dos sensores na porta serial
//   for (int i = 0; i < numSensores; i++) {
//     Serial.print("Sensor ");
//     Serial.print(i);
//     Serial.print(": ");
//     Serial.println(leituras[i]);
//   }
//    // Condição para verificar se o sensor do meio está ativo
//   if (leituras[2] == HIGH) {
//     Serial.println("Condção ativa");
//   }
  
  
//   delay(1000); // Atraso para evitar leituras muito rápidas
// }
 