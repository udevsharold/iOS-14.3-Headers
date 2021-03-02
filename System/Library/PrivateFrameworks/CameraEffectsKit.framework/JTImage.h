/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, PVImageBuffer;

@interface JTImage : NSObject {

	UIImage* _image;
	PVImageBuffer* _pvImageBuffer;

}

@property (nonatomic,readonly) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * pvImageBuffer;              //@synthesize pvImageBuffer=_pvImageBuffer - In the implementation block
+(id)jtImageWithUIImage:(id)arg1 ;
-(UIImage *)image;
-(id)bluredImageWithFlippedXAxis:(BOOL)arg1 ;
-(id)initWithPVImage:(id)arg1 ;
-(PVImageBuffer *)pvImageBuffer;
-(id)initWithUIImage:(id)arg1 ;
-(BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
@end
