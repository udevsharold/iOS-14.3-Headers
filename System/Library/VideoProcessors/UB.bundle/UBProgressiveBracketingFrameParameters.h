/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UBProgressiveBracketingFrameParameters : NSObject {

	float _gain;
	int _AGC;
	double _integrationTime;

}

@property (assign,nonatomic) int AGC;                               //@synthesize AGC=_AGC - In the implementation block
@property (nonatomic,readonly) double integrationTime;              //@synthesize integrationTime=_integrationTime - In the implementation block
@property (nonatomic,readonly) float gain;                          //@synthesize gain=_gain - In the implementation block
-(float)gain;
-(int)AGC;
-(double)integrationTime;
-(id)initWithIntegrationTime:(double)arg1 gain:(float)arg2 AGC:(int)arg3 ;
-(void)setAGC:(int)arg1 ;
@end

