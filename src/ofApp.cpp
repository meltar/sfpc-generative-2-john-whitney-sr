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

    float xOrig = 400;
    float yOrig = 400;
    float radius = 200;
    float angle = ofGetElapsedTimef();

    float x = xOrig + radius * cos(angle*1);
    float y = yOrig + radius * sin(angle*1.7);

    ofSetColor(158, 166, 81);

    for(int i = 0; i < 12; i++){
        float x = ofMap(sin(angle*(i*0.1)), -1, 1, 0, ofGetWidth());
        ofPolyline triangle;
        triangle.addVertex(x,y+60);
        triangle.addVertex(x-60,y-60);
        triangle.addVertex(x+60,y-60);
        triangle.close();
        triangle.draw();
    }

    ofSetColor(97, 113, 108);

    for (int i = 0; i < 12; i++){
        float x = ofMap(sin(angle*(i*0.1)), -1, 1, 0, ofGetWidth());
        ofDrawCircle(x,i*20,10);
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
