/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
-(void)willBeRemoved;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)clipRect;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)i_queueForTileProvider;
-(UIEdgeInsets)p_edgeInsetsForClipping;
-(CGImageRef)p_newImageForCachingBaseRep;
-(CGRect)p_clipRect;
-(CGRect)p_convertBaseToNaturalRect:(CGRect)arg1 ;
-(void)resetCachedPartitionedRendering;
@end

