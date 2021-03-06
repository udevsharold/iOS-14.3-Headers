/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class UIImage, UIColor, NSArray, UIVibrancyEffect;

@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {

	long long _translucence;
	UIImage* _backgroundImage;
	UIColor* _backgroundTintColor;
	NSArray* _backgroundEffects;
	UIImage* _shadowImage;
	UIColor* _shadowColor;
	UIVibrancyEffect* _shadowEffect;
	BOOL _hasShadow;
	double _topInset;

}

@property (nonatomic,readonly) UIImage * shadowImage; 
@property (assign,nonatomic) BOOL disableTinting; 
@property (assign,nonatomic) double topInset;                         //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundEffect; 
-(double)bg1Alpha;
-(id)bg1ShadowColor;
-(id)bg1ShadowEffect;
-(id)bg1Color;
-(void)setUseExplicitGeometry:(BOOL)arg1 ;
-(id)bg1Effects;
-(BOOL)shouldUseExplicitGeometry;
-(id)bg1ShadowImage;
-(id)bg1Image;
-(double)bgInset;
-(BOOL)bg1HasShadow;
-(double)bg1ImageAlpha;
-(double)bg1ShadowAlpha;
-(void)configureAsTransparent;
-(void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(BOOL)arg3 ;
-(UIImage *)shadowImage;
-(void)describeInto:(id)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)configureWithEffects:(id)arg1 ;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 barStyle:(long long)arg3 ;
-(void)configureShadowForBarStyle:(long long)arg1 ;
-(void)configureWithoutShadow;
-(id)_colorForStyle:(long long)arg1 ;
-(void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(BOOL)arg3 ;
-(BOOL)hasBackgroundEffect;
-(void)configureImage:(id)arg1 forceTranslucent:(BOOL)arg2 ;
-(double)topInset;
-(void)configureShadowImage:(id)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(id)_blurWithStyle:(long long)arg1 tint:(id)arg2 ;
-(void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 backgroundTintColor:(id)arg3 ;
@end

