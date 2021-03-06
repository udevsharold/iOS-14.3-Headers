/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _reachabilityRequests;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	SCPreferencesRef _wifiPreferences;
	CFDictionaryRef _wifiObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;
	BOOL _wifiNotified;
	BOOL _wifiEnabled;

}
+(id)sharedNetworkObserver;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)removeWiFiObserver:(id)arg1 ;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(void)_networkObserversInitialize;
-(void)_wifiObserversInitialize;
-(BOOL)isWiFiEnabled;
@end

