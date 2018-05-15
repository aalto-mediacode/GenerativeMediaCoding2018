#include "ofApp.h"
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(0);
    ofSetBackgroundAuto(false);
    radius = 50;
    mouseIsPressed = false;
}
void ofApp::update(){}
void ofApp::draw(){
    if(mouseIsPressed){
        //fill
        ofSetColor(255,0,0,26);
        ofFill();
        ofDrawCircle(mouseX,mouseY,radius);
        //stroke
        ofSetColor(255,26);
        ofNoFill();
        ofDrawCircle(mouseX,mouseY,radius+ofRandom(0,30));
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //short version of "if", for 1 line of "then"
    if(key=='e') ofSetBackgroundAuto(true);
    if(key==OF_KEY_UP) radius+=10;
    if(key==OF_KEY_DOWN) radius-=10;
}
void ofApp::keyReleased(int key){
    if(key=='e') ofSetBackgroundAuto(false);
}
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){
    radius+=scrollY;
}
void ofApp::mouseMoved(int x, int y ){}
void ofApp::mouseDragged(int x, int y, int button){}
void ofApp::mousePressed(int x, int y, int button){
    mouseIsPressed=true;
}
void ofApp::mouseReleased(int x, int y, int button){
    mouseIsPressed=false;
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
