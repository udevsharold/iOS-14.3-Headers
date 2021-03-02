/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXLinearGradientFill, SXClippingView, SXGradientView;

@interface SXGradientFillView : SXFillView {

	SXLinearGradientFill* _gradientFill;
	SXClippingView* _clippingView;
	SXGradientView* _gradientView;

}

@property (nonatomic,readonly) SXLinearGradientFill * gradientFill;              //@synthesize gradientFill=_gradientFill - In the implementation block
@property (nonatomic,readonly) SXClippingView * clippingView;                    //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) SXGradientView * gradientView;                    //@synthesize gradientView=_gradientView - In the implementation block
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXClippingView *)clippingView;
-(void)layoutSubviews;
-(SXGradientView *)gradientView;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2 ;
-(SXLinearGradientFill *)gradientFill;
@end
