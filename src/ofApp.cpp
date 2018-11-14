#include "ofApp.h"
#include <random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
random_device rd;
mt19937 eng1 (rd());
uniform_int_distribution <> unx (0,1200);
uniform_int_distribution <> uny (0,970);
for (int i=0; i < 20; i++)
X.push_back(unx (eng1));// set of x-coordinates for jewel

for (int i=0; i < 20; i++)
Y.push_back(uny (eng1));
//X = {500, 1000, 30, 100, 300, 200, 750, 380, 270, 1100, 1200, 230, 70, 430, 560, 930, 760, 820, 900, 1150 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30, 600, 750, 920, 340, 150, 20, 70, 340, 310, 890, 930, 860}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
