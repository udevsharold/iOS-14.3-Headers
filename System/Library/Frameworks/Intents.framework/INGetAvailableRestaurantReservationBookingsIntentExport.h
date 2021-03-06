/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSNumber, NSDate;


@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSDateComponents * preferredBookingDateComponents; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@property (nonatomic,copy) NSDate * latestBookingDateForResults; 
@required
-(id)init;
-(NSNumber *)maximumNumberOfResults;
-(void)setPartySize:(unsigned long long)arg1;
-(void)setEarliestBookingDateForResults:(id)arg1;
-(INRestaurant *)restaurant;
-(void)setMaximumNumberOfResults:(id)arg1;
-(unsigned long long)partySize;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(id)arg1;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(NSDate *)earliestBookingDateForResults;

@end

