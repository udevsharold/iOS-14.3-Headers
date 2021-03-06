/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, CLPlacemark;

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _provider;
	NSString* _busName;
	NSString* _busNumber;
	INDateComponentsRange* _tripDuration;
	CLPlacemark* _departureBusStopLocation;
	NSString* _departurePlatform;
	CLPlacemark* _arrivalBusStopLocation;
	NSString* _arrivalPlatform;

}

@property (nonatomic,copy,readonly) NSString * provider;                                 //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSString * busName;                                  //@synthesize busName=_busName - In the implementation block
@property (nonatomic,copy,readonly) NSString * busNumber;                                //@synthesize busNumber=_busNumber - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * tripDuration;                //@synthesize tripDuration=_tripDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * departureBusStopLocation;              //@synthesize departureBusStopLocation=_departureBusStopLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * departurePlatform;                        //@synthesize departurePlatform=_departurePlatform - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * arrivalBusStopLocation;                //@synthesize arrivalBusStopLocation=_arrivalBusStopLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * arrivalPlatform;                          //@synthesize arrivalPlatform=_arrivalPlatform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)initWithProvider:(id)arg1 busName:(id)arg2 busNumber:(id)arg3 tripDuration:(id)arg4 departureBusStopLocation:(id)arg5 departurePlatform:(id)arg6 arrivalBusStopLocation:(id)arg7 arrivalPlatform:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)busName;
-(NSString *)arrivalPlatform;
-(NSString *)departurePlatform;
-(INDateComponentsRange *)tripDuration;
-(NSString *)busNumber;
-(CLPlacemark *)arrivalBusStopLocation;
-(CLPlacemark *)departureBusStopLocation;
-(unsigned long long)hash;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)provider;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

