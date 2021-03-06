/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryCenterUI/BatteryCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface BCUIRingCapShadow : UIView {

	UIImageView* _shadowCapImageView;
	double _lineWidth;
	double _arcFraction;
	CGRect _ringBounds;

}

@property (nonatomic,readonly) CGRect ringBounds;              //@synthesize ringBounds=_ringBounds - In the implementation block
@property (nonatomic,readonly) double lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double arcFraction;               //@synthesize arcFraction=_arcFraction - In the implementation block
+(id)ringCapShadowForRingWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
+(id)_ringCapShadowImageWithRingBounds:(CGRect)arg1 lineWidth:(double)arg2 scale:(double)arg3 ;
-(double)lineWidth;
-(void)layoutSubviews;
-(void)setArcFraction:(double)arg1 ;
-(CGRect)ringBounds;
-(id)_initWithRingBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(CGRect)_shadowCapFrame;
-(double)arcFraction;
@end

