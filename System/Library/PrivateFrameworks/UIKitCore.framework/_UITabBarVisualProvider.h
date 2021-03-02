/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITabBar, NSString;

@interface _UITabBarVisualProvider : NSObject {

	UITabBar* _tabBar;
	NSString* _backdropGroupName;

}

@property (nonatomic,readonly) UITabBar * tabBar;                                                  //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL useModernAppearance; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
@property (assign,nonatomic) double minimumWidthForHorizontalLayout; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UITabBar *)tabBar;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(double)defaultAnimationDuration;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)changeAppearance;
-(void)updateConstraints;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(double)minimumWidthForHorizontalLayout;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(double)_shim_shadowAlpha;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(NSString *)backdropGroupName;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)useModernAppearance;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_shim_accessoryView;
-(void)updateArchivedSubviews:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)changeLayout;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(id)preferredFocusedView;
-(BOOL)_shim_shadowHidden;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)teardown;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(BOOL)wantsFocus;
-(void)prepare;
-(void)layoutSubviews;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(id)initWithTabBar:(id)arg1 ;
-(double)_shim_heightForCustomizingItems;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(void)_shim_layoutItemsOnly;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(id)_shim_shadowView;
-(id)defaultTintColor;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_updateFocusHighlightVisibility;
-(void)tabBarSizeChanged:(CGSize)arg1 ;
-(void)_shim_setAccessoryView:(id)arg1 ;
@end
