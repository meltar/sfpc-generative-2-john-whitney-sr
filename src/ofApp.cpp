#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(38, 28, 29);
    ofNoFill();

    float margin = 150;
    float xOrig = 400;
    float yOrig = 400;
    float radius = 200;
    float angle = ofGetElapsedTimef();

    ofSetColor(158, 166, 81);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius * cos(angle*2 - i * 50);
        float y = yOrig + radius * sin(angle*1.7 - i * 50);
        ofPolyline triangle;
        float size = 65-(i*4);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
    }


//    float amp = ofMap(sin(angle*3.7), -1, 1, 0, 1);
//    x = ofMap(sin(angle*3)*amp, -1, 1, 0, ofGetWidth());
//    ofDrawCircle(x, 400, 10);

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
