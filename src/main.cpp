
//*DECLARACIÓN DE LIBRERÍAS
#include <Arduino.h>

#include <Servo.h>
#include <ServoEasing.hpp> // proporciona una forma fácil de crear movimientos de servo suaves y personalizados.
// Esta librería utiliza algoritmos de interpolación para calcular el movimiento de los servos de manera precisa y suave,
// permitiendo a los usuarios crear patrones de movimiento específicos como ondas sinusoidales, ondas cuadradas, rampas, escalones, etc.
// Además, la librería ofrece la capacidad de personalizar la curva de movimiento para adaptarse a diferentes requisitos.
#include <IBusBM.h>
// #include <AccelStepper.h>
// #include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>



ServoEasing servoW1;


int angle = 0; // posición del servo en grados

int servo1Angle = 90; // En el instante primero de encendido los 4 servos de ponen a 90º




void setup()
{
    Serial.begin(115200);


    servoW1.attach(12);

    servoW1.write(90);

    servoW1.setSpeed(550);


    
}

void loop()
{

}
