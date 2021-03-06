/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSeat, INBusTrip;

@interface INBusReservation : INReservation <NSCopying, NSSecureCoding> {

	INSeat* _reservedSeat;
	INBusTrip* _busTrip;

}

@property (nonatomic,copy,readonly) INSeat * reservedSeat;              //@synthesize reservedSeat=_reservedSeat - In the implementation block
@property (nonatomic,copy,readonly) INBusTrip * busTrip;                //@synthesize busTrip=_busTrip - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 url:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9 ;
-(INBusTrip *)busTrip;
-(INSeat *)reservedSeat;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end

