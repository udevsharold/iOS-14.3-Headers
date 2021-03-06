/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVImageBufferImpl;
#import <ProVideo/ProVideo-Structs.h>
@interface PVImageBuffer : NSObject {

	id<PVImageBufferImpl> _imageBufferImpl;
	HGSynchronizable* _lock;

}
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)imageWithHGBitmap:(HGRef<HGBitmap>*)arg1 ;
+(id)imageWithHGCVPixelBuffer:(HGRef<HGCVPixelBuffer>*)arg1 ;
-(id)copyOfUIImage;
-(id)copyOfUIImage:(CGRect)arg1 ;
-(id)copyOfUIImageFromRectInPixels:(CGRect)arg1 atSizeInPixels:(CGSize)arg2 ;
-(CGImageRef)cgImage;
-(id)debugQuickLookObject;
-(void)dealloc;
-(CGSize)size;
-(id)uiImage;
-(id)description;
-(CVBufferRef)cvPixelBuffer;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(CVBufferRef)cvPixelBufferWithColorSpace:(id)arg1 ;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmap;
-(id)initWithImageBufferImpl:(id)arg1 ;
@end

