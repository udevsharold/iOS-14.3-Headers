/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, SBUIActionViewLabel, NSArray, MTVisualStylingProvider, SBUIAction;

@interface SBUIActionView : UIView {

	BOOL _interfaceOrientationIsPortrait;
	UIImageView* _imageView;
	UIView* _textContainer;
	SBUIActionViewLabel* _titleLabel;
	SBUIActionViewLabel* _subtitleLabel;
	UIView* _highlightView;
	NSArray* _imageViewLayoutConstraints;
	MTVisualStylingProvider* _visualStylingProviderStroke;
	MTVisualStylingProvider* _visualStylingProviderFill;
	BOOL _highlighted;
	SBUIAction* _action;
	long long _imagePosition;

}

@property (nonatomic,readonly) SBUIAction * action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long imagePosition;                            //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) double leadingContentMargin; 
@property (nonatomic,readonly) double trailingContentMargin; 
-(id)initWithAction:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(long long)imagePosition;
-(void)_setupSubviews;
-(BOOL)isHighlighted;
-(void)setImagePosition:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(SBUIAction *)action;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)leadingContentMargin;
-(void)setHighlighted:(BOOL)arg1 withFeedbackRetargetBehavior:(id)arg2 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_updateImageViewLayoutConstraints;
-(double)trailingContentMargin;
@end
