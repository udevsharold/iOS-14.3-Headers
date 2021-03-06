/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSArray;

@interface _UIAnimatedImage : UIImage {

	NSArray* _images;
	double _duration;

}
+(BOOL)supportsSecureCoding;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(BOOL)_isResizable;
-(CGRect)_contentStretchInPixels;
-(UIEdgeInsets)capInsets;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)images;
-(BOOL)_isPDFVector;
-(long long)resizingMode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(void)_flipImageOrientationHorizontally;
-(id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isSVGVector;
-(double)duration;
-(CGRect)_contentRectInPixels;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
@end

