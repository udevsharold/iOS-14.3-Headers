/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
-(id)image;
-(void)dealloc;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(CGImageRef)createCGImage;
-(id)imageIsZeroSizeImage:(BOOL*)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 isEmptyImage:(BOOL*)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 ;
-(id)maskFromSlice:(unsigned)arg1 ;
-(id)patternFromSlice:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)fillSample;
-(id)layerEffects;
-(id)colorFill;
-(id)gradient;
@end

