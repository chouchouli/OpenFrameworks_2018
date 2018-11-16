#include "ofApp.h"

int mouseX = 0;  // these are globals
int mouseY = 0;

ofFbo fbo;
//--------------------------------------------------------------
void ofApp::setup(){
	
	fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);	
	fbo.begin();
	ofClear(255, 255, 255, 0);
	fbo.end();
	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int deltaX = ofMap(mouseX, 0, ofGetWidth(), 0, 10); // scale position of mouse
	int deltaY = ofMap(mouseY, 0, ofGetHeight(), 0, 10);

	fbo.begin();
		ofSetColor(0,0,0, 30); // set background color with 10% alpha value 
		ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight()); // draw background rectangle
		for (int y = 0; y < ofGetHeight(); y += 5+ deltaY) {  // fill the screen with the circle, the distance between the circles in X axis and Y axis will increase as the mouse goes right and down
			for (int x = 0; x < ofGetWidth(); x += 5+deltaX) {
				int mouseDistX = abs(x - mouseX);
				int mouseDistY = abs(y - mouseY);
				if (mouseDistX*mouseDistX+mouseDistY*mouseDistY< 4900) {  // there will be no filled circle in the distance of 70px aorund the cursor
						/*int r, g;
						r = int((ofMap(x, 0, ofGetWidth(), 0, 255)+100))%255;
						g = int((ofMap(y, 0, ofGetHeight(), 0, 255) + 100)) % 255;	//you could choose to fill different color to the cricle around the cursor
						ofSetColor(r,g,255);*/
				
					ofNoFill();
					
				}
				else {
					ofSetColor(ofMap(x, 0, ofGetWidth(), 0, 255), ofMap(y, 0, ofGetHeight(), 0, 255), 255);
					ofFill();
				}
						
				//ofSetColor(0, 0, 255);
				ofDrawCircle(x, y, 5);  
			}
		}

	fbo.end();
	ofSetColor(255, 255, 255);
	fbo.draw(0,0);

}





//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	mouseX = x;
	// x and y are "locals" or “local variables”
	mouseY = y;
	// locals override globals of the same name!!

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
