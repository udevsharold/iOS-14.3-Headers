/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorGlyph, _UIImageContent;

@interface _UIImageCUIVectorGlyphContent : _UIImageCGImageContent {

	CUINamedVectorGlyph* _vectorGlyph;
	_UIImageContent* _vectorContent;
	double _glyphScaleFactor;
	double _vectorScale;
	CGSize _sizeInPixels;

}

@property (assign,nonatomic) double glyphScaleFactor;              //@synthesize glyphScaleFactor=_glyphScaleFactor - In the implementation block
-(CGSize)sizeInPixels;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)initWithScale:(double)arg1 ;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(double)glyphScaleFactor;
-(BOOL)isVectorGlyph;
-(BOOL)_canProvideCGImageDirectly;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(id)vectorGlyph;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)setGlyphScaleFactor:(double)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorGlyph:(id)arg2 scale:(double)arg3 ;
-(double)vectorScale;
@end

