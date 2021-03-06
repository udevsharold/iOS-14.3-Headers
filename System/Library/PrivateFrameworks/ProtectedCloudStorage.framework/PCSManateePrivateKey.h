/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PCSManateePrivateKey : PBCodable <NSCopying> {

	NSData* _privateKey;
	NSData* _publicKeyInfo;

}

@property (nonatomic,readonly) BOOL hasPrivateKey; 
@property (nonatomic,retain) NSData * privateKey;                  //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKeyInfo; 
@property (nonatomic,retain) NSData * publicKeyInfo;               //@synthesize publicKeyInfo=_publicKeyInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSData *)privateKey;
-(void)setPrivateKey:(NSData *)arg1 ;
-(void)setPublicKeyInfo:(NSData *)arg1 ;
-(BOOL)hasPrivateKey;
-(NSData *)publicKeyInfo;
-(BOOL)hasPublicKeyInfo;
@end

