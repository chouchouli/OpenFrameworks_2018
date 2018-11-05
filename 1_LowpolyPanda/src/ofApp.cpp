#include "ofApp.h"
ofImage panda;
//--------------------------------------------------------------
void ofApp::setup(){
	panda.load("panda.JPG");
	ofSetWindowShape(1300, 1300);
	ofBackground(240);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(86,88,87);
	ofDrawTriangle(340, 220, 260, 380, 420, 290);
	ofDrawTriangle(1300-340,220 ,1300-260 ,380 ,1300-420 ,290 );
	ofDrawTriangle(500,540 ,570 ,520 ,540 ,600 );
	ofDrawTriangle(800,540 , 1300-570,520 ,1300-540 , 600);
	ofDrawTriangle(370,660,470,570,490,620);
	ofDrawTriangle(1300-370,660 , 1300-470,570 ,1300-490 ,620 );
	ofDrawTriangle(490, 620, 540, 600, 450, 750);
	ofDrawTriangle(1300 - 490, 620, 1300 - 540, 600, 1300 - 450, 750);

	ofSetColor(56, 56, 56);
	ofDrawTriangle(260, 380, 420, 290,310,450);
	ofDrawTriangle(1300 - 260, 380, 1300 - 420, 290,1300-310,450);
	ofDrawTriangle(370,660,500,540,500,480);
	ofDrawTriangle(1300-370,660,800,540,800,480);
	ofDrawTriangle(500, 540, 500, 480,570,520);
	ofDrawTriangle(800,540,800,480,1300-570,520);
	ofDrawTriangle(560,800,570,850,650,890);
	ofDrawTriangle(1300-560,800,1300-570,850,650,890);

	ofSetColor(41,41,41);
	ofDrawTriangle(560,800,1300-560,800,650,890);
	ofDrawTriangle(450,570,500,540,540,600);
	ofDrawTriangle(1300-450,570,800,540,1300-540,600);
	
	ofSetColor(95,97,96);
	ofDrawTriangle(490,620,450,750,370,660);
	ofDrawTriangle(1300-490,620,1300-450,750,1300-370,660);

	ofSetColor(221,221,221);
	ofDrawTriangle(570,240,1300-570,240,650,480);
	ofDrawTriangle(650,480,570,520,1300-570,520);
	ofDrawTriangle(650, 800, 570, 520, 1300 - 570, 520);
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
