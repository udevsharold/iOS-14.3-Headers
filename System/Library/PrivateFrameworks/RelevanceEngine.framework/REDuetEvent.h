/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject {

	NSDateInterval* _interval;
	REFeatureValue* _value;
	double _confidence;

}

@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
+(id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3 ;
-(double)confidence;
-(REFeatureValue *)value;
-(NSDateInterval *)interval;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end
