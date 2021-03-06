/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying> {

	NSData* _encryptedPayload;
	NSData* _ephemeralPubKey;
	NSData* _keyValidator;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * encryptedPayload;              //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,retain) NSData * ephemeralPubKey;               //@synthesize ephemeralPubKey=_ephemeralPubKey - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyValidator; 
@property (nonatomic,retain) NSData * keyValidator;                  //@synthesize keyValidator=_keyValidator - In the implementation block
-(NSData *)signature;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)encryptedPayload;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSignature:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setEphemeralPubKey:(NSData *)arg1 ;
-(void)setKeyValidator:(NSData *)arg1 ;
-(NSData *)ephemeralPubKey;
-(NSData *)keyValidator;
-(BOOL)hasKeyValidator;
@end

