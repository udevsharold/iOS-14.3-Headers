/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NURenderView.h>

@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {

	UILongPressGestureRecognizer* _doubleTap;
	BOOL _showDebug;
	CMMotionManager* _motionManager;

}
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)debugMode;
-(void)_debugToggle:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
-(void)_resetOrientation:(id)arg1 ;
-(void)_startDeviceMotion;
-(void)_stopDeviceMotion;
-(void)_setupDeviceMotion;
@end

