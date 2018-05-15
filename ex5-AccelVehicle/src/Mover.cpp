#include "Mover.h"

Mover::Mover(ofVec2f origin){
    location=origin;
    velocity = ofVec2f(0,0);
    acceleration = ofVec2f(0,0);
    radius = 20;
    maxSpeed = ofRandom(5,20);
    accelScale = ofRandom(0.1,2);
}

void Mover::update(ofVec2f mouse){
    ofVec2f direction = mouse - location;
    direction.normalize();
    direction*=accelScale;
    //acceleration: add scaled direction to velocity
    acceleration = direction;
    velocity+=acceleration;
    velocity.limit(maxSpeed);
    location+=velocity;
}

void Mover::draw(){
    ofSetColor(0,0,255,127);
    //calculate the angle between velocity and another vec2 (vertical line)
    float theta=velocity.angle(ofVec2f(0,1));
    ofPushMatrix();
        ofTranslate(location);
        ofRotateDeg(-theta);
        ofBeginShape();
        ofVertex(-radius,-radius);
        ofVertex(radius,-radius);
        ofVertex(0,radius*2);
        ofEndShape();
    ofPopMatrix();
}
