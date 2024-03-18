// #include <AFMotor.h>
// #include <Arduino.h>

// AF_DCMotor motor1(1, MOTOR12_1KHZ); 
// AF_DCMotor motor2(2, MOTOR12_1KHZ);
// AF_DCMotor motor3(3, MOTOR34_1KHZ);
// AF_DCMotor motor4(4, MOTOR34_1KHZ);

// int sensorCantoEsq = A1;
// int sensorLinhaEsq = A2;
// int sensorLinhaCentro = A3;
// int sensorLinhaDir = A4;
// int sensorCantoDir = A5;

// int valorDeCorte = 600;
// //valor para alterar

// int valorCantoEsq, valorLinhaEsq, valorLinhaCentro, valorLinhaDir, valorCantoDir = 0;

// void seguir_linha(){
//   valorCantoEsq = analogRead(sensorCantoEsq)
//   valorLinhaEsq = analogRead(sensorLinhaEsq)
//   valorLinhaCentro = analogRead(sensorLinhaCentro)
//   valorLinhaEsq = analogRead(sensorLinhaEsq)
//   valorCantoDir = analogRead(sensorCantoDir)

//   if (valorLinhaCentro > valorDeCorte){
//     motor1.run(FORWARD);
//     motor1.setSpeed(150);
//     motor2.run(FORWARD);
//     motor2.setSpeed(150);
//     motor3.run(FORWARD);
//     motor3.setSpeed(150);
//     motor4.run(FORWARD);
//     motor4.setSpeed(150);
//   }
// }