/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)addNotesFromSubtree:(id)arg1 ;
-(BOOL)isFolderWithServerShareChanged:(id)arg1 ;
-(id)newManagedObjectContext;
-(id)searchableItemForObject:(id)arg1 ;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
@end

