#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(0);
    //parameters: base app, output channels input channels, sample rate, buffer size, num buffers
    mySoundStream.setup(this,0,1,44100,256,2);
    amplitude = new float[mySoundStream.getBufferSize()];
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<mySoundStream.getBufferSize();i++){
        float spacing = ofGetWidth()/mySoundStream.getBufferSize();
        float circleX = spacing*i;
        float radius = ofMap(amplitude[i],0,1,0,1000);
        float green = ofMap(i,0,mySoundStream.getBufferSize(),0,255);
        ofSetColor(0,green,255);
        ofDrawCircle(circleX,ofGetHeight()/2,radius);
    }

}

void ofApp::audioIn(float *input, int buffersize, int numChannels ){
    for(int i=0;i<mySoundStream.getBufferSize();i++){
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
