#pragma once

#include "ofMain.h"

class Mover{
    
public:
    Mover(){} // default constructor
    Mover(ofVec2f origin); // constructor function
    void update(ofVec2f mouse);
    void draw();
    
private:
    float radius;
    ofVec2f location, velocity, acceleration;
    float maxSpeed, accelScale;
    
};
