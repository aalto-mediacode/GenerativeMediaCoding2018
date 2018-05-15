#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofEnableSmoothing();
    ofBackground(0);
}
//--------------------------------------------------------------
void ofApp::update(){
    mouse.set(mouseX,mouseY);
    for(int i=0;i<myMover.size();i++){
        myMover[i].update();
        collisionDetection(i);
    }
}
//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<myMover.size();i++){
        if(i>0) ofDrawLine(myMover[i].location,myMover[i-1].location);
        myMover[i].draw();
    }
    ofSetColor(255);
    ofDrawBitmapString("Click to add circles, press 'e' to delete",20,20);
}

void ofApp::collisionDetection(int i){
    for(int k=0;k<i;k++){
        float distance = myMover[i].location.distance(myMover[k].location);
        if(distance<myMover[i].radius*2){
            myMover[i].velocity*=-1;
            myMover[k].velocity*=-1;
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='e' && myMover.size()>0) myMover.pop_back();
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
    Mover newMover; // 1. create a new Mover object
    mouse.set(x,y);
    newMover.setup(mouse); // 2. run its setup, with mouse=origin
    myMover.push_back(newMover); // 3. add it to the vector
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
