/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface _UICollectionViewSelectionController : NSObject {

	NSMutableSet* _selectedIndexPaths;
	NSMutableSet* _highlightedIndexPaths;
	NSMutableSet* _nonvisibleTrackedSelectedIdentifiers;
	BOOL _allowsMultipleSelection;

}

@property (nonatomic,readonly) long long selectedItemsCount; 
@property (nonatomic,readonly) long long highlightedItemsCount; 
@property (nonatomic,copy,readonly) NSSet * selectedIndexPaths; 
@property (nonatomic,copy,readonly) NSSet * highlightedIndexPaths; 
@property (assign,nonatomic) BOOL allowsMultipleSelection;                      //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
-(BOOL)allowsMultipleSelection;
-(void)rebaseItemsWithTranslator:(id)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(id)init;
-(void)reset;
-(id)highlightedIdentifiersForSnapshot:(id)arg1 ;
-(void)selectItemsAtIndexPaths:(id)arg1 ;
-(void)deselectItemAtIndexPath:(id)arg1 ;
-(id)rebaseIndexPath:(id)arg1 withTranslator:(id)arg2 ;
-(void)unhighlightItemsAtIndexPaths:(id)arg1 ;
-(void)unhighlightAllItems;
-(void)deselectItemsAtIndexPaths:(id)arg1 ;
-(void)highlightItemAtIndexPath:(id)arg1 ;
-(BOOL)isHighlightedAtIndexPath:(id)arg1 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)unhighlightItemAtIndexPath:(id)arg1 ;
-(void)highlightItemsAtIndexPaths:(id)arg1 ;
-(NSSet *)highlightedIndexPaths;
-(BOOL)isSelectedAtIndexPath:(id)arg1 ;
-(id)rebaseIndexPath:(id)arg1 withDiffableTransaction:(id)arg2 ;
-(long long)highlightedItemsCount;
-(void)rebaseItemsWithDiffableTransaction:(id)arg1 ;
-(NSSet *)selectedIndexPaths;
-(id)selectedIdentifiersForSnapshot:(id)arg1 ;
-(void)deselectAllItems;
-(long long)selectedItemsCount;
@end
