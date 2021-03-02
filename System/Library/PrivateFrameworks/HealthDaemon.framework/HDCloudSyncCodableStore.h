/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCloudSyncCodableStore : PBCodable <NSCopying> {

	long long _order;
	int _deviceMode;
	NSString* _deviceName;
	NSString* _ownerIdentifier;
	NSString* _pendingOwnerIdentifier;
	NSString* _productType;
	int _requiredProtocolVersion;
	NSData* _storeIdentifier;
	int _supportedProtocolVersion;
	NSString* _systemBuildVersion;
	BOOL _active;
	SCD_Struct_HD9 _has;

}

@property (nonatomic,readonly) BOOL hasOwnerIdentifier; 
@property (nonatomic,retain) NSString * ownerIdentifier;                     //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingOwnerIdentifier; 
@property (nonatomic,retain) NSString * pendingOwnerIdentifier;              //@synthesize pendingOwnerIdentifier=_pendingOwnerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) long long order;                                //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreIdentifier; 
@property (nonatomic,retain) NSData * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceMode; 
@property (assign,nonatomic) int deviceMode;                                 //@synthesize deviceMode=_deviceMode - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedProtocolVersion; 
@property (assign,nonatomic) int supportedProtocolVersion;                   //@synthesize supportedProtocolVersion=_supportedProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredProtocolVersion; 
@property (assign,nonatomic) int requiredProtocolVersion;                    //@synthesize requiredProtocolVersion=_requiredProtocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemBuildVersion; 
@property (nonatomic,retain) NSString * systemBuildVersion;                  //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                         //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                          //@synthesize deviceName=_deviceName - In the implementation block
-(void)setOrder:(long long)arg1 ;
-(NSString *)productType;
-(BOOL)active;
-(NSString *)deviceName;
-(NSString *)ownerIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(long long)order;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasActive;
-(unsigned long long)hash;
-(void)setHasActive:(BOOL)arg1 ;
-(NSData *)storeIdentifier;
-(id)description;
-(void)setStoreIdentifier:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasOrder;
-(BOOL)hasProductType;
-(int)supportedProtocolVersion;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOwnerIdentifier;
-(int)deviceMode;
-(void)setProductType:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(void)setSupportedProtocolVersion:(int)arg1 ;
-(void)setRequiredProtocolVersion:(int)arg1 ;
-(void)setDeviceMode:(int)arg1 ;
-(void)setPendingOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)pendingOwnerIdentifier;
-(int)requiredProtocolVersion;
-(BOOL)hasStoreIdentifier;
-(BOOL)hasPendingOwnerIdentifier;
-(void)setHasDeviceMode:(BOOL)arg1 ;
-(BOOL)hasDeviceMode;
-(id)deviceModeAsString:(int)arg1 ;
-(int)StringAsDeviceMode:(id)arg1 ;
-(void)setHasSupportedProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasSupportedProtocolVersion;
-(id)supportedProtocolVersionAsString:(int)arg1 ;
-(int)StringAsSupportedProtocolVersion:(id)arg1 ;
-(void)setHasRequiredProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasRequiredProtocolVersion;
-(id)requiredProtocolVersionAsString:(int)arg1 ;
-(int)StringAsRequiredProtocolVersion:(id)arg1 ;
-(BOOL)hasSystemBuildVersion;
@end
