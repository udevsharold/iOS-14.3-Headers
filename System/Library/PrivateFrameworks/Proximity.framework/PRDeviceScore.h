/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PRRangeMeasurement, PRAngleMeasurement;

@interface PRDeviceScore : NSObject {

	NSData* _btAddress;
	long long _proximity;
	PRRangeMeasurement* _range;
	PRAngleMeasurement* _angle;
	double _score;
	double _scoreUncertainty;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSData * btAddress;                      //@synthesize btAddress=_btAddress - In the implementation block
@property (readonly) long long proximity;                     //@synthesize proximity=_proximity - In the implementation block
@property (readonly) PRRangeMeasurement * range;              //@synthesize range=_range - In the implementation block
@property (readonly) PRAngleMeasurement * angle;              //@synthesize angle=_angle - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
@property (readonly) double scoreUncertainty;                 //@synthesize scoreUncertainty=_scoreUncertainty - In the implementation block
-(PRRangeMeasurement *)range;
-(PRAngleMeasurement *)angle;
-(double)timestamp;
-(id)init;
-(void)setTimestamp:(double)arg1 ;
-(long long)proximity;
-(BOOL)isEqual:(id)arg1 ;
-(double)score;
-(NSData *)btAddress;
-(BOOL)isEqualToPRDeviceScore:(id)arg1 ;
-(double)scoreUncertainty;
-(id)initWithValues:(id)arg1 proximity:(long long)arg2 range:(id)arg3 angle:(id)arg4 score:(double)arg5 scoreUncertainty:(double)arg6 ;
@end

