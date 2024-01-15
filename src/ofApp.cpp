#include "ofApp.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup() {
	for (int i = 0; i < 200; i++) {
		fastBall[i].setup(ofVec2f(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight())), ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2)), ofRandom(10, 50));
	}
}

//--------------------------------------------------------------
void ofApp::update() {

	for (int i = 0; i < 200; i++) {
		fastBall[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {

	for (int i = 0; i < 200; i++) {
		fastBall[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
