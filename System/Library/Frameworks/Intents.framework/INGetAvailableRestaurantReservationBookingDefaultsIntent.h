/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingDefaultsIntentExport.h>

@class INRestaurant, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport> {

	INRestaurant* _restaurant;

}

@property (nonatomic,copy) INRestaurant * restaurant;               //@synthesize restaurant=_restaurant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentDescription;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRestaurant:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(INRestaurant *)restaurant;
-(id)_dictionaryRepresentation;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

