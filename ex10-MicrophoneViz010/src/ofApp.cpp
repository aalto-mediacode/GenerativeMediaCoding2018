#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(0);

    ofSoundStreamSettings settings;

    auto devices = mySoundStream.getMatchingDevices("default");
    if(!devices.empty()){
        settings.setInDevice(devices[0]);
    }

    settings.setInListener(this);
    settings.sampleRate = 44100;
    settings.numOutputChannels = 0;
    settings.numInputChannels = 1;
    settings.bufferSize = BUFFER_SIZE;
    mySoundStream.setup(settings);

    amplitude = new float[BUFFER_SIZE];
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<BUFFER_SIZE;i++){
        float spacing = ofGetWidth()/BUFFER_SIZE;
        float circleX = spacing*i;
        float radius = ofMap(amplitude[i],0,1,0,1000);
        float green = ofMap(i,0,BUFFER_SIZE,0,255);
        ofSetColor(0,green,255);
        ofDrawCircle(circleX,ofGetHeight()/2,radius);
    }

}

//--------------------------------------------------------------
void ofApp::audioIn(ofSoundBuffer & input ){
    for(int i=0;i<BUFFER_SIZE;i++){
        amplitude[i]=input[i];
    }
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
