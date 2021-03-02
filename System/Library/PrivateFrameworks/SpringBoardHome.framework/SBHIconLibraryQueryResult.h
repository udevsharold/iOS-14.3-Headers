/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, SBHIconLibraryQuery, NSSet, SBHLocalizedIndexedCollation, NSDiffableDataSourceSnapshot, NSArray;

@interface SBHIconLibraryQueryResult : NSObject <NSCopying> {

	NSDictionary* _iconForItemIdentifier;
	unsigned long long _totalNumberOfItems;
	unsigned long long _queryResultIdx;
	SBHIconLibraryQuery* _query;
	NSSet* _icons;
	SBHLocalizedIndexedCollation* _collation;
	NSDiffableDataSourceSnapshot* _snapshot;
	unsigned long long _sortMethodology;

}

@property (nonatomic,retain) SBHLocalizedIndexedCollation * collation;                     //@synthesize collation=_collation - In the implementation block
@property (nonatomic,copy) NSDiffableDataSourceSnapshot * snapshot;                        //@synthesize snapshot=_snapshot - In the implementation block
@property (getter=isNullQueryResult,nonatomic,readonly) BOOL nullQueryResult; 
@property (nonatomic,readonly) SBHIconLibraryQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSSet * icons;                                         //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) unsigned long long sortMethodology;                         //@synthesize sortMethodology=_sortMethodology - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) unsigned long long totalNumberOfItems; 
+(id)nullQueryResults;
+(void)_hydrateSnapshot:(id)arg1 fromIcons:(id)arg2 query:(id)arg3 outCollation:(id*)arg4 outIconForItemIdentifier:(id*)arg5 outSortMethodology:(unsigned long long*)arg6 sortComparator:(/*^block*/id)arg7 ;
-(SBHLocalizedIndexedCollation *)collation;
-(NSArray *)sectionIdentifiers;
-(id)iconAtIndexPath:(id)arg1 ;
-(NSDiffableDataSourceSnapshot *)snapshot;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBHIconLibraryQuery *)query;
-(NSArray *)sectionIndexTitles;
-(unsigned long long)totalNumberOfItems;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(NSSet *)icons;
-(id)indexPathForIcon:(id)arg1 ;
-(id)initWithQuery:(id)arg1 icons:(id)arg2 sortComparator:(/*^block*/id)arg3 ;
-(unsigned long long)sortMethodology;
-(id)initWithQuery:(id)arg1 icons:(id)arg2 snapshot:(id)arg3 collation:(id)arg4 iconForitemIdentifier:(id)arg5 sortMethodology:(unsigned long long)arg6 ;
-(BOOL)isEqualToQueryResult:(id)arg1 ;
-(id)_firstExtantSectionWithCollationIndexGreaterThan:(long long)arg1 ;
-(id)sectionIdentifierForIcon:(id)arg1 ;
-(id)itemIdentifierForIcon:(id)arg1 ;
-(id)sectionIdentifierAtIndex:(unsigned long long)arg1 ;
-(id)iconForItemIdentifier:(id)arg1 ;
-(id)titleForSectionIdentifier:(id)arg1 ;
-(BOOL)isNullQueryResult;
-(id)titleForSectionAtIndex:(long long)arg1 ;
-(id)iconsForSectionAtIndex:(unsigned long long)arg1 ;
-(void)setCollation:(SBHLocalizedIndexedCollation *)arg1 ;
@end
