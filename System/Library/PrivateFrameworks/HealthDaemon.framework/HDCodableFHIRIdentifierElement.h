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

@class HDCodableMedicalCodingList, NSString;

@interface HDCodableFHIRIdentifierElement : PBCodable <NSCopying> {

	HDCodableMedicalCodingList* _typeCodings;
	NSString* _value;

}

@property (nonatomic,readonly) BOOL hasTypeCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * typeCodings;              //@synthesize typeCodings=_typeCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                                      //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(HDCodableMedicalCodingList *)typeCodings;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setTypeCodings:(HDCodableMedicalCodingList *)arg1 ;
-(BOOL)hasTypeCodings;
@end

