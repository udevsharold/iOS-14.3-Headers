/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {

	NSString* _manifestHash;
	int _status;
	NSData* _thumbnailImage;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,retain) NSData * thumbnailImage;               //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;               //@synthesize manifestHash=_manifestHash - In the implementation block
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)thumbnailImage;
-(int)status;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasManifestHash;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(NSString *)manifestHash;
-(void)setStatus:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasThumbnailImage;
@end

