#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    myTrack.load("Scott_Holmes_-_13_-_So_Happy.mp3");
    myTrack.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    spectrum=ofSoundGetSpectrum(NUM_BANDS);
}

//--------------------------------------------------------------
void ofApp::draw(){
    int myBand=4;
    (spectrum[myBand]*(myBand+1)>0.3)? ofBackground(255):ofBackground(0);

    for(int i=0; i<NUM_BANDS; i++){
        float rectWidth = ofGetWidth()/NUM_BANDS;
        float rectX = rectWidth*i;
        float rectHeight = ofMap(spectrum[i],0,1,0,ofGetHeight());
        rectHeight*=(i+1);//formula for compensating weaker higher bands
        float red = ofMap(i,0,NUM_BANDS,0,255);
        ofSetColor(red,0,255);
        ofDrawRectangle(rectX, ofGetHeight(), rectWidth, -rectHeight);
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
