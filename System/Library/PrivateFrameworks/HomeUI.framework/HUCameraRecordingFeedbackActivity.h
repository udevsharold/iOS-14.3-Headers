/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity {

	HMCameraClip* _cameraClip;
	HMCameraProfile* _cameraProfile;
	/*^block*/id _submissionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;                    //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,copy) id submissionHandler;                           //@synthesize submissionHandler=_submissionHandler - In the implementation block
-(void)setSubmissionHandler:(id)arg1 ;
-(id)submissionHandler;
-(id)activityType;
-(HMCameraProfile *)cameraProfile;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(HMCameraClip *)cameraClip;
-(id)activityViewController;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

