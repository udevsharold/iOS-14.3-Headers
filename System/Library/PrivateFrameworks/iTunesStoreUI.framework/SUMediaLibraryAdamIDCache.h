/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SUMediaLibraryAdamIDCache : NSObject {

	NSMutableSet* _adamIDs;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isPopulated;

}
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_populateCache;
-(void)getContainsAdamID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIntersectionWithSet:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)populateCache;
@end

