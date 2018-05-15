#include "Mover.h"

//--------------------------------------------------------------
void Mover::setup(ofVec2f origin){
    location = origin;
    maxSpeed=5;
    velocity.set(ofRandom(-maxSpeed,maxSpeed),ofRandom(-maxSpeed,maxSpeed));
    radius = 50;
}

//--------------------------------------------------------------
void Mover::update(){
    location+=velocity;
    //check x or y window boundaries, invert x or y velocity if hit
    if(location.x<0 || location.x>ofGetWidth()) velocity.x*=-1;
    if(location.y<0 || location.y>ofGetHeight()) velocity.y*=-1;
    counter +=0.05;
}

//--------------------------------------------------------------
void Mover::draw(){
    ofSetColor(255);
    ofDrawCircle(location,radius);
    ofSetColor(255,0,0);
    ofDrawCircle(location,ofMap(sin(counter),-1,1,radius*0.33,radius*0.66));
}
