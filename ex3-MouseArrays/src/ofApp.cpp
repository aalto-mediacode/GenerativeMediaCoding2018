#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    // for (index min; index max; increment)
    for(int i = 0; i<NUM_SQUARES; i++){
        location[i].set(ofRandomWidth(), ofRandomHeight());
        size[i]=50;
    }
    mouseHasMoved=false;
}
//--------------------------------------------------------------
void ofApp::update(){
    if(mouseHasMoved){
        for(int i = 0; i<NUM_SQUARES; i++){
        //direct object to target: direction=(target-location)*speed (speed<1)
            ofVec2f distance = mouse-location[i];
            size[i]=distance.length()*1.5;
            ofVec2f direction = distance*0.05;
            if(distance.length()>300){
                location[i]+=direction;
            }else{
                location[i]-=direction;
            }
        }
    }
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,255,0,1);
    for(int i = 0; i<NUM_SQUARES ; i++){
        ofDrawRectangle(location[i], size[i], size[i]);
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
