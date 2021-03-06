/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface DBSCheckmarkView : UIView {

	BOOL _selected;
	UIImageView* __checkmarkImageView;
	UIImageView* __circleImageView;

}

@property (nonatomic,retain) UIImageView * _checkmarkImageView;              //@synthesize _checkmarkImageView=__checkmarkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * _circleImageView;                 //@synthesize _circleImageView=__circleImageView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
-(BOOL)isSelected;
-(UIImageView *)_checkmarkImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_configureView;
-(void)_updateViewState;
-(UIImageView *)_circleImageView;
-(void)set_checkmarkImageView:(UIImageView *)arg1 ;
-(void)set_circleImageView:(UIImageView *)arg1 ;
@end

