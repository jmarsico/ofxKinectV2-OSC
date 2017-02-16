#pragma once
#include "ofMain.h"
#include "Interpreter.h"
#include "Joint.h"
#include "Hand.h"

const int MAX_FRESHNESS = 12;

class Skeleton {
public:
	void init(string _bodyId);
	void setSmoothing(SmoothingTechnique technique);
    void update();
    void resetFreshness();
    bool isStale();
    bool isCloserThan(Skeleton* other);

	void setHand(Hand hand);
	void setJoint(Joint joint);
	
	string getBodyId();
    ofPath getPath();
    
	Hand getLeftHand();
	Hand getRightHand();

	Joint getThumbRight();
	Joint getSpineBase();
	Joint getSpineMid();
	Joint getNeck();
	Joint getHead();
	Joint getShoulderLeft();
	Joint getElbowLeft();
	Joint getWristLeft();
	Joint getHandLeft();
	Joint getShoulderRight();
	Joint getElbowRight();
	Joint getWristRight();
	Joint getHandRight();
	Joint getHipLeft();
	Joint getKneeLeft();
	Joint getAnkleLeft();
	Joint getFootLeft();
	Joint getHipRight();
	Joint getKneeRight();
	Joint getAnkleRight();
	Joint getFootRight();
	Joint getSpineShoulder();
	Joint getHandTipLeft();
	Joint getThumbLeft();
	Joint getHandTipRight();
    
    //local joints relative to spineMid
    vector<double> getSpineBaseLocal();
    vector<double> getNeckLocal();
    vector<double> getHeadLocal();
    vector<double> getShoulderLeftLocal();
    vector<double> getElbowLeftLocal();
    vector<double> getWristLeftLocal();
    vector<double> getHandLeftLocal();
    vector<double> getShoulderRightLocal();
    vector<double> getElbowRightLocal();
    vector<double> getWristRightLocal();
    vector<double> getHandRightLocal();
    vector<double> getHipLeftLocal();
    vector<double> getKneeLeftLocal();
    vector<double> getAnkleLeftLocal();
    vector<double> getFootLeftLocal();
    vector<double> getHipRightLocal();
    vector<double> getKneeRightLocal();
    vector<double> getAnkleRightLocal();
    vector<double> getFootRightLocal();
    vector<double> getSpineShoulderLocal();
    vector<double> getHandTipLeftLocal();
    vector<double> getHandTipRightLocal();
    vector<double> getThumbRightLocal();
    vector<double> getThumbLeftLocal();

    
    
    
    
    ofRectangle getLeftHandRange();
    ofRectangle getRightHandRange();
    ofVec3f getLeftHandNormal();
    ofVec3f getRightHandNormal();
    
    ofPath path;

protected:
    
    
    void addBoneLine(Joint a, Joint b);
    
    
    void setLeftHand(Hand &hand);
    void setRightHand(Hand &hand);
    void setThumbRight(Joint &joint);
    void setSpineBase(Joint &joint);
    void setSpineMid(Joint &joint);
    void setNeck(Joint &joint);
    void setHead(Joint &joint);
    void setShoulderLeft(Joint &joint);
    void setElbowLeft(Joint &joint);
    void setWristLeft(Joint &joint);
    void setHandLeft(Joint &joint);
    void setShoulderRight(Joint &joint);
    void setElbowRight(Joint &joint);
    void setWristRight(Joint &joint);
    void setHandRight(Joint &joint);
    void setHipLeft(Joint &joint);
    void setKneeLeft(Joint &joint);
    void setAnkleLeft(Joint &joint);
    void setFootLeft(Joint &joint);
    void setHipRight(Joint &joint);
    void setKneeRight(Joint &joint);
    void setAnkleRight(Joint &joint);
    void setFootRight(Joint &joint);
    void setSpineShoulder(Joint &joint);
    void setHandTipLeft(Joint &joint);
    void setThumbLeft(Joint &joint);
    void setHandTipRight(Joint &joint);
    
    string bodyId;
    int freshness;
    Interpreter interpreter;
	SmoothingTechnique smoothing;
    
	Hand leftHand;
	Hand rightHand;
	Joint thumbRight;
	Joint spineBase;
	Joint spineMid;
	Joint neck;
	Joint head;
	Joint shoulderLeft;
	Joint elbowLeft;
	Joint wristLeft;
	Joint handLeft;
	Joint shoulderRight;
	Joint elbowRight;
	Joint wristRight;
	Joint handRight;
	Joint hipLeft;
	Joint kneeLeft;
	Joint ankleLeft;
	Joint footLeft;
	Joint hipRight;
	Joint kneeRight;
	Joint ankleRight;
	Joint footRight;
	Joint spineShoulder;
	Joint handTipLeft;
	Joint thumbLeft;
	Joint handTipRight;
};
