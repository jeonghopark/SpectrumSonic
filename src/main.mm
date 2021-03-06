#include "ofMain.h"
#include "ofApp.h"
#include "ofxiOSExtras.h"

int main(){
    //ofSetupOpenGL(1024,768, OF_FULLSCREEN);			// <-------- setup the GL context
    
    ofAppiOSWindow * iOSWindow = new ofAppiOSWindow();
    
    iOSWindow->enableDepthBuffer();
    iOSWindow->enableAntiAliasing(4);
    iOSWindow->enableRetina();
    
    if([UIDevice currentDevice].userInterfaceIdiom==UIUserInterfaceIdiomPad) {
        ofSetupOpenGL(iOSWindow, 1024, 768, OF_FULLSCREEN);
    }else{
        ofSetupOpenGL(iOSWindow, 562, 320, OF_FULLSCREEN);
    }
    
    ofRunApp(new ofApp);
}
