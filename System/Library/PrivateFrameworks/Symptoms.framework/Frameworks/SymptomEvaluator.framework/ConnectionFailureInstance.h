/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ConnectionFailureInstance : NSObject {

	double _flowStart;
	double _flowDuration;

}

@property (assign,nonatomic) double flowStart;                 //@synthesize flowStart=_flowStart - In the implementation block
@property (assign,nonatomic) double flowDuration;              //@synthesize flowDuration=_flowDuration - In the implementation block
-(double)flowDuration;
-(void)setFlowDuration:(double)arg1 ;
-(id)description;
-(double)flowStart;
-(void)setFlowStart:(double)arg1 ;
@end
