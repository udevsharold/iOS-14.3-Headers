/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol AVTToolBarDelegate;
@class NSArray, UIView, UIVisualEffectView;

@interface AVTToolBar : UIView {

	BOOL _isAnimating;
	id<AVTToolBarDelegate> _delegate;
	NSArray* _buttons;
	UIView* _border;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * border;                                     //@synthesize border=_border - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;               //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTToolBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                    //@synthesize isAnimating=_isAnimating - In the implementation block
+(double)defaultToolBarHeight;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIView *)border;
-(void)setIsAnimating:(BOOL)arg1 ;
-(NSArray *)buttons;
-(BOOL)isAnimating;
-(void)buttonPressed:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(double)borderWidth;
-(void)layoutSubviews;
-(void)setBorder:(UIView *)arg1 ;
-(void)setupView;
-(id)buttonWithTitle:(id)arg1 isDefault:(BOOL)arg2 ;
-(void)setDelegate:(id<AVTToolBarDelegate>)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(id<AVTToolBarDelegate>)delegate;
-(void)setupBorder;
@end
