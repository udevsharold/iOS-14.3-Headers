/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
@class _DPBiasedCoin;

@interface _DPPrioAlgorithm : NSObject {

	double _epsilon;
	unsigned long long _dimension;
	SCD_Struct_DP1* _prioMemory;
	_DPBiasedCoin* _coin;

}

@property (nonatomic,readonly) double epsilon;                            //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) SCD_Struct_DP1* prioMemory;                //@synthesize prioMemory=_prioMemory - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * coin;                      //@synthesize coin=_coin - In the implementation block
+(id)prioWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(unsigned long long)dimension;
-(double)epsilon;
-(_DPBiasedCoin *)coin;
-(void)dealloc;
-(id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(SCD_Struct_DP1*)prioMemory;
-(id)privatizeDataWithBlock:(/*^block*/id)arg1 ;
@end

