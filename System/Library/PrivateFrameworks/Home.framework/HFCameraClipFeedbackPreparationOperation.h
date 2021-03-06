/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation {

	HMCameraClip* _cameraClip;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;              //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)main;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(HMCameraClip *)cameraClip;
-(id)initWithCameraClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
@end

