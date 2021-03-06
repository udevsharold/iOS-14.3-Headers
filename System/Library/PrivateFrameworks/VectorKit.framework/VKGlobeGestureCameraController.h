/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKGestureCameraBehavior.h>

@interface VKGlobeGestureCameraController : VKGestureCameraBehavior {

	GlobeView* _globeView;
	CameraManager* _cameraManager;
	double _beganDoublePanPitch;
	double _currentDoublePanPitch;
	BOOL _isPitchIncreasing;

}
-(void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)endPan:(CGPoint)arg1 ;
-(void)updatePitch:(CGPoint)arg1 translation:(double)arg2 ;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(void)endZoom:(CGPoint)arg1 ;
-(void)beginZoom:(CGPoint)arg1 ;
-(void)beginRotate:(CGPoint)arg1 ;
-(void)endRotate:(CGPoint)arg1 ;
-(BOOL)isPitchIncreasing;
-(void)beginPitch:(CGPoint)arg1 ;
-(void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2 ;
-(void)updatePitch:(CGPoint)arg1 degrees:(double)arg2 ;
-(void)setCameraManager:(CameraManager*)arg1 ;
-(void)beginPan:(CGPoint)arg1 ;
-(void)endPitch:(CGPoint)arg1 ;
@end

