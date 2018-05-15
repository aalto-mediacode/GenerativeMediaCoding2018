#pragma once

#include "ofMain.h"

class Mover  : public ofBaseApp{
    
    public:
        void setup(ofVec2f origin);
        void update();
        void draw();
    
    ofVec2f location, velocity;
    float radius;
    float counter;
    float maxSpeed;
    
};
