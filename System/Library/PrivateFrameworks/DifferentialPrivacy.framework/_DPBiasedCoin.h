/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPBiasedCoin : NSObject {

	double _bias;

}

@property (nonatomic,readonly) double bias;              //@synthesize bias=_bias - In the implementation block
+(id)coinWithBias:(double)arg1 ;
+(double)sanitizedProbability:(double)arg1 ;
-(double)bias;
-(BOOL)flip;
-(id)init;
-(id)description;
-(unsigned char)generateByte;
-(id)initWithBias:(double)arg1 ;
@end

