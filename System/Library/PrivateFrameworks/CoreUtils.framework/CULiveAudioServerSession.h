/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAudioConverter, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode, NSObject;

@interface CULiveAudioServerSession : NSObject {

	AVAudioConverter* _audioConverter;
	AVAudioEngine* _audioEngine;
	AVAudioFormat* _audioInputFormat;
	AVAudioFormat* _audioOutputFormat;
	AVAudioPlayerNode* _audioPlayerNode;
	BOOL _playbackStarted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleDataEvent:(id)arg1 ;
-(BOOL)activateAndReturnError:(id*)arg1 ;
-(void)invalidate;
@end
