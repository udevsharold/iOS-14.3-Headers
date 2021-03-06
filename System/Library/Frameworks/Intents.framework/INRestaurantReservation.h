/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSNumber, CLPlacemark;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding> {

	INDateComponentsRange* _reservationDuration;
	NSNumber* _partySize;
	CLPlacemark* _restaurantLocation;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * reservationDuration;              //@synthesize reservationDuration=_reservationDuration - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * partySize;                                     //@synthesize partySize=_partySize - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * restaurantLocation;                         //@synthesize restaurantLocation=_restaurantLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_duration;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservationDuration:(id)arg8 partySize:(id)arg9 restaurantLocation:(id)arg10 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLPlacemark *)restaurantLocation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INDateComponentsRange *)reservationDuration;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSNumber *)partySize;
-(void)encodeWithCoder:(id)arg1 ;
@end

