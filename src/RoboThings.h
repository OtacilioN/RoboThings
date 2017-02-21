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
 
#ifndef RoboThings_h
#define RoboThings_h

#include "Ultrasonic.h"

// Class to use a 2WD Robot using a DC Motor and a L293D H bridge
class Robot{
    
    public:
    
        Robot(int enable, int input1, int input2, int enable2, int input3, int input4);
    
        void foward(int power, int ms);
        void foward(int power);
    
        void backward(int power, int ms);
        void backward(int power);
    
        void left(int power, int ms);
        void left(int power);
    
        void right(int power, int ms);
        void right(int power);
        
        void stop();
    
    private:
        int _enable;
        int _enable2;
        int _input1;
        int _input2;
        int _input3;
        int _input4;
    
};

class Motor{
    
    public:
    
        Motor(int enable, int input1, int input2);
        
        void clockwise(int power, int ms);
        void clockwise(int power);
    
        void counterclockwise(int power, int ms);
        void counterclockwise(int power);
        
        void stop();
    
    private:
        
        int _enable;
        int _input1;
        int _input2;
};




#endif
