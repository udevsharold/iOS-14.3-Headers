/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@interface slicMetalParameters : NSObject {

	float _superPixelSize;
	unsigned _no_iters;
	float _defaultsSlicoSpatialBias;
	float _slicoInverseWeight;
	CGSize _inputImageSize;
	CGSize _mapSize;

}

@property (assign,nonatomic) CGSize inputImageSize;                       //@synthesize inputImageSize=_inputImageSize - In the implementation block
@property (assign,nonatomic) CGSize mapSize;                              //@synthesize mapSize=_mapSize - In the implementation block
@property (assign,nonatomic) float superPixelSize;                        //@synthesize superPixelSize=_superPixelSize - In the implementation block
@property (assign,nonatomic) unsigned no_iters;                           //@synthesize no_iters=_no_iters - In the implementation block
@property (assign,nonatomic) float defaultsSlicoSpatialBias;              //@synthesize defaultsSlicoSpatialBias=_defaultsSlicoSpatialBias - In the implementation block
@property (assign,nonatomic) float slicoInverseWeight;                    //@synthesize slicoInverseWeight=_slicoInverseWeight - In the implementation block
-(CGSize)mapSize;
-(CGSize)inputImageSize;
-(void)setMapSize:(CGSize)arg1 ;
-(void)setInputImageSize:(CGSize)arg1 ;
-(float)superPixelSize;
-(void)setSuperPixelSize:(float)arg1 ;
-(unsigned)no_iters;
-(void)setNo_iters:(unsigned)arg1 ;
-(float)defaultsSlicoSpatialBias;
-(void)setDefaultsSlicoSpatialBias:(float)arg1 ;
-(float)slicoInverseWeight;
-(void)setSlicoInverseWeight:(float)arg1 ;
@end

