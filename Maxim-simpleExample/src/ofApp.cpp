#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    myFreq=250;
    
    /* Maxim */
    sampleRate     = 44100; /* Sampling Rate */
    bufferSize    = 512; /* Buffer Size */
    ofxMaxiSettings::setup(sampleRate, 2, bufferSize);
    
    /* Anything that you would normally find/put in maximilian's setup() method needs to go here. For example, Sample loading. */
    
    mySample.load(ofToDataPath("sound.wav"));
    ofBackground(0);
    ofSoundStreamSetup(2,2,this, sampleRate, bufferSize, 4); /* this has to happen at the end of setup - it switches on the DAC */
}
//--------------------------------------------------------------
void ofApp::update(){

}
//--------------------------------------------------------------
void ofApp::draw(){

}
//--------------------------------------------------------------
void ofApp::audioOut(float * output, int bufferSize, int nChannels) {
    for (int i = 0; i < bufferSize; i++){
        /* Stick your maximilian 'play()' code in here */
        //you could replace mySine... below with mySample.play();
        output[i*nChannels    ] = mySine.sinewave(myFreq); /* You may end up with lots of outputs. add them here */
        output[i*nChannels + 1] = mySine.sinewave(myFreq);
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    myFreq=ofMap(x,0,ofGetWidth(),0,500);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
