/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)persistentStoreCoordinator;
-(void)startObservingChanges;
-(BOOL)isObservingChanges;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)uuid;
-(void)stageForReindexingWithContext:(id)arg1;
-(BOOL)needsReindexing;
-(id)newManagedObjectContext;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
-(id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2;
-(id)objectIDsNeedingProcessing;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
-(long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id*)arg2 objectIDURIToDelete:(id*)arg3 context:(id)arg4;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
-(void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(void)clearObjectIDsToProcess;
-(void)stopObservingChanges;

@end

