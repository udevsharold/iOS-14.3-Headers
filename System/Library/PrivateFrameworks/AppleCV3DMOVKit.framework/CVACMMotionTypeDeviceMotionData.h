/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CVACLMotionTypeDoubleVector4, CVACLMotionTypeVector3;

@interface CVACMMotionTypeDeviceMotionData : NSObject {

	BOOL _doingYawCorrection;
	BOOL _doingBiasEstimation;
	BOOL _isInitialized;
	int _magneticFieldCalibrationLevel;
	CVACLMotionTypeDoubleVector4* _quaternion;
	CVACLMotionTypeVector3* _userAcceleration;
	CVACLMotionTypeVector3* _gravity;
	CVACLMotionTypeVector3* _rotationRate;
	CVACLMotionTypeVector3* _magneticField;

}

@property (nonatomic,retain) CVACLMotionTypeDoubleVector4 * quaternion;              //@synthesize quaternion=_quaternion - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * rotationRate;                  //@synthesize rotationRate=_rotationRate - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector3 * magneticField;                 //@synthesize magneticField=_magneticField - In the implementation block
@property (assign,nonatomic) int magneticFieldCalibrationLevel;                      //@synthesize magneticFieldCalibrationLevel=_magneticFieldCalibrationLevel - In the implementation block
@property (assign,nonatomic) BOOL doingYawCorrection;                                //@synthesize doingYawCorrection=_doingYawCorrection - In the implementation block
@property (assign,nonatomic) BOOL doingBiasEstimation;                               //@synthesize doingBiasEstimation=_doingBiasEstimation - In the implementation block
@property (assign,nonatomic) BOOL isInitialized;                                     //@synthesize isInitialized=_isInitialized - In the implementation block
-(BOOL)isInitialized;
-(void)setMagneticField:(CVACLMotionTypeVector3 *)arg1 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(id)init;
-(void)setQuaternion:(CVACLMotionTypeDoubleVector4 *)arg1 ;
-(CVACLMotionTypeVector3 *)userAcceleration;
-(CVACLMotionTypeVector3 *)gravity;
-(BOOL)doingBiasEstimation;
-(CVACLMotionTypeVector3 *)magneticField;
-(CVACLMotionTypeVector3 *)rotationRate;
-(void)setGravity:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setRotationRate:(CVACLMotionTypeVector3 *)arg1 ;
-(CVACLMotionTypeDoubleVector4 *)quaternion;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)setUserAcceleration:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setMagneticFieldCalibrationLevel:(int)arg1 ;
-(void)setDoingYawCorrection:(BOOL)arg1 ;
-(void)setDoingBiasEstimation:(BOOL)arg1 ;
@end

