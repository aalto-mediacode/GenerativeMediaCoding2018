#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    myFreq=250;
    myOtherFreq=125;

    /* Maxim */
    sampleRate     = 44100; /* Sampling Rate */
    bufferSize    = 512; /* Buffer Size */
    ofxMaxiSettings::setup(sampleRate, 2, bufferSize);
    
    /* Anything that you would normally find/put in maximilian's setup() method needs to go here. For example, Sample loading. */
    
    ofBackground(0);
    ofSoundStreamSetup(2,2,this, sampleRate, bufferSize, 4); /* this has to happen at the end of setup - it switches on the DAC */
}
//--------------------------------------------------------------
void ofApp::update(){}
//--------------------------------------------------------------
void ofApp::draw(){}
//--------------------------------------------------------------
void ofApp::audioOut(float * output, int bufferSize, int nChannels) {
    for (int i = 0; i < bufferSize; i++){
        /* Stick your maximilian 'play()' code in here */
        output[i*nChannels    ] = mySine.sinewave(myFreq+(myOtherSine.sinewave(myOtherFreq)*100)); /* You may end up with lots of outputs. add them here */
        output[i*nChannels + 1] = mySine.sinewave(myFreq+(myOtherSine.sinewave(myOtherFreq)*100));
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){}
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    myFreq=ofMap(x,0,ofGetWidth(),0,500);
    myOtherFreq=ofMap(y,0,ofGetHeight(),0,250);
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
