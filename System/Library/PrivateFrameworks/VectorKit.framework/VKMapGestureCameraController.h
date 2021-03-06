/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKGestureCameraBehavior.h>

@class VKTimedAnimation;

@interface VKMapGestureCameraController : VKGestureCameraBehavior {

	CGPoint _panLastScreenPoint;
	BOOL _isPitchIncreasing;
	double _beganPitch;
	double _currentPitch;
	VKTimedAnimation* _zoomAnimation;

}
-(void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)updatePitch:(CGPoint)arg1 translation:(double)arg2 ;
-(BOOL)isPitchIncreasing;
-(void)beginPitch:(CGPoint)arg1 ;
-(void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2 ;
-(Matrix<double, 3, 1>)positionClampedToCameraRestriction:(Matrix<double, 3, 1>)arg1 ;
-(void)updatePitch:(CGPoint)arg1 degrees:(double)arg2 ;
-(Matrix<double, 3, 1>)positionClampedToCameraRestriction:(Matrix<double, 3, 1>)arg1 delta:(Matrix<double, 3, 1>)arg2 ;
@end

