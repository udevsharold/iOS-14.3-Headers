/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXMatting.h>

@interface JFXDisparityAsMatte : JFXMatting {

	CVPixelBufferPoolRef _fixedPointBufferPool;
	CVPixelBufferPoolRef _rotatedFPBufferPool;
	CVPixelBufferPoolRef _scaledUpFPBufferPool;
	CVPixelBufferPoolRef _alphaMattePool;

}
+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(CGSize)mattingDepthInputSize;
-(id)initForFrameSet:(id)arg1 ;
-(void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
