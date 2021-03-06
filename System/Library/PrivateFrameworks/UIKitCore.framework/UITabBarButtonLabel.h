/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class _UITabBarItemAppearanceStorage, UIColor, UITabBarButton;

@interface UITabBarButtonLabel : UILabel {

	double _boundsWidth;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	BOOL _isSelected;
	BOOL _isHighlighted;
	BOOL _hasSeenIdiom;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;
	UITabBarButton* _tabBarButton;

}

@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;              //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,retain) UIColor * unselectedTintColor;                                             //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,nonatomic,__weak) UITabBarButton * tabBarButton;                                      //@synthesize tabBarButton=_tabBarButton - In the implementation block
+(double)_fontPointSizeForIdiom:(long long)arg1 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(Class)_appearanceGuideClass;
-(long long)_idiomForFontGivenIdiom:(long long)arg1 ;
-(id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2 ;
-(void)_legacyApperance_updateTextColorsForState;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_UIAppearance_setBadgeColor:(id)arg1 ;
-(void)resizeToFitWidth:(double)arg1 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIColor *)unselectedTintColor;
-(void)setTabBarButton:(UITabBarButton *)arg1 ;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)_updateLabelsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITabBarButton *)tabBarButton;
-(void)setUnselectedTintColor:(UIColor *)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(BOOL)_shouldCeilSizeToViewScale;
-(void)updateTextColorsForState;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setBadgeColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_updateForFontChangeWithIdiom:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithTabBarDisplayStyle:(long long)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
@end

