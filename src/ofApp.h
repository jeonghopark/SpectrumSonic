//https://github.com/dfeles/refreq


#pragma once

#include "ofMain.h"

#include "ofxiOS.h"
#include "ofxiOSExtras.h"


#define BUFFER_SIZE 8192
#define SAMPLE_RATE 44100
#define INITIAL_BUFFER_SIZE 512
#define BIT 480

class ofApp : public ofxiOSApp{
    
public:
    void setup();
    void update();
    void draw();
    void exit();
    
    void touchDown(ofTouchEventArgs & touch);
    void touchMoved(ofTouchEventArgs & touch);
    void touchUp(ofTouchEventArgs & touch);
    void touchDoubleTap(ofTouchEventArgs & touch);
    void touchCancelled(ofTouchEventArgs & touch);
    
    void lostFocus();
    void gotFocus();
    void gotMemoryWarning();
    void deviceOrientationChanged(int newOrientation);
    
    void audioRequested(float * output, int bufferSize, int nChannels);
    
    
    float line;
    
    float	maxHertz;
    float	minHertz;
    
    double sineBuffer[514];
    
    float remainder;
    float wave;
    float amp[BIT];
    int hertzScale[BIT];
    float phases[BIT];
    
    bool bPlaying;
    
    float getPixel(int x, int y);
    float getAmp(float x, float y);
    float getFreq(float y);
    
    ofVideoGrabber grabber;
    ofImage camImage;
    ofPixels camPixel;
    
    float threshold;
    float screenMiddleX;
    
    float camWidth, camHeight;
    
};
