#include "ofApp.h"
void ofApp::setup() {
	ofBackground(0);
	ofSetColor(0, 255, 255);
	ofNoFill();
}

int x = 100, y = 100;

//--------------------------------------------------------------
void ofApp::update() {
	x++;

}

int mouseX = 0;  // these are globals
int mouseY = 0;

//--------------------------------------------------------------
void ofApp::draw() {

	ofPushStyle();  // save the current fill and color state

	ofSetColor(210, x/2 % 255, 255);
	ofFill();
	ofDrawCircle(x%ofGetWidth(), y, 50);

	ofPopStyle();  // return the fill and color state from before

	ofDrawCircle(x%ofGetWidth(), y, 100);
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
