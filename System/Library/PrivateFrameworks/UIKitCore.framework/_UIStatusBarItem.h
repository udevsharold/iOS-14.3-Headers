/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatusBarIdentifier, NSMutableDictionary, _UIStatusBar, NSSet;

@interface _UIStatusBarItem : NSObject {

	BOOL _needsUpdate;
	_UIStatusBarIdentifier* _identifier;
	NSMutableDictionary* _displayItems;
	_UIStatusBar* _statusBar;

}

@property (nonatomic,retain) NSMutableDictionary * displayItems;                 //@synthesize displayItems=_displayItems - In the implementation block
@property (__weak,readonly) _UIStatusBar * statusBar;                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) _UIStatusBarIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * dependentEntryKeys; 
@property (nonatomic,readonly) BOOL needsUpdate;                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)defaultDisplayIdentifier;
+(id)itemIdentifierFromString:(id)arg1 ;
+(id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2 ;
+(Class)itemClassForIdentifier:(id)arg1 ;
+(id)itemIdentifierForDisplayItemIdentifier:(id)arg1 ;
+(id)createItemForIdentifier:(id)arg1 statusBar:(id)arg2 ;
+(id)identifier;
+(id)displayItemIdentifierFromString:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setNeedsUpdate;
-(void)setDisplayItems:(NSMutableDictionary *)arg1 ;
-(void)updatedDisplayItemsWithData:(id)arg1 ;
-(id)displayItemForIdentifier:(id)arg1 ;
-(id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSSet *)dependentEntryKeys;
-(_UIStatusBar *)statusBar;
-(_UIStatusBarIdentifier *)identifier;
-(id)description;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(BOOL)needsUpdate;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSMutableDictionary *)displayItems;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2 ;
@end
