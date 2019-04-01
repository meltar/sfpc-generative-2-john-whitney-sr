#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetWindowPosition(10, 10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(53, 52, 57);
//    ofNoFill();
    float margin = 150;
    float angle = ofGetElapsedTimef();
    float amp = ofMap(sin(angle*0.5), -1, 1, 0, 1);
    float radius = 200;

    float xOrig = 270;
    float yOrig = 270;
    ofSetColor(204, 231, 227);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius*amp * cos(angle*2 - i * 50);
        float y = yOrig + radius*amp * sin(angle*1.7 - i * 50);
        ofPolyline triangle;
        float size = 100-(i*6);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
    }

    xOrig = 120;
    yOrig = 115;
    ofSetColor(204, 231, 227);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius*amp * cos(angle*0.3 - i * 50);
        float y = yOrig + radius*amp * sin(angle*1.2 - i * 50);
        ofPolyline triangle;
        float size = 100-(i*6);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
    }

    xOrig = 460;
    yOrig = 360;
    ofSetColor(199, 196, 222);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius*amp * cos(angle*1.4 - i * 50);
        float y = yOrig + radius*amp * sin(angle*1 - i * 50);
        ofPolyline triangle;
        float size = 100-(i*6);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
    }

    xOrig = 430;
    yOrig = 110;
    ofSetColor(143, 108, 159);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius*amp * cos(angle*2.2 - i * 50);
        float y = yOrig + radius*amp * sin(angle*0.2 - i * 50);
        ofPolyline triangle;
        float size = 100-(i*6);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
    }

    xOrig = 190;
    yOrig = 480;
    ofSetColor(143, 108, 159);

    for(int i = 0; i < 16; i++){
        float x = xOrig + radius*amp * cos(angle*0.5 - i * 50);
        float y = yOrig + radius*amp * sin(angle*0.5 - i * 50);
        ofPolyline triangle;
        float size = 100-(i*6);
        float x1 = x+i;
        float y1 = y+i;
        triangle.addVertex(x1,y1+size);
        triangle.addVertex(x1-size,y1-size);
        triangle.addVertex(x1+size,y1-size);
        triangle.close();
        triangle.draw();
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
