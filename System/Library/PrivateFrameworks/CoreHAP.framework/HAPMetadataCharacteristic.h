/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, HAPMetadataCharacteristicValue;

@interface HAPMetadataCharacteristic : HMFObject {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _uuidStr;
	NSNumber* _properties;
	NSString* _format;
	NSString* _units;
	HAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                                   //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                                          //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSNumber * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * format;                                           //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                            //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) HAPMetadataCharacteristicValue * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
-(NSString *)units;
-(HAPMetadataCharacteristicValue *)valueMetadata;
-(NSString *)format;
-(void)setName:(NSString *)arg1 ;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(void)setChrDescription:(NSString *)arg1 ;
-(void)setUnits:(NSString *)arg1 ;
-(void)setProperties:(NSNumber *)arg1 ;
-(void)setValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(id)description;
-(NSNumber *)properties;
-(id)generateDictionary:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5 ;
-(NSString *)chrDescription;
-(NSString *)uuidStr;
-(void)dump;
@end

