/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ATXMagicalMomentsSignals : NSObject {

	unsigned long long _predictionSource;
	long long _reason;
	NSDictionary* _reasonMetadata;
	double _confidence;
	long long _anchorType;
	unsigned long long _predictionIndex;

}

@property (nonatomic,readonly) unsigned long long predictionSource;              //@synthesize predictionSource=_predictionSource - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * reasonMetadata;                    //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long anchorType;                             //@synthesize anchorType=_anchorType - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionIndex;               //@synthesize predictionIndex=_predictionIndex - In the implementation block
-(double)confidence;
-(id)init;
-(NSDictionary *)reasonMetadata;
-(long long)reason;
-(long long)anchorType;
-(unsigned long long)predictionIndex;
-(unsigned long long)predictionSource;
-(id)initWithPredictionSource:(unsigned long long)arg1 reason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 anchorType:(long long)arg5 index:(unsigned long long)arg6 ;
@end

