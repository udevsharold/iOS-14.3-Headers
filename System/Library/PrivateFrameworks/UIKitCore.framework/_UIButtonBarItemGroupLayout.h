/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSMapTable, NSMutableArray, _UIButtonBarLayout, UIBarButtonItemGroup, UILayoutGuide;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {

	NSMapTable* _itemLayoutMap;
	NSMutableArray* _itemLayouts;
	NSMutableArray* _configuredItemLayouts;
	_UIButtonBarLayout* _representativeLayout;
	BOOL _compact;
	BOOL _useGroupSizing;
	BOOL _suppressSpacing;
	UIBarButtonItemGroup* _group;
	UILayoutGuide* _groupSizeGuide;
	/*^block*/id _itemViewGenerator;

}

@property (nonatomic,readonly) UIBarButtonItemGroup * group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * groupSizeGuide;              //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (assign,nonatomic) BOOL compact;                                  //@synthesize compact=_compact - In the implementation block
@property (assign,nonatomic) BOOL useGroupSizing;                           //@synthesize useGroupSizing=_useGroupSizing - In the implementation block
@property (assign,nonatomic) BOOL suppressSpacing;                          //@synthesize suppressSpacing=_suppressSpacing - In the implementation block
@property (nonatomic,copy) id itemViewGenerator;                            //@synthesize itemViewGenerator=_itemViewGenerator - In the implementation block
-(id)subLayouts;
-(void)_configure;
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(BOOL)isGroupLayout;
-(BOOL)useGroupSizing;
-(BOOL)isSpaceLayout;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(void)setCompact:(BOOL)arg1 ;
-(void)_addLayoutViews:(id)arg1 ;
-(id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(BOOL)arg2 ;
-(BOOL)suppressSpacing;
-(id)layoutForBarButtonItem:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(id)itemViewGenerator;
-(BOOL)compact;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(id)description;
-(id)layoutsForSpacerItem:(id)arg1 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(UIBarButtonItemGroup *)group;
-(void)setItemViewGenerator:(id)arg1 ;
-(id)_representativeLayout;
-(id)_itemLayouts;
-(void)_iterateConfiguredLayouts:(/*^block*/id)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2 ;
-(UILayoutGuide *)groupSizeGuide;
@end

