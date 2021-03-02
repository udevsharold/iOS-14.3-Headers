/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXMatting : NSObject {

	CGSize _colorBufferSize;
	long long _cameraLocation;
	BOOL _ready;

}

@property (assign,nonatomic) BOOL ready;              //@synthesize ready=_ready - In the implementation block
+(void)postNotification:(unsigned long long)arg1 ;
+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(CGSize)mattingDepthInputSize;
+(id)depthDataForCVPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)canMatteWithANE;
+(BOOL)isCVASegMattingSPIWorking;
+(Class)defaultMatteGeneratorClass;
+(BOOL)defaultMatteGeneratorPrefersDepth;
+(id)defaultMatteGenerator:(id)arg1 ;
-(BOOL)ready;
-(void)setReady:(BOOL)arg1 ;
-(id)initForFrameSet:(id)arg1 ;
-(BOOL)isValidForCameraFrameSet:(id)arg1 ;
-(void)requestMattingStatus;
-(void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
