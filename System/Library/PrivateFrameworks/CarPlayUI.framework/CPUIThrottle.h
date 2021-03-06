/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CPUIThrottle : NSObject {

	NSDate* _unthrottleDate;
	NSDate* _throttleDate;
	unsigned long long _attempts;
	double _base;
	double _factor;
	double _max;

}

@property (getter=isThrottled,nonatomic,readonly) BOOL throttled; 
@property (nonatomic,readonly) NSDate * unthrottleDate;                        //@synthesize unthrottleDate=_unthrottleDate - In the implementation block
@property (nonatomic,readonly) NSDate * throttleDate;                          //@synthesize throttleDate=_throttleDate - In the implementation block
@property (nonatomic,readonly) unsigned long long attempts;                    //@synthesize attempts=_attempts - In the implementation block
@property (nonatomic,readonly) double base;                                    //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) double factor;                                  //@synthesize factor=_factor - In the implementation block
@property (nonatomic,readonly) double max;                                     //@synthesize max=_max - In the implementation block
-(double)base;
-(NSDate *)throttleDate;
-(double)factor;
-(void)unthrottle;
-(unsigned long long)attempts;
-(double)max;
-(id)initWithBase:(double)arg1 factor:(double)arg2 max:(double)arg3 ;
-(NSDate *)unthrottleDate;
-(BOOL)isThrottled;
-(id)initWithBase:(double)arg1 ;
-(BOOL)incrementAttempts;
@end

