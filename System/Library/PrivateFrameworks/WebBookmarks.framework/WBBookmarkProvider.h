/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBBookmarkProvider <NSObject>
@required
-(id)bookmarkWithID:(int)arg1;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2;
-(id)databaseHealthInformation;
-(id)leafChildCountForFoldersInFolderWithID:(int)arg1;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3;
-(unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
-(id)bookmarksMatchingString:(id)arg1;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4;

@end

