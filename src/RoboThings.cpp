/*
 * Ultrasonic.h
 * 
 * Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way
 *
 * created 20 Feb 2016
 * by Otacilio Neto <contato@otacilio.me> (github: @OtacioN), Erick Simões <erick.simoes@live.com> (github: @ErickSimoes | twitter: @AloErickSimoes)
 * 
 * Released into the MIT License.
 */
 
#include <Arduino.h>
#include "RoboThings.h"

Robot::Robot(int enable, int input1, int input2, int enable2, int input3, int input4){
    
    pinMode(enable, OUTPUT);
    pinMode(input1, OUTPUT);
    pinMode(input2, OUTPUT);
    
    pinMode(enable2, OUTPUT);
    pinMode(input3, OUTPUT);
    pinMode(input4, OUTPUT);
    
    _enable = enable;
    _enable2 = enable2;
    _input1 = input1;
    _input2 = input2;
    _input3 = input3;
    _input4 = input4;
    
}


// Fowards movements
void Robot::foward(int power, int ms){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, HIGH);
    digitalWrite(_input4, LOW);
    
    delay(ms);
}

void Robot::foward(int power){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, HIGH);
    digitalWrite(_input4, LOW);
}

// Backwards movements
void Robot::backward(int power, int ms){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, power);
    
    digitalWrite(_input2, HIGH);
    digitalWrite(_input1, LOW);
    
    digitalWrite(_input4, HIGH);
    digitalWrite(_input3, LOW);
    
    delay(ms);
}

void Robot::backward(int power){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, power);
    
    digitalWrite(_input2, HIGH);
    digitalWrite(_input1, LOW);
    
    digitalWrite(_input4, HIGH);
    digitalWrite(_input3, LOW);
}

// Left Movements
void Robot::left(int power, int ms){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, 0);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, LOW);
    digitalWrite(_input4, LOW);
    
    delay(ms);
}

void Robot::left(int power){
    
    analogWrite(_enable, power);
    analogWrite(_enable2, 0);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, LOW);
    digitalWrite(_input4, LOW);
}

// Right Movements
void Robot::Right(int power, int ms){
    
    analogWrite(_enable, 0);
    analogWrite(_enable2, power);
    
    digitalWrite(_input1, LOW);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, HIGH);
    digitalWrite(_input4, LOW);
    
    delay(ms);
}

void Robot::Right(int power){
    
    analogWrite(_enable, 0);
    analogWrite(_enable2, power);
    
    digitalWrite(_input1, LOW);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, HIGH);
    digitalWrite(_input4, LOW);
}

// Stop Movements
void Robot::stop(){
    analogWrite(_enable, 0);
    analogWrite(_enable2, 0);
    
    digitalWrite(_input1, LOW);
    digitalWrite(_input2, LOW);
    
    digitalWrite(_input3, LOW);
    digitalWrite(_input4, LOW);
}


// Controlling a singular motor
Motor::Motor(int enable, int input1, int input2){
    
    pinMode(enable, OUTPUT);
    pinMode(input1, OUTPUT);
    pinMode(input2, OUTPUT);
    
    _enable = enable;
    
    _input1 = input1;
    _input2 = input2;
    
}

void Motor::clockwise(int power, int ms){
    analogWrite(_enable, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    delay(ms);
}

void Motor::clockwise(int power){
    analogWrite(_enable, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
}

void Motor::clockwise(int power, int ms){
    analogWrite(_enable, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
    delay(ms);
}

void Motor::clockwise(int power){
    analogWrite(_enable, power);
    
    digitalWrite(_input1, HIGH);
    digitalWrite(_input2, LOW);
    
}

void Motor::stop(){
    analogWrite(_enable, 0);
    
    digitalWrite(_input1, LOW);
    digitalWrite(_input2, LOW);
}