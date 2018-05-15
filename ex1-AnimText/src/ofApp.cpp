#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 255);
    myFont.load("Impact.ttf", 100);
    //variables
    angle=0;
    counter=0;
    myText="openFrameworks";
    myTextWidth=myFont.stringWidth(myText);
    cout << myTextWidth << endl;
}

//--------------------------------------------------------------
void ofApp::update(){
    angle+=2;
    counter+=0.05;
    cout << ofGetFrameRate() << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //outputVariable=ofMap(inputVariable,inputMin,inputMax,outputMin,outputMax)
    float textX = ofMap(sin(counter),-1,1,0,ofGetWidth());
    ofDrawBitmapString("Generative Media", textX, 50);
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
        ofRotateYDeg(angle);
        ofRotateZDeg(angle);
        myFont.drawString(myText, -myTextWidth/2, 0);
    ofPopMatrix();
    ofDrawBitmapString("Coding", 200, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
