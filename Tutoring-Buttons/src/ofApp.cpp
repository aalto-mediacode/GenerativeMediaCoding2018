#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    btnFrame.set(0, 0, ofGetWidth(), ofGetHeight());
    float frame = 200;
    float btnW=ofGetWidth()/2-frame;
    float btnH=ofGetHeight()-frame*2;
    btnLeft.set(frame,frame,btnW,btnH);
    btnRight.set(frame+btnW,frame,btnW,btnH);
}
//--------------------------------------------------------------
void ofApp::update(){}
//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofDrawRectangle(btnFrame);
    ofDrawRectangle(btnLeft);
    ofDrawRectangle(btnRight);
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){}
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int btn){}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int btn){
    if(btnLeft.inside(x,y)) cout << "Left btn" <<endl;
    if(btnRight.inside(x,y)) cout << "Right btn" <<endl;
    if(btnFrame.inside(x,y) && !btnLeft.inside(x,y) && !btnRight.inside(x,y))
        cout << "Frame btn" <<endl;
}
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int btn){

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
