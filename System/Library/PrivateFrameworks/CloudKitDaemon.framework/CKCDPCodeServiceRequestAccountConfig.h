/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {

	unsigned long long _accountFlags;
	long long _lastWebActivityUTCMills;
	long long _photosWebAccessTimestamp;
	NSString* _countryCode;
	BOOL _corporateSharingEnabled;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) BOOL hasCorporateSharingEnabled; 
@property (assign,nonatomic) BOOL corporateSharingEnabled;                    //@synthesize corporateSharingEnabled=_corporateSharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasLastWebActivityUTCMills; 
@property (assign,nonatomic) long long lastWebActivityUTCMills;               //@synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasPhotosWebAccessTimestamp; 
@property (assign,nonatomic) long long photosWebAccessTimestamp;              //@synthesize photosWebAccessTimestamp=_photosWebAccessTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAccountFlags; 
@property (assign,nonatomic) unsigned long long accountFlags;                 //@synthesize accountFlags=_accountFlags - In the implementation block
-(BOOL)hasCountryCode;
-(NSString *)countryCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)accountFlags;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setCorporateSharingEnabled:(BOOL)arg1 ;
-(void)setHasCorporateSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasCorporateSharingEnabled;
-(void)setLastWebActivityUTCMills:(long long)arg1 ;
-(void)setHasLastWebActivityUTCMills:(BOOL)arg1 ;
-(BOOL)hasLastWebActivityUTCMills;
-(void)setPhotosWebAccessTimestamp:(long long)arg1 ;
-(void)setHasPhotosWebAccessTimestamp:(BOOL)arg1 ;
-(BOOL)hasPhotosWebAccessTimestamp;
-(void)setAccountFlags:(unsigned long long)arg1 ;
-(void)setHasAccountFlags:(BOOL)arg1 ;
-(BOOL)hasAccountFlags;
-(BOOL)corporateSharingEnabled;
-(long long)lastWebActivityUTCMills;
-(long long)photosWebAccessTimestamp;
@end

