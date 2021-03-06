/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject;

@interface CSMyriadPHash : NSObject {

	float* _hammingWindow;
	OpaqueFFTSetupRef _setup;
	float* _snrWindow;
	OpaqueFFTSetupRef _snrSetup;
	unsigned char _signalFractional;
	short _signalEstimate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) short signalEstimate;                            //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign,nonatomic) unsigned char signalFractional;                  //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)lastHash;
+(void)notifyHashlessTrigger:(unsigned long long)arg1 ;
+(id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5 ;
+(BOOL)writeHashResultIntoFile:(id)arg1 ;
+(void)notifyAudioHashNotification;
+(id)generateEmptyPHash:(unsigned long long)arg1 writeFile:(BOOL)arg2 ;
+(void)notifyAudioHashlessNotification;
+(void)setLastHash:(id)arg1 ;
+(BOOL)writeHashlessResult:(unsigned long long)arg1 ;
-(id)init;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)dealloc;
-(id)cachedHash;
-(id)_audioLogDirectory;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(unsigned char)signalFractional;
-(id)_generateMyriadInfo:(unsigned long long)arg1 writeFile:(BOOL)arg2 score:(float)arg3 triggerSource:(id)arg4 channel:(unsigned long long)arg5 audioProviderUUID:(id)arg6 absoluteTime:(unsigned long long)arg7 ;
-(id)generatePHashFromVoiceTriggerInfo:(id)arg1 writeFile:(BOOL)arg2 ;
-(void)setSignalEstimate:(short)arg1 ;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

