#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    for(int i=0;i<NUM_MOVERS;i++){
        ofVec2f origin(ofRandomWidth(),ofRandomHeight());
        myMover[i] = Mover(origin);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    ofVec2f mouse(mouseX,mouseY);
    for(int i=0;i<NUM_MOVERS;i++){
        myMover[i].update(mouse);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<NUM_MOVERS;i++){
        myMover[i].draw();
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
