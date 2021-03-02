/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _HKBodyMarginsLayout : UIView {

	UIView* _leftMarginView;
	UIView* _bodyView;
	UIView* _rightMarginView;

}

@property (nonatomic,retain) UIView * leftMarginView;               //@synthesize leftMarginView=_leftMarginView - In the implementation block
@property (nonatomic,retain) UIView * bodyView;                     //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) UIView * rightMarginView;              //@synthesize rightMarginView=_rightMarginView - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(UIView *)bodyView;
-(void)layoutSubviews;
-(void)_invalidateLayout;
-(void)setBodyView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLeftMarginView:(UIView *)arg1 ;
-(void)setRightMarginView:(UIView *)arg1 ;
-(UIView *)leftMarginView;
-(UIView *)rightMarginView;
-(double)_totalViewWidth;
-(double)_maximumViewHeight;
@end
