/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {

	unsigned char _networkType;
	BOOL _osSupportsAutoHotspot;
	BOOL _supportsCompanionLink;
	BOOL _hasDuplicates;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSNumber* _batteryLife;
	NSNumber* _signalStrength;
	NSString* _model;
	long long _group;
	NSData* _advertisementData;

}

@property (assign,nonatomic) BOOL supportsCompanionLink;                     //@synthesize supportsCompanionLink=_supportsCompanionLink - In the implementation block
@property (assign) BOOL hasDuplicates;                                       //@synthesize hasDuplicates=_hasDuplicates - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
@property (copy) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceIdentifier;                                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSNumber * batteryLife;                                   //@synthesize batteryLife=_batteryLife - In the implementation block
@property (assign) unsigned char networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (retain) NSNumber * signalStrength;                                //@synthesize signalStrength=_signalStrength - In the implementation block
@property (retain) NSString * model;                                         //@synthesize model=_model - In the implementation block
@property (assign) BOOL osSupportsAutoHotspot;                               //@synthesize osSupportsAutoHotspot=_osSupportsAutoHotspot - In the implementation block
@property (assign) long long group;                                          //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned char)networkType;
-(NSString *)deviceName;
-(NSString *)deviceIdentifier;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)model;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setGroup:(long long)arg1 ;
-(void)setNetworkType:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)signalStrength;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)advertisementData;
-(BOOL)isEqual:(id)arg1 ;
-(long long)group;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(unsigned char)networkTypeForIncomingType:(unsigned char)arg1 ;
-(NSNumber *)batteryLife;
-(id)batteryLifeFromInfo:(unsigned)arg1 ;
-(unsigned char)networkTypeFromInfo:(unsigned)arg1 ;
-(id)signalStrengthFromInfo:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(SCD_Struct_SF7)arg3 ;
-(BOOL)componentsAreEqualTo:(id)arg1 ;
-(void)updateWithHotspotInfo:(unsigned)arg1 ;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(BOOL)hasDuplicates;
-(BOOL)osSupportsAutoHotspot;
-(void)setOsSupportsAutoHotspot:(BOOL)arg1 ;
-(BOOL)supportsCompanionLink;
-(void)setSupportsCompanionLink:(BOOL)arg1 ;
-(void)setHasDuplicates:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

