/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebBookmarkInMemoryChangeFilter;
@class NSString, NSArray;

@interface WebBookmarkListQuery : NSObject {

	NSString* _query;
	NSString* _queryWithOrderBy;
	NSString* _orderBy;
	NSArray* _titleWordPrefixes;
	NSArray* _titleWordPrefixesForInMemoryFiltering;
	NSString* _urlFilter;
	BOOL _includeHidden;
	BOOL _countShouldUseNumChildrenIfPossible;
	BOOL _includeDescendantsAsChildren;
	BOOL _customQuery;
	int _folderID;
	id<WebBookmarkInMemoryChangeFilter> _inMemoryFilter;

}

@property (getter=isCustomQuery,nonatomic,readonly) BOOL customQuery;                         //@synthesize customQuery=_customQuery - In the implementation block
@property (nonatomic,readonly) int folderID;                                                  //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,retain) id<WebBookmarkInMemoryChangeFilter> inMemoryFilter;              //@synthesize inMemoryFilter=_inMemoryFilter - In the implementation block
-(id<WebBookmarkInMemoryChangeFilter>)inMemoryFilter;
-(id)init;
-(id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3 ;
-(id)_normalizeUserTypedString:(id)arg1 ;
-(id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4 ;
-(int)folderID;
-(int)countInCollection:(id)arg1 ;
-(id)_filterBookmarks:(id)arg1 ;
-(int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)arg3 ;
-(int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg2 ;
-(id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)setInMemoryFilter:(id<WebBookmarkInMemoryChangeFilter>)arg1 ;
-(id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3 ;
-(long long)_listQueryType;
-(id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(BOOL)arg3 includeDescendantsAsChildren:(BOOL)arg4 usingFilter:(id)arg5 ;
-(BOOL)isCustomQuery;
-(id)debugDescription;
-(void)_preparePrefixesFromNormalizedString:(id)arg1 ;
-(id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2 ;
@end
