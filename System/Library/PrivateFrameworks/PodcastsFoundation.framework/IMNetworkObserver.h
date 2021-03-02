/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
@class NSString, NSObject;

@interface IMNetworkObserver : NSObject {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _networkReachabilityFlags;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) long long networkType; 
@property (readonly) NSString * connectionTypeHeader; 
@property (readonly) unsigned networkReachabilityFlags; 
+(id)sharedInstance;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(id)_networkObserverLogConfig;
-(long long)networkType;
-(id)init;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(id)_dataStatusIndicator;
-(void)dealloc;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(NSString *)connectionTypeHeader;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_reloadDataStatusIndicator;
-(void)setNetworkType:(long long)arg1 ;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(unsigned)_currentNetworkReachabilityFlags;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)reloadNetworkType;
-(id)dataStatusIndicator;
-(void)_reloadNetworkType;
-(unsigned)networkReachabilityFlags;
-(id)operatorName;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(id)stringForNetworkType:(long long)arg1 ;
-(BOOL)networkTypeIsCellularType:(long long)arg1 ;
@end
