/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class ICUserIdentityContext, NSMutableDictionary, ICMusicSubscriptionStatus, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {

	ICUserIdentityContext* _identityContext;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;
	ICMusicSubscriptionStatus* _subscriptionStatus;

}

@property (nonatomic,readonly) ICUserIdentity * identity; 
@property (nonatomic,readonly) ICMusicSubscriptionStatus * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
+(id)sharedMonitorForIdentity:(id)arg1 ;
+(id)_sharedInstanceManager;
+(id)sharedMonitorForIdentity:(id)arg1 identityStore:(id)arg2 ;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
-(void)dealloc;
-(void)_endObservingSubscriptionStatus;
-(void)refreshSubscriptionStatus;
-(ICUserIdentity *)identity;
-(id)_initWithIdentityContext:(id)arg1 ;
-(id)description;
-(void)_handleSubscriptionStatusDidChange:(id)arg1 ;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)_beginObservingSubscriptionStatus;
-(void)endObservingSubscriptionStatusWithToken:(id)arg1 ;
-(void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginObservingSubscriptionStatusWithHandler:(/*^block*/id)arg1 ;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(id)_effectiveIdentityForRequestingSubscriptionStatus;
@end

