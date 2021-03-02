/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionManagerType.h>

@class FCBundleSubscription;

@interface NewsUI2.StubBundleSubscriptionManager : _UKNOWN_SUPERCLASS_ <FCBundleSubscriptionManagerType> {

	 cachedSubscription;
	 bundleSubscription;
	 entitlementsOverrideProvider;

}

@property (readonly,nonatomic) FCBundleSubscription * cachedSubscription; 
@property (readonly,nonatomic) FCBundleSubscription * bundleSubscription; 
@property (retain,nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)removeObserver:(id)arg1 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(FCBundleSubscription *)cachedSubscription;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(id)bundleSubscriptionLookupEntry;
-(void)silentExpireBundleSubscription;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(FCBundleSubscription *)bundleSubscription;
@end
