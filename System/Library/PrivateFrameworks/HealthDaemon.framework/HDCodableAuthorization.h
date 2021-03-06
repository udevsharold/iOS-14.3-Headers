/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableAuthorization : PBCodable <NSCopying> {

	long long _authorizationMode;
	long long _authorizationRequest;
	long long _authorizationStatus;
	double _modificationDate;
	long long _modificationEpoch;
	long long _objectType;
	SCD_Struct_HD23 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;                        //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationRequest; 
@property (assign,nonatomic) long long authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationEpoch; 
@property (assign,nonatomic) long long modificationEpoch;                 //@synthesize modificationEpoch=_modificationEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationMode; 
@property (assign,nonatomic) long long authorizationMode;                 //@synthesize authorizationMode=_authorizationMode - In the implementation block
-(void)setModificationDate:(double)arg1 ;
-(double)modificationDate;
-(long long)authorizationStatus;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAuthorizationRequest:(long long)arg1 ;
-(long long)_authorizationRequest;
-(BOOL)readFrom:(id)arg1 ;
-(long long)_authorizationStatus;
-(long long)authorizationMode;
-(unsigned long long)hash;
-(void)setObjectType:(long long)arg1 ;
-(BOOL)hasObjectType;
-(void)setHasObjectType:(BOOL)arg1 ;
-(long long)_dataTypeCode;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)_modificationDate;
-(BOOL)hasModificationDate;
-(long long)authorizationRequest;
-(void)writeTo:(id)arg1 ;
-(long long)objectType;
-(void)setAuthorizationMode:(long long)arg1 ;
-(long long)_authorizationMode;
-(void)_setModificationDate:(id)arg1 ;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
-(void)setHasAuthorizationRequest:(BOOL)arg1 ;
-(BOOL)hasAuthorizationRequest;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(void)setModificationEpoch:(long long)arg1 ;
-(void)setHasModificationEpoch:(BOOL)arg1 ;
-(BOOL)hasModificationEpoch;
-(void)setHasAuthorizationMode:(BOOL)arg1 ;
-(BOOL)hasAuthorizationMode;
-(long long)modificationEpoch;
-(void)_setDataTypeCodeWithObjectType:(id)arg1 ;
-(void)_setAuthorizationStatusWithNumber:(id)arg1 ;
-(void)_setAuthorizationRequestWithNumber:(id)arg1 ;
-(void)_setAuthorizationModeWithNumber:(id)arg1 ;
@end

