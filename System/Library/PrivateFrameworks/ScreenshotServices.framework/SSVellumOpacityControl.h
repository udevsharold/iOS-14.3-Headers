/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class UISlider, UIImageView;

@interface SSVellumOpacityControl : UIControl {

	UISlider* _slider;
	UIImageView* _leadingImageView;
	UIImageView* _trailingImageView;

}

@property (assign,nonatomic) double value; 
+(double)preferredWidth;
-(double)value;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setValue:(double)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_leftImageView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_rightImageView;
@end
