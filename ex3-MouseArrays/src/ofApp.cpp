#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    // for (index min; index max; increment)
    for(int i = 0; i<NUM_SQUARES; i++){
        location[i].set(ofRandomWidth(), ofRandomHeight());
    }
    mouseHasMoved=false;
}

//--------------------------------------------------------------
void ofApp::update(){
    if(mouseHasMoved){
        for(int i = 0; i<NUM_SQUARES; i++){
        //1 way to direct one object to a target is:
        //direction=(target-location)/speed (larger speed = slower convergence)
            //ofVec2f direction = ofVec2f(0.2,0);
            ofVec2f direction = (mouse-location[i])/50;
            location[i]+=direction;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,255,0,127);
    for(int i = 0; i<NUM_SQUARES ; i++){
        ofDrawRectangle(location[i], 50, 50);
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
    if(mouseHasMoved==false) mouseHasMoved=true;
    mouse.set(x,y);
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
