/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, SearchUICheckView, UILabel;

@interface SearchUIConfirmationHUDView : UIView {

	UIVisualEffectView* _effectView;
	SearchUICheckView* _checkView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) SearchUICheckView * checkView;                //@synthesize checkView=_checkView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
-(void)setCheckView:(SearchUICheckView *)arg1 ;
-(void)animateCheckmark;
-(id)init;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UILabel *)textLabel;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)effectView;
-(SearchUICheckView *)checkView;
@end

