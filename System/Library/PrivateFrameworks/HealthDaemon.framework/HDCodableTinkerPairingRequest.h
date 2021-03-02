/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying> {

	long long _guardianDSID;
	NSString* _guardianFirstName;
	NSString* _guardianIcloudIdentifier;
	NSString* _guardianLastName;
	NSData* _profileIdentifier;
	NSString* _requestIdentifier;
	int _setupType;
	NSString* _tinkerFirstName;
	NSString* _tinkerLastName;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianIcloudIdentifier; 
@property (nonatomic,retain) NSString * guardianIcloudIdentifier;              //@synthesize guardianIcloudIdentifier=_guardianIcloudIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSetupType; 
@property (assign,nonatomic) int setupType;                                    //@synthesize setupType=_setupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianFirstName; 
@property (nonatomic,retain) NSString * guardianFirstName;                     //@synthesize guardianFirstName=_guardianFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianLastName; 
@property (nonatomic,retain) NSString * guardianLastName;                      //@synthesize guardianLastName=_guardianLastName - In the implementation block
@property (assign,nonatomic) BOOL hasGuardianDSID; 
@property (assign,nonatomic) long long guardianDSID;                           //@synthesize guardianDSID=_guardianDSID - In the implementation block
@property (nonatomic,readonly) BOOL hasProfileIdentifier; 
@property (nonatomic,retain) NSData * profileIdentifier;                       //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTinkerFirstName; 
@property (nonatomic,retain) NSString * tinkerFirstName;                       //@synthesize tinkerFirstName=_tinkerFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasTinkerLastName; 
@property (nonatomic,retain) NSString * tinkerLastName;                        //@synthesize tinkerLastName=_tinkerLastName - In the implementation block
-(void)setProfileIdentifier:(NSData *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)profileIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(int)setupType;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSetupType:(int)arg1 ;
-(long long)guardianDSID;
-(void)writeTo:(id)arg1 ;
-(void)setGuardianFirstName:(NSString *)arg1 ;
-(NSString *)guardianLastName;
-(void)setGuardianLastName:(NSString *)arg1 ;
-(void)setGuardianDSID:(long long)arg1 ;
-(NSString *)guardianFirstName;
-(BOOL)hasRequestIdentifier;
-(NSString *)guardianIcloudIdentifier;
-(NSString *)tinkerFirstName;
-(NSString *)tinkerLastName;
-(void)setGuardianIcloudIdentifier:(NSString *)arg1 ;
-(void)setTinkerFirstName:(NSString *)arg1 ;
-(void)setTinkerLastName:(NSString *)arg1 ;
-(BOOL)hasGuardianIcloudIdentifier;
-(void)setHasSetupType:(BOOL)arg1 ;
-(BOOL)hasSetupType;
-(id)setupTypeAsString:(int)arg1 ;
-(int)StringAsSetupType:(id)arg1 ;
-(BOOL)hasGuardianFirstName;
-(BOOL)hasGuardianLastName;
-(void)setHasGuardianDSID:(BOOL)arg1 ;
-(BOOL)hasGuardianDSID;
-(BOOL)hasProfileIdentifier;
-(BOOL)hasTinkerFirstName;
-(BOOL)hasTinkerLastName;
@end
