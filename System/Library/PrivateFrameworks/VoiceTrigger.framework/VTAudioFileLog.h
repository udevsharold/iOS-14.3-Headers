/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSObject, NSURL;

@interface VTAudioFileLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSURL* _url;
	unsigned _audioLength;

}
+(id)sharedInstance;
-(void)stopRecording;
-(void)startRecording;
-(id)init;
-(void)dealloc;
-(void)_closeAudioFile;
-(void)appendAudioData:(AudioBuffer*)arg1 ;
@end

