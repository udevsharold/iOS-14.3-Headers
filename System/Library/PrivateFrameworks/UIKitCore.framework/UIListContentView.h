/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentViewComponentDescribing.h>
#import <UIKit/UIContentView.h>

@class UIListContentConfiguration, _UIListContentImageView, UILabel, UILayoutGuide, NSLayoutRect, NSString;

@interface UIListContentView : UIView <_UIContentViewComponentDescribing, UIContentView> {

	UIListContentConfiguration* _animatingFromConfiguration;
	UIListContentConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	UIListContentConfiguration* _configuration;
	_UIListContentImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _secondaryTextLabel;
	/*^block*/id _primaryTextFrameDidChangeHandler;
	UILayoutGuide* _textLayoutGuide;
	UILayoutGuide* _secondaryTextLayoutGuide;
	UILayoutGuide* _imageLayoutGuide;

}

@property (nonatomic,copy) UIListContentConfiguration * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * textLayoutGuide;                                                            //@synthesize textLayoutGuide=_textLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * secondaryTextLayoutGuide;                                                   //@synthesize secondaryTextLayoutGuide=_secondaryTextLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * imageLayoutGuide;                                                           //@synthesize imageLayoutGuide=_imageLayoutGuide - In the implementation block
@property (nonatomic,readonly) NSLayoutRect * _primaryTextLayoutRect; 
@property (nonatomic,readonly) CGRect _primaryTextLayoutFrame; 
@property (setter=_setPrimaryTextFrameDidChangeHandler:,nonatomic,copy) id _primaryTextFrameDidChangeHandler;              //@synthesize primaryTextFrameDidChangeHandler=_primaryTextFrameDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(UIListContentConfiguration *)configuration;
-(CGRect)_primaryTextLayoutFrame;
-(id)_primaryTextFrameDidChangeHandler;
-(void)_setPrimaryTextFrameDidChangeHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)layoutSubviews;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(void)setConfiguration:(UIListContentConfiguration *)arg1 ;
-(UILayoutGuide *)textLayoutGuide;
-(UILayoutGuide *)imageLayoutGuide;
-(UILayoutGuide *)secondaryTextLayoutGuide;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(NSLayoutRect *)_primaryTextLayoutRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_multilineContextWidth;
-(double)_preferredMaxLayoutWidth;
@end

