/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFNetworkFailTracker : NSObject {

	int _numConsecutiveFails;
	double _lastFailTimeInSeconds;

}

@property (nonatomic,readonly) int numConsecutiveFails;                   //@synthesize numConsecutiveFails=_numConsecutiveFails - In the implementation block
@property (nonatomic,readonly) double lastFailTimeInSeconds;              //@synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds - In the implementation block
-(double)lastFailTimeInSeconds;
-(void)incrementFailCount;
-(int)numConsecutiveFails;
-(BOOL)lastFailTimeExpiredForSettings:(id)arg1 ;
@end
