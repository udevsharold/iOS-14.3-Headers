/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXBundleIdRemovableProtocol.h>
#import <libobjc.A.dylib/ATXActionKeyRemovableProtocol.h>

@protocol OS_dispatch_queue;
@class _ATXDataStore, NSMapTable, _ATXInternalUninstallNotification, NSObject, NSString, NSDate;

@interface _ATXAppLaunchSequenceManager : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol> {

	_ATXDataStore* _datastore;
	NSMapTable* _appLaunchSequence;
	NSMapTable* _appActionLaunchSequence;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSString* _lastAppActionLaunch;
	NSDate* _lastAppActionLaunchDate;

}
+(id)sharedInstance;
-(void)decayAllLaunchSequencesWithHalfLifeInDays:(double)arg1 ;
-(id)launchSequenceForBundle:(id)arg1 ;
-(id)init;
-(id)syncQueue;
-(void)deleteAllLaunchesForAppActions:(id)arg1 ;
-(id)launchSequence;
-(void)removeBundleIds:(id)arg1 ;
-(id)initWithInMemoryStore;
-(void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2 ;
-(id)initWithDataStore:(id)arg1 ;
-(void)removeActionKeys:(id)arg1 ;
-(id)launchSequenceForAppAction:(id)arg1 ;
-(void)deleteAllLaunchesForBundles:(id)arg1 ;
-(void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(double)arg1 ;
@end
