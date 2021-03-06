/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface HKMCNotificationSentMetric : NSObject {

	NSDictionary* _eventPayload;
	NSString* _category;

}

@property (nonatomic,copy) NSDictionary * eventPayload;              //@synthesize eventPayload=_eventPayload - In the implementation block
@property (nonatomic,retain) NSString * category;                    //@synthesize category=_category - In the implementation block
+(id)eventName;
-(NSString *)category;
-(id)initWithCategory:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(id)description;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)eventPayload;
@end

