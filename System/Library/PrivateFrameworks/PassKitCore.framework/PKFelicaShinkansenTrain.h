/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSString;

@interface PKFelicaShinkansenTrain : NSObject <NSSecureCoding> {

	NSData* _originStation;
	NSData* _destinationStation;
	NSNumber* _departureTime;
	NSNumber* _arrivalTime;
	NSString* _trainName;
	NSNumber* _carNumber;
	NSNumber* _seatRow;
	NSNumber* _seatNumber;

}

@property (nonatomic,copy,readonly) NSData * originStation;                   //@synthesize originStation=_originStation - In the implementation block
@property (nonatomic,copy,readonly) NSData * destinationStation;              //@synthesize destinationStation=_destinationStation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * departureTime;                 //@synthesize departureTime=_departureTime - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * arrivalTime;                   //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * trainName;                     //@synthesize trainName=_trainName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * carNumber;                     //@synthesize carNumber=_carNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seatRow;                       //@synthesize seatRow=_seatRow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seatNumber;                    //@synthesize seatNumber=_seatNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)arrivalTime;
-(id)init;
-(NSNumber *)seatRow;
-(NSNumber *)seatNumber;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)departureTime;
-(NSData *)originStation;
-(NSData *)destinationStation;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)trainName;
-(NSNumber *)carNumber;
-(void)encodeWithCoder:(id)arg1 ;
@end
