/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSTabOrderProvider;
@class NSMutableDictionary;

@interface WBSTabOrderManager : NSObject {

	NSMutableDictionary* _simplifiedIdentifierMap;
	long long _nextSimplifiedIdentifier;
	id<WBSTabOrderProvider> _tabOrderProvider;

}

@property (assign,nonatomic,__weak) id<WBSTabOrderProvider> tabOrderProvider;                      //@synthesize tabOrderProvider=_tabOrderProvider - In the implementation block
@property (nonatomic,readonly) id<WBSOrderedTab> tabToSelectBeforeClosingSelectedTab; 
-(id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(id)_tabInsertionHintForNewTabAfterTab:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)init;
-(id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1 ;
-(id)tabInsertionHintForNewBlankTabInCurrentContext;
-(unsigned long long)_indexOfLastRelatedTab;
-(id)tabInsertionHintForPosition:(unsigned long long)arg1 ;
-(BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
-(id)tabInsertionHintForSpawnedTab;
-(id<WBSOrderedTab>)tabToSelectBeforeClosingSelectedTab;
-(unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(BOOL)arg2 ;
-(void)setTabOrderProvider:(id<WBSTabOrderProvider>)arg1 ;
-(id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2 ;
-(id)tabInsertionHintForDuplicateOfTab:(id)arg1 ;
-(BOOL)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2 ;
-(id)tabToInsertSpawnedTabAfter;
-(unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)arg1 ;
-(id)tabInsertionHintForNewBlankTab;
-(id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)tabToInsertNewBlankTabAfter;
-(id<WBSTabOrderProvider>)tabOrderProvider;
-(id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(BOOL)arg2 ;
-(id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1 ;
-(id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1 ;
-(BOOL)tab:(id)arg1 isInSameSetAsTab:(id)arg2 ;
-(unsigned long long)_indexOfTabToInsertNewTabAfter;
-(unsigned long long)_userPreferredNewSpawnedTabPosition;
@end

