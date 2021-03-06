/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDate;

@interface ACSimpleRateLimiter : NSObject {

	unsigned long long _maximum;
	double _timeInterval;
	NSLock* _instanceLock;
	NSMutableArray* _sortedActionDates;

}

@property (readonly) NSDate * rateLimitingStartDate; 
@property (retain) NSLock * instanceLock;                           //@synthesize instanceLock=_instanceLock - In the implementation block
@property (retain) NSMutableArray * sortedActionDates;              //@synthesize sortedActionDates=_sortedActionDates - In the implementation block
@property (readonly) unsigned long long maximum;                    //@synthesize maximum=_maximum - In the implementation block
@property (readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
-(unsigned long long)maximum;
-(NSLock *)instanceLock;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)locked_addDate:(id)arg1 ;
-(double)timeInterval;
-(NSMutableArray *)sortedActionDates;
-(BOOL)isEmptyAfterFlushing;
-(NSDate *)rateLimitingStartDate;
-(void)setSortedActionDates:(NSMutableArray *)arg1 ;
-(void)setInstanceLock:(NSLock *)arg1 ;
-(void)locked_removeDatesBefore:(id)arg1 ;
-(unsigned long long)locked_indexOfFirstAfter:(id)arg1 ;
-(BOOL)reservePerformActionNow;
@end

