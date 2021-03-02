/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {

	long long _amount;
	NSString* _detail;
	NSString* _identifier;
	NSString* _label;
	unsigned _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) long long amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
-(BOOL)hasLabel;
-(void)setDetail:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(BOOL)hasAmount;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasAmount:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(long long)amount;
-(NSString *)identifier;
-(id)description;
-(unsigned)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDetail;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)hasType;
-(void)setAmount:(long long)arg1 ;
-(NSString *)label;
-(NSString *)detail;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end
