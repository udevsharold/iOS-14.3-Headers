/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, HAPCharacteristicMetadata;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding> {

	NSUUID* _characteristicUUID;
	NSNumber* _characteristicInstanceId;
	unsigned long long _characteristicProperties;
	HAPCharacteristicMetadata* _characteristicMetadata;

}

@property (assign,nonatomic) unsigned long long characteristicProperties;                     //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) HAPCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,readonly) NSUUID * characteristicUUID;                                   //@synthesize characteristicUUID=_characteristicUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * characteristicInstanceId;                           //@synthesize characteristicInstanceId=_characteristicInstanceId - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HAPCharacteristicMetadata *)characteristicMetadata;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)characteristicProperties;
-(void)setCharacteristicProperties:(unsigned long long)arg1 ;
-(NSUUID *)characteristicUUID;
-(NSNumber *)characteristicInstanceId;
-(void)setCharacteristicMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4 ;
-(void)updateWithCharacteristic:(id)arg1 ;
@end
