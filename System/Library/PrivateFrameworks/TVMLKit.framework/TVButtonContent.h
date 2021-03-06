/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>

@class UIColor, UIView, UIVisualEffectView, NSString, _TVImageView, UILabel, IKViewElement;

@interface TVButtonContent : _UIFloatingContentView {

	UIColor* __backgroundColor;
	BOOL _focused;
	BOOL _blurEnabled;
	BOOL _disabled;
	BOOL _imageTrailsTextContent;
	double _cornerRadius;
	UIView* _overlayView;
	UIVisualEffectView* _backdropView;
	long long _backdropStyle;
	NSString* _groupName;
	double _focusSizeIncrease;
	_TVImageView* _imageView;
	UILabel* _textContentView;
	_TVImageView* _accessoryView;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;

}

@property (getter=isFocused,nonatomic,readonly) BOOL focused;                  //@synthesize focused=_focused - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,readonly) BOOL blurEnabled;                               //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSString * groupName;                             //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                         //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                      //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textContentView;                        //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryView;                     //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                           //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(BOOL)isDisabled;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIColor *)highlightColor;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFocused;
-(_TVImageView *)accessoryView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(NSString *)groupName;
-(void)setImageView:(_TVImageView *)arg1 ;
-(long long)backdropStyle;
-(UIView *)overlayView;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(BOOL)isFocused;
-(UIVisualEffectView *)backdropView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)backgroundColor;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setTextContentView:(UILabel *)arg1 ;
-(UILabel *)textContentView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(BOOL)imageTrailsTextContent;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(BOOL)blurEnabled;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(double)_imageMarginFromText;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
@end

