/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSURL, NSMutableDictionary;

@interface WBSPasswordWarningStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	BOOL _hasPendingChanges;
	NSURL* _backingStoreURL;
	NSMutableDictionary* _lastWarningDatesByPersistentIdentifier;

}
+(id)sharedStore;
-(void)saveStoreSynchronously;
-(void)_saveStoreSoon;
-(id)_initWithBackingStoreURL:(id)arg1 ;
-(void)_saveStoreNow;
-(id)_initWithDefaultBackingStore;
-(void)_loadStoreIfNecessary;
-(void)_addPersistentIdentifier:(id)arg1 withLastWarningDate:(id)arg2 ;
-(void)getContainsPersistentIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addPersistentIdentifier:(id)arg1 ;
-(void)synchronousyClearIdentifiersAddedAfterDate:(id)arg1 ;
-(void)clearStoreSynchronously;
@end

