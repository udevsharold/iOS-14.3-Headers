/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIColorScheme, NSString, SKUISegmentedControl, NSArray;

@interface SKUIPillsControl : UIControl {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	long long _maximumNumberOfVisiblePills;
	NSString* _moreListTitle;
	SKUISegmentedControl* _segmentedControl;
	NSArray* _titles;

}

@property (nonatomic,copy) SKUIColorScheme * colorScheme;                        //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfVisiblePills;              //@synthesize maximumNumberOfVisiblePills=_maximumNumberOfVisiblePills - In the implementation block
@property (nonatomic,copy) NSString * moreListTitle;                             //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (assign,nonatomic) long long selectedIndex; 
@property (nonatomic,readonly) CGRect selectedPillFrame; 
@property (nonatomic,copy) NSArray * titles;                                     //@synthesize titles=_titles - In the implementation block
-(void)dealloc;
-(NSArray *)titles;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(long long)selectedIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)reloadPills;
-(CGRect)selectedPillFrame;
-(long long)maximumNumberOfVisiblePills;
-(void)setMaximumNumberOfVisiblePills:(long long)arg1 ;
@end

