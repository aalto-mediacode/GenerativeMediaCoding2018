#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    sound1.load("2314__syn2x-v0__glitch096.wav");
    sound2.load("332711__harleyglitch__glitch.wav");
}
//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawLine(ofGetWidth()/2,0,ofGetWidth()/2,ofGetHeight());
}
void ofApp::playback(ofSoundPlayer sound, float speed, float vol){
    sound.setSpeed(speed);
    sound.setVolume(vol);
    sound.play();
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
    float vol = ofMap(y,ofGetHeight(),0,0,1);
    if(x<ofGetWidth()/2){
        float speed = ofMap(x,0,ofGetWidth()/2,0,2);
        playback(sound1, speed, vol);
    }else{
        float speed = ofMap(x,ofGetWidth()/2,ofGetWidth(),0,2);
        playback(sound2, speed, vol);
    }
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
