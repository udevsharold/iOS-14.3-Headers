/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@interface MLCCompareLayer : MLCLayer {

	int _predicate;

}

@property (nonatomic,readonly) int predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
+(id)layerWithPredicate:(int)arg1 ;
-(id)initWithPredicate:(int)arg1 ;
-(id)description;
-(int)predicate;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
@end

