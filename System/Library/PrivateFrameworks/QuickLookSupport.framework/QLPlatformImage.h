/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class UIImage;

@interface QLPlatformImage : NSObject {

	CGImageRef _cgImage;
	unsigned _orientation;
	double _scale;
	/*^block*/id _cleanupDataBlock;
	CGSize _size;

}

@property (assign) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (readonly) UIImage * UIImage; 
@property (assign) CGImageRef CGImage; 
@property (nonatomic,copy) id cleanupDataBlock;              //@synthesize cleanupDataBlock=_cleanupDataBlock - In the implementation block
@property (assign) unsigned orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (assign) double scale;                             //@synthesize scale=_scale - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithUIImage:(id)arg1 ;
-(CGImageRef)CGImage;
-(double)scale;
-(UIImage *)UIImage;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(void)setOrientation:(unsigned)arg1 ;
-(CGSize)size;
-(unsigned)orientation;
-(void)setScale:(double)arg1 ;
-(void)setCGImage:(CGImageRef)arg1 ;
-(id)cleanupDataBlock;
-(void)setCleanupDataBlock:(id)arg1 ;
@end

