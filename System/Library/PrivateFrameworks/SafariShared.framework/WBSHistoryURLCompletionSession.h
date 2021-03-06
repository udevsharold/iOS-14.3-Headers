/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>
#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@protocol OS_dispatch_queue;
@class WBSHistoryService, NSObject, WBSHistoryServiceDatabase, WBSURLCompletionDatabase, NSString;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSHistoryServiceDatabase* _database;
	WBSURLCompletionDatabase* _urlCompletionDatabase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_matchSnapshotForCompletionMatch:(id)arg1 ;
-(void)_ensureDatabaseIsWarmed;
-(id)_databaseConnectionOptions;
-(void)_getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(BOOL)arg3 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithHistoryService:(id)arg1 ;
@end

