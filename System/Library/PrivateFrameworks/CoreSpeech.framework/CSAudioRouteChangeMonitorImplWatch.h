/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isHearstConnected;

}
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_stopMonitoring;
-(id)init;
-(BOOL)_fetchHearstConnectionState;
-(BOOL)jarvisConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(BOOL)hearstConnected;
-(void)activeAudioRouteDidChange:(id)arg1 ;
@end

