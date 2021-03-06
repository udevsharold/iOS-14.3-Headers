/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage, HUCircleView, UIImageView, NSArray;

@interface HUCircleButton : UIButton {

	UIImage* _iconImage;
	HUCircleView* _circleView;
	UIImageView* _iconImageView;
	NSArray* _constraints;

}

@property (nonatomic,retain) HUCircleView * circleView;                //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                    //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
-(UIImageView *)iconImageView;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)tintColorDidChange;
-(UIImage *)iconImage;
-(void)setAlpha:(double)arg1 ;
-(NSArray *)constraints;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)_setupConstraints;
-(HUCircleView *)circleView;
-(void)setCircleView:(HUCircleView *)arg1 ;
@end

