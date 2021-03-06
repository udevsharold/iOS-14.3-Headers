/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface VSTimeoutCondition : NSObject {

	BOOL _shouldStop;
	double _timeoutValue;
	NSCondition* _refreshTimeoutCondition;

}

@property (nonatomic,retain) NSCondition * refreshTimeoutCondition;              //@synthesize refreshTimeoutCondition=_refreshTimeoutCondition - In the implementation block
@property (assign,nonatomic) BOOL shouldStop;                                    //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) double timeoutValue;                                //@synthesize timeoutValue=_timeoutValue - In the implementation block
-(BOOL)wait;
-(void)refresh;
-(void)setShouldStop:(BOOL)arg1 ;
-(BOOL)shouldStop;
-(void)stop;
-(double)timeoutValue;
-(void)setTimeoutValue:(double)arg1 ;
-(id)initWithTimeoutValue:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(BOOL)_waitForTimeInterval:(double)arg1 ;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
@end

