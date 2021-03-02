/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIView, NSString, UIColor;

@interface CPSLabelWithPlaceholder : UILabel {

	UIView* _placeholderView;
	NSString* _text;
	UIColor* _placeholderColor;
	double _placeholderWidth;

}

@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double placeholderWidth;                 //@synthesize placeholderWidth=_placeholderWidth - In the implementation block
-(void)setAttributedText:(id)arg1 ;
-(void)_commonInit;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(UIColor *)placeholderColor;
-(CGSize)intrinsicContentSize;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_placeholderInputsDidChange;
-(CGSize)_desiredPlaceholderSize;
-(void)setPlaceholderWidth:(double)arg1 ;
-(double)placeholderWidth;
@end
