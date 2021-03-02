/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKLayerOffset : NSObject {

	SdfLayerOffset _layerOffset;
	double _offset;
	double _scale;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(id)init;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(SdfLayerOffset)sdfLayerOffset;
-(id)initWithSdfLayerOffset:(SdfLayerOffset)arg1 ;
-(id)initWithOffset:(double)arg1 scale:(double)arg2 ;
@end
