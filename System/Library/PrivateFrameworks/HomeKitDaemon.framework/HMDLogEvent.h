/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSError, NSDate;

@interface HMDLogEvent : HMFObject {

	BOOL _submitted;
	NSUUID* _eventType;
	NSError* _eventError;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,getter=isSubmitted,nonatomic) BOOL submitted;              //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUUID * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSError * eventError;                           //@synthesize eventError=_eventError - In the implementation block
@property (readonly) double durationInMilliseconds; 
@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
+(id)stringForSource:(unsigned long long)arg1 ;
-(NSDate *)endDate;
-(NSUUID *)eventType;
-(id)initWithEventType:(id)arg1 ;
-(id)init;
-(double)durationInMilliseconds;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(BOOL)isSubmitted;
-(void)setEventError:(NSError *)arg1 ;
-(NSError *)eventError;
-(id)bucketedDurationWithRoundInterval:(id)arg1 ;
-(void)populateErrorDetails:(id)arg1 ;
@end
