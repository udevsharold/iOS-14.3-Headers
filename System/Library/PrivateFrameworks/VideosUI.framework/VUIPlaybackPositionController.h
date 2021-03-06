/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionSyncService;

@interface VUIPlaybackPositionController : NSObject {

	NSObject*<OS_os_log> _logObject;
	NSObject*<OS_dispatch_queue> _queue;
	SBCPlaybackPositionSyncService* _syncService;
	BOOL _running;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)sharedInstance;
-(BOOL)isRunning;
-(id)init;
-(id)_init;
-(void)setRunning:(BOOL)arg1 ;
-(void)_onQueue_beginCapturingEvents;
-(void)_onQueue_endCapturingEvents;
-(void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
-(void)beginCapturingEvents;
-(void)endCapturingEvents;
-(void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
@end

