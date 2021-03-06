/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {

	NSData* _content;
	int _contentType;
	int _contentTypeMinorVersion;
	int _contentTypePatchVersion;
	int _contentTypeVersion;
	NSData* _identifier;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) int contentTypeVersion;                       //@synthesize contentTypeVersion=_contentTypeVersion - In the implementation block
@property (assign,nonatomic) int contentType;                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * content;                             //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypeMinorVersion; 
@property (assign,nonatomic) int contentTypeMinorVersion;                  //@synthesize contentTypeMinorVersion=_contentTypeMinorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypePatchVersion; 
@property (assign,nonatomic) int contentTypePatchVersion;                  //@synthesize contentTypePatchVersion=_contentTypePatchVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;                          //@synthesize identifier=_identifier - In the implementation block
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
-(int)contentTypePatchVersion;
-(BOOL)hasIdentifier;
-(void)setContentTypeMinorVersion:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContentType:(int)arg1 ;
-(int)contentType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasContentTypeMinorVersion;
-(int)contentTypeVersion;
-(NSData *)identifier;
-(id)description;
-(void)setHasContentTypeMinorVersion:(BOOL)arg1 ;
-(void)setHasContentTypePatchVersion:(BOOL)arg1 ;
-(void)setContentTypePatchVersion:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasContentTypePatchVersion;
-(void)setContentTypeVersion:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)contentTypeMinorVersion;
@end

