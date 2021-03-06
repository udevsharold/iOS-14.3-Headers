/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {

	NSArray* _glyphs;
	NSArray* _colors;
	NSArray* _offsets;
	NSArray* _scaleFactors;
	CGSize _sizeInPixels;
	CGPoint _anchorPoint;

}
-(BOOL)isCGImage;
-(CGSize)sizeInPixels;
-(id)initWithScale:(double)arg1 ;
-(id)initWithSize:(CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(CGPoint)arg6 ;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isVectorGlyph;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(id)description;
-(BOOL)canProvideCGImage;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(double)vectorScale;
@end

