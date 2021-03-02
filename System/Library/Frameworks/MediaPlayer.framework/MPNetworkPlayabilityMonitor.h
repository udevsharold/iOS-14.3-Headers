/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {

	long long _effectiveNetworkTypeForCloudPlayback;
	long long _networkType;
	double _lastAverageBitrate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) double lastAverageBitrate; 
@property (nonatomic,readonly) long long networkType; 
@property (nonatomic,readonly) long long effectiveNetworkTypeForPlayback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkPlayabilityMonitor;
-(long long)networkType;
-(id)init;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(double)lastAverageBitrate;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
@end
