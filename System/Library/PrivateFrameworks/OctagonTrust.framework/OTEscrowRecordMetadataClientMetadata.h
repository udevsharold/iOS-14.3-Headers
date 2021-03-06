/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {

	unsigned long long _devicePlatform;
	unsigned long long _secureBackupMetadataTimestamp;
	unsigned long long _secureBackupNumericPassphraseLength;
	unsigned long long _secureBackupUsesComplexPassphrase;
	unsigned long long _secureBackupUsesNumericPassphrase;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSString* _deviceMid;
	NSString* _deviceModel;
	NSString* _deviceModelClass;
	NSString* _deviceModelVersion;
	NSString* _deviceName;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasSecureBackupMetadataTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupMetadataTimestamp;                    //@synthesize secureBackupMetadataTimestamp=_secureBackupMetadataTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupNumericPassphraseLength; 
@property (assign,nonatomic) unsigned long long secureBackupNumericPassphraseLength;              //@synthesize secureBackupNumericPassphraseLength=_secureBackupNumericPassphraseLength - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesComplexPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesComplexPassphrase;                //@synthesize secureBackupUsesComplexPassphrase=_secureBackupUsesComplexPassphrase - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesNumericPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesNumericPassphrase;                //@synthesize secureBackupUsesNumericPassphrase=_secureBackupUsesNumericPassphrase - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceColor; 
@property (nonatomic,retain) NSString * deviceColor;                                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceEnclosureColor; 
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                     //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceMid; 
@property (nonatomic,retain) NSString * deviceMid;                                                //@synthesize deviceMid=_deviceMid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelClass; 
@property (nonatomic,retain) NSString * deviceModelClass;                                         //@synthesize deviceModelClass=_deviceModelClass - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelVersion; 
@property (nonatomic,retain) NSString * deviceModelVersion;                                       //@synthesize deviceModelVersion=_deviceModelVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePlatform; 
@property (assign,nonatomic) unsigned long long devicePlatform;                                   //@synthesize devicePlatform=_devicePlatform - In the implementation block
-(void)setDevicePlatform:(unsigned long long)arg1 ;
-(NSString *)deviceColor;
-(unsigned long long)devicePlatform;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDevicePlatform;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(id)description;
-(void)setSecureBackupMetadataTimestamp:(unsigned long long)arg1 ;
-(void)setHasSecureBackupMetadataTimestamp:(BOOL)arg1 ;
-(BOOL)hasSecureBackupMetadataTimestamp;
-(void)setSecureBackupNumericPassphraseLength:(unsigned long long)arg1 ;
-(BOOL)hasDeviceColor;
-(BOOL)hasDeviceMid;
-(void)setHasSecureBackupNumericPassphraseLength:(BOOL)arg1 ;
-(BOOL)hasSecureBackupNumericPassphraseLength;
-(void)setSecureBackupUsesComplexPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesComplexPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesComplexPassphrase;
-(BOOL)hasDeviceEnclosureColor;
-(NSString *)deviceMid;
-(void)setSecureBackupUsesNumericPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesNumericPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesNumericPassphrase;
-(BOOL)hasDeviceModelClass;
-(BOOL)hasDeviceModelVersion;
-(void)setHasDevicePlatform:(BOOL)arg1 ;
-(unsigned long long)secureBackupMetadataTimestamp;
-(void)setDeviceMid:(NSString *)arg1 ;
-(unsigned long long)secureBackupNumericPassphraseLength;
-(unsigned long long)secureBackupUsesComplexPassphrase;
-(unsigned long long)secureBackupUsesNumericPassphrase;
-(NSString *)deviceModelClass;
-(void)setDeviceModelClass:(NSString *)arg1 ;
-(NSString *)deviceModelVersion;
-(void)setDeviceModelVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

