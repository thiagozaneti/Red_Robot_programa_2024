// // Definição dos pinos para controle do sensor de cores
// #define S0 4
// #define S1 5
// #define S2 6
// #define S3 7
// #define sensorOut 8

// // Valores de calibração
// // Obtenha esses valores no Sketch de Calibração
// int redMin = 0;     // Valor mínimo de vermelho
// int redMax = 0;     // Valor máximo de vermelho
// int greenMin = 0;   // Valor mínimo de verde
// int greenMax = 0;   // Valor máximo de verde
// int blueMin = 0;    // Valor mínimo de azul
// int blueMax = 0;    // Valor máximo de azul

// // Variáveis para medições da largura do pulso de cor
// int redPW = 0;      // Largura do pulso de vermelho
// int greenPW = 0;    // Largura do pulso de verde
// int bluePW = 0;     // Largura do pulso de azul

// // Variáveis para os valores finais de cor
// int redValue;       // Valor final de vermelho
// int greenValue;     // Valor final de verde
// int blueValue;      // Valor final de azul

// void setup() {
//   // Define S0 - S3 como saídas
//   pinMode(S0, OUTPUT);
//   pinMode(S1, OUTPUT);
//   pinMode(S2, OUTPUT);
//   pinMode(S3, OUTPUT);
  
//   // Define a saída do sensor como entrada
//   pinMode(sensorOut, INPUT);
  
//   // Define a escala de frequência para 20%
//   digitalWrite(S0,HIGH);
//   digitalWrite(S1,LOW);
  
//   // Configuração do Monitor Serial
//   Serial.begin(9600);
// }

// void loop() {
//   // Lê o valor de vermelho
//   redPW = getRedPW();
//   // Mapeia para valor de 0 a 255
//   redValue = map(redPW, redMin, redMax, 255, 0);
//   // Atraso para estabilizar o sensor
//   delay(200);
  
//   // Lê o valor de verde
//   greenPW = getGreenPW();
//   // Mapeia para valor de 0 a 255
//   greenValue = map(greenPW, greenMin, greenMax, 255, 0);
//   // Atraso para estabilizar o sensor
//   delay(200);
  
//   // Lê o valor de azul
//   bluePW = getBluePW();
//   // Mapeia para valor de 0 a 255
//   blueValue = map(bluePW, blueMin, blueMax, 255, 0);
//   // Atraso para estabilizar o sensor
//   delay(200);
  
//   // Imprime a saída no Monitor Serial
//   Serial.print("Vermelho = ");
//   Serial.print(redValue);
//   Serial.print(" - Verde = ");
//   Serial.print(greenValue);
//   Serial.print(" - Azul = ");
//   Serial.println(blueValue);
// }

// // Função para ler larguras de pulso de vermelho
// int getRedPW() {
//   // Define o sensor para ler apenas vermelho
//   digitalWrite(S2, LOW);
//   digitalWrite(S3, LOW);
//   // Define um inteiro para representar a largura do pulso
//   int PW;
//   // Lê a largura do pulso de saída
//   PW = pulseIn(sensorOut, LOW);
//   // Retorna o valor
//   return PW;
// }

// // Função para ler larguras de pulso de verde
// int getGreenPW() {
//   // Define o sensor para ler apenas verde
//   digitalWrite(S2, HIGH);
//   digitalWrite(S3, HIGH);
//   // Define um inteiro para representar a largura do pulso
//   int PW;
//   // Lê a largura do pulso de saída
//   PW = pulseIn(sensorOut, LOW);
//   // Retorna o valor
//   return PW;
// }

// // Função para ler larguras de pulso de azul
// int getBluePW() {
//   // Define o sensor para ler apenas azul
//   digitalWrite(S2, LOW);
//   digitalWrite(S3, HIGH);
//   // Define um inteiro para representar a largura do pulso
//   int PW;
//   // Lê a largura do pulso de saída
//   PW = pulseIn(sensorOut, LOW);
//   // Retorna o valor
//   return PW;
// }
