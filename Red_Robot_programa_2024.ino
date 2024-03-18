//programação do robo Black Bulls 2024 OBR
//Código de propriedade da Black Bulls Barretos

#include <AFMotor.h>
#include <Arduino.h>

//definindo motores
AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

void setup() {
  // Serial.begin(9600);
  // setup_seguir_linha_modulo();
  //setupSensors();
}

void loop(){
  // seguir_linha();
  // seguir_linha_modulo();
  // print_values_sensors(); //valores do sensor de cor, comenta-lo se necessário
}
