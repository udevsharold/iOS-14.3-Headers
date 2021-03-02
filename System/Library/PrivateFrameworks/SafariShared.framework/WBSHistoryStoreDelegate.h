/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@optional
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1;

@required
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveHostnames:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;
-(void)historyStore:(id)arg1 didAddVisits:(id)arg2;
-(void)historyStoreWasCleared:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;

@end
