/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSPasswordBreachHelperProtocol
@required
-(void)runLookupSessionIgnoringMinimumDelay:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(/*^block*/id)arg1;
-(void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(/*^block*/id)arg1;
-(void)addResultRecordDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
