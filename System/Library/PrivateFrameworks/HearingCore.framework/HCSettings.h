/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HearingCore/HearingCore-Structs.h>
@class NSMutableSet, NSMutableDictionary, NPSDomainAccessor, NSObject;

@interface HCSettings : NSObject {

	os_unfair_lock_s _syncLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;
	NSObject*<OS_dispatch_queue> _nanoDomainAccessorQueue;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                            //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                             //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                                //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;                          //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nanoDomainAccessorQueue;              //@synthesize nanoDomainAccessorQueue=_nanoDomainAccessorQueue - In the implementation block
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(NSMutableSet *)synchronizePreferences;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(NSMutableSet *)registeredNotifications;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(id)nanoDomainAccessor;
-(void)pairedWatchDidChange:(id)arg1 ;
-(id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)preferenceDomain;
-(id)init;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)dealloc;
-(NPSDomainAccessor *)domainAccessor;
-(long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(BOOL)shouldStoreLocally;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(id)keysToSync;
-(id)preferenceKeyForSelector:(SEL)arg1 ;
-(void)setNanoDomainAccessorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)nanoDomainAccessorQueue;
-(id)notificationForPreferenceKey:(id)arg1 ;
-(void)resetValueForSelector:(SEL)arg1 ;
-(BOOL)boolValueForPreferenceKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(double)cgfloatValueForPreferenceKey:(id)arg1 withDefaultValue:(double)arg2 ;
@end
