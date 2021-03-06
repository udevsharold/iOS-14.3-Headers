/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSURL, NSArray;

@interface WebBookmarkChangeSet : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _lastBookmarkIDForAddingInMemoryBookmark;
	NSMutableOrderedSet* _changes;
	NSMutableDictionary* _bookmarkIDToChanges;
	NSMutableDictionary* _folderIDToDeletedChildrenChanges;
	NSMutableDictionary* _folderIDToAddedChildrenChanges;
	NSMutableDictionary* _folderIDToModifiedChildrenChanges;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * changes; 
+(void)setSharedChangeSet:(id)arg1 ;
+(id)sharedChangeSet;
-(NSArray *)changes;
-(int)nextBookmarkIDForAddingBookmarkInMemory;
-(BOOL)bookmarkIsAddedInMemory:(int)arg1 ;
-(id)init;
-(BOOL)isBookmarkDeleted:(int)arg1 ;
-(id)modifiedBookmarksInBookmarkFolder:(int)arg1 ;
-(id)deletedBookmarkIDsInBookmarkFolder:(int)arg1 ;
-(void)_addChange:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)removeChange:(id)arg1 ;
-(unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1 ;
-(void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2 ;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeAllChanges;
-(void)_readPersistedChanges;
-(long long)replayChangesToBookmark:(id)arg1 ;
-(void)removeAllChanges;
-(void)addChange:(id)arg1 ;
-(id)addedBookmarksInBookmarkFolder:(int)arg1 ;
@end

