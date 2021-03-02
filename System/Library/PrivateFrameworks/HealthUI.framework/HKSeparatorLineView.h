/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView {

	UIColor* _color;
	double _separatorThickness;
	long long _dashStyle;
	double _leadingMargin;
	double _trailingMargin;

}

@property (nonatomic,copy) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double separatorThickness;              //@synthesize separatorThickness=_separatorThickness - In the implementation block
@property (assign,nonatomic) long long dashStyle;                    //@synthesize dashStyle=_dashStyle - In the implementation block
@property (assign,nonatomic) double leadingMargin;                   //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                  //@synthesize trailingMargin=_trailingMargin - In the implementation block
+(id)_hkecg_separatorView;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(double)leadingMargin;
-(UIColor *)color;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOpaque;
-(BOOL)_isVertical;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDashStyle:(long long)arg1 ;
-(void)setSeparatorThickness:(double)arg1 ;
-(void)_applyStyleToContext:(CGContextRef)arg1 ;
-(double)separatorThickness;
-(long long)dashStyle;
@end
