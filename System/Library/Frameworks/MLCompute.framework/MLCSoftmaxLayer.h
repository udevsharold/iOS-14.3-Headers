/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@interface MLCSoftmaxLayer : MLCLayer {

	int _operation;
	unsigned long long _dimension;

}

@property (nonatomic,readonly) int operation;                             //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
+(id)layerWithOperation:(int)arg1 ;
+(id)layerWithOperation:(int)arg1 dimension:(unsigned long long)arg2 ;
-(unsigned long long)dimension;
-(int)operation;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithSoftmaxOperation:(int)arg1 dimension:(unsigned long long)arg2 ;
@end

