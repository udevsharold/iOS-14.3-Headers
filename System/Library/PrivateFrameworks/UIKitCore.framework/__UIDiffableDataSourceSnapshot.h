/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/__UIDiffableDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDiffableDataSourceState;
@class NSMutableArray;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {

	id<_UIDiffableDataSourceState> _state;
	NSMutableArray* _pendingSnapshotUpdates;

}
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(id)initWithState:(id)arg1 ;
-(void)deleteAllItems;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(id)sectionIdentifiers;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(long long)numberOfItems;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(id)init;
-(void)_validateReloadUpdateThrowingIfNeeded:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(id)state;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)pendingSnapshotUpdates;
-(id)description;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)itemIdentifiers;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)_commitUpdateAtomic:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
@end

