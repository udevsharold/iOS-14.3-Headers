/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableClinicalContact : PBCodable <NSCopying> {

	NSString* _name;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumber;
	NSString* _phoneNumberContactIdentifier;
	NSString* _phoneNumberLabel;
	NSString* _relationship;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasNameContactIdentifier; 
@property (nonatomic,retain) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumberContactIdentifier; 
@property (nonatomic,retain) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumberLabel; 
@property (nonatomic,retain) NSString * phoneNumberLabel;                          //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationship; 
@property (nonatomic,retain) NSString * relationship;                              //@synthesize relationship=_relationship - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)relationship;
-(void)setRelationship:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)phoneNumberContactIdentifier;
-(unsigned long long)hash;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)description;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberLabel:(NSString *)arg1 ;
-(NSString *)phoneNumberLabel;
-(BOOL)hasRelationship;
-(BOOL)hasName;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)name;
-(BOOL)hasPhoneNumber;
-(NSString *)nameContactIdentifier;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasNameContactIdentifier;
-(BOOL)hasPhoneNumberContactIdentifier;
-(BOOL)hasPhoneNumberLabel;
@end
