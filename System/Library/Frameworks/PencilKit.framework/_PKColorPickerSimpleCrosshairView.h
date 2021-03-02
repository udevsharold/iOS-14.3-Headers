/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _PKColorPickerSimpleCrosshairView : UIView {

	double _borderCornerRadius;
	UIView* _shadowView;
	UIView* _borderView;

}

@property (assign,nonatomic) double borderCornerRadius;              //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                    //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * borderView;                    //@synthesize borderView=_borderView - In the implementation block
-(void)layoutSubviews;
-(UIView *)borderView;
-(void)setBorderView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(UIView *)shadowView;
-(void)configureShadowView:(id)arg1 ;
-(void)configureBorderView:(id)arg1 ;
-(double)_cornerRadiusForBorderView;
-(double)_cornerRadiusForShadowView;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
@end
