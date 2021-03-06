/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialView;

@interface SBHFeatherBlurView : UIView {

	MTMaterialView* _backgroundBlurView;

}

@property (nonatomic,readonly) MTMaterialView * backgroundBlurView;              //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
+(id)matchMoveAnimationForFrame:(CGRect)arg1 relativeToView:(id)arg2 ;
+(id)configureGradientMaskForFeatherBlurRecipe:(unsigned long long)arg1 onContentView:(id)arg2 ;
+(BOOL)_requiresLowQualityFeatherBlur:(unsigned long long)arg1 ;
+(UIEdgeInsets)gradientMaskLayerInsetsForFeatherBlurRecipe:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithRecipe:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)backgroundBlurView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

