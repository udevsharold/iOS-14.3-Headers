/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UINavigationItem, CALayer, TSKToolbarTitleView, NSString, UIColor;

@interface TSKToolbar : UINavigationBar {

	UINavigationItem* _navigationItem;
	CALayer* _shadowLayer;
	BOOL _shadowEnabled;
	TSKToolbarTitleView* _navigationTitleView;
	double _leftToolbarItemsInset;
	double _rightToolbarItemsInset;
	double _leftToolbarItemsMaximumWidth;
	double _rightToolbarItemsMaximumWidth;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) TSKToolbarTitleView * navigationTitleView;              //@synthesize navigationTitleView=_navigationTitleView - In the implementation block
@property (assign,nonatomic) BOOL shadowEnabled;                                     //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) double leftToolbarItemsInset;                           //@synthesize leftToolbarItemsInset=_leftToolbarItemsInset - In the implementation block
@property (assign,nonatomic) double rightToolbarItemsInset;                          //@synthesize rightToolbarItemsInset=_rightToolbarItemsInset - In the implementation block
@property (assign,nonatomic) double leftToolbarItemsMaximumWidth;                    //@synthesize leftToolbarItemsMaximumWidth=_leftToolbarItemsMaximumWidth - In the implementation block
@property (assign,nonatomic) double rightToolbarItemsMaximumWidth;                   //@synthesize rightToolbarItemsMaximumWidth=_rightToolbarItemsMaximumWidth - In the implementation block
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)dealloc;
-(TSKToolbarTitleView *)navigationTitleView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 height:(double)arg3 isLeft:(BOOL)arg4 ;
-(double)leftToolbarItemsMaximumWidth;
-(double)rightToolbarItemsMaximumWidth;
-(double)leftToolbarItemsInset;
-(double)rightToolbarItemsInset;
-(id)itemWithTag:(long long)arg1 ;
-(void)setLeftItems:(id)arg1 title:(id)arg2 rightItems:(id)arg3 duration:(double)arg4 ;
-(void)setNavigationTitleView:(TSKToolbarTitleView *)arg1 ;
-(BOOL)shadowEnabled;
-(void)setLeftToolbarItemsInset:(double)arg1 ;
-(void)setRightToolbarItemsInset:(double)arg1 ;
-(void)setLeftToolbarItemsMaximumWidth:(double)arg1 ;
-(void)setRightToolbarItemsMaximumWidth:(double)arg1 ;
@end

