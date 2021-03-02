/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxContext : NSObject {

	FxContextPriv* _priv;

}
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextForCGImageWithOptions:(id)arg1 ;
+(id)contextForGLTextureWithOptions:(id)arg1 ;
+(id)contextWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
+(id)contextForCIImageWithOptions:(id)arg1 ;
-(CGImageRef)cgImage;
-(void)dealloc;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(id)ciImage;
-(id)bitmap;
-(int)contextType;
-(void)setOptions:(id)arg1 ;
-(CGContextRef)cgContext;
-(id)options;
-(id)initForCGImageWithOptions:(id)arg1 ;
-(id)initForGLTextureWithOptions:(id)arg1 ;
-(id)initWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
-(id)initForCIImageWithOptions:(id)arg1 ;
-(void)setCGImage:(CGImageRef)arg1 ;
-(void)setGLTexture:(unsigned long long)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(unsigned long long)glTexture;
-(CGSize)glTextureSize;
-(BOOL)glTextureIsFlipped;
-(CGColorSpaceRef)glTextureColorSpace;
-(id)derivedCIContext;
-(void)setCIImage:(id)arg1 ;
-(void)drawFxSample:(id)arg1 withRegionOfInterest:(id)arg2 ;
@end
