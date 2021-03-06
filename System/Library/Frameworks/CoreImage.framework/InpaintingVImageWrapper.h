/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingVImageWrapper : NSObject {

	vImage_Buffer* _image;
	BOOL freeWhenDone;
	int _bpp;

}

@property (readonly) vImage_Buffer* image;                                   //@synthesize image=_image - In the implementation block
@property (getter=getWidth,readonly) int width; 
@property (getter=getHeight,readonly) int height; 
@property (getter=getBytesPerPixel,readonly) int bytesPerPixel; 
@property (getter=getBytesPerRow,readonly) int bytesPerRow; 
@property (getter=getData,readonly) void* data; 
+(id)createVImageWrapperForProcessorInput:(id)arg1 thatMatchesOutput:(id)arg2 ;
+(id)vImageWrapperByCroppingWrapper:(id)arg1 toRect:(CGRect)arg2 ;
-(void)free;
-(void*)getData;
-(vImage_Buffer*)image;
-(int)getBytesPerRow;
-(void)dealloc;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bpr:(int)arg4 bytes:(void*)arg5 freeBytesWhenDone:(BOOL)arg6 ;
-(int)getWidth;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bytes:(void*)arg4 freeBytesWhenDone:(BOOL)arg5 ;
-(int)getBytesPerPixel;
-(id)initWithShapeOf:(id)arg1 ;
-(int)getHeight;
@end

