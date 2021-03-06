/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ReplayKit/ReplayKit-Structs.h>
@class NSObject, NSDate;

@interface RPAppAudioCaptureManager : NSObject {

	NSObject*<OS_dispatch_queue> _audioDispatchQueue;
	/*^block*/id _appAudioOutputHandler;
	/*^block*/id _appTapDidStartHandler;
	SCD_Struct_RP0* _audioRecorderQueue;
	BOOL _resumed;
	NSDate* _lastAudioDate;
	AudioStreamBasicDescription _audioBasicDescription;
	SCD_Struct_RP2 _lastAudioPresentationTime;

}
+(AudioStreamBasicDescription)audioStreamBasicDescriptionWithStereo:(BOOL)arg1 ;
-(id)init;
-(void)stop;
-(BOOL)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(/*^block*/id)arg2 ;
-(void)startWithProcessID:(int)arg1 outputHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 ;
-(void)resumeWithProcessID:(int)arg1 ;
@end

