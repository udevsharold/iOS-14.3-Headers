/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoInnerProductWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS {

	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(BOOL)ready;
-(float*)biasTerms;
-(void*)weights;
-(id)initWithParams:(inner_product_uniforms)arg1 forMode:(BOOL)arg2 ;
-(id<MTLBuffer>)weightsBuffer;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
@end
