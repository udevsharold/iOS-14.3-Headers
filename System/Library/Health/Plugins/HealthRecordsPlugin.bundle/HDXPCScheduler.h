/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDXPCScheduler : NSObject {

	NSString* _eventName;
	/*^block*/id _runBlock;

}

@property (nonatomic,copy) id runBlock;                                //@synthesize runBlock=_runBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)schedulerWithEventNamed:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(void)unschedule;
-(NSString *)eventName;
-(id)_initWithEventNamed:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(void)_registerWithCriteria:(id)arg1 ;
-(void)scheduleWithInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(void)_dispatchBlock;
-(id)_criteriaForInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(id)runBlock;
-(id)_identifierForEventName:(id)arg1 ;
-(void)_checkIn;
-(void)setRunBlock:(id)arg1 ;
@end
