/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PETSchemaPETRawMessage : PBCodable {

	unsigned _type_id;
	NSData* _raw_bytes;
	NSString* _name;
	SCD_Struct_SI1 _has;
	BOOL _hasRaw_bytes;
	BOOL _hasName;

}

@property (assign,nonatomic) unsigned type_id;                 //@synthesize type_id=_type_id - In the implementation block
@property (assign,nonatomic) BOOL hasType_id; 
@property (nonatomic,copy) NSData * raw_bytes;                 //@synthesize raw_bytes=_raw_bytes - In the implementation block
@property (assign,nonatomic) BOOL hasRaw_bytes;                //@synthesize hasRaw_bytes=_hasRaw_bytes - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasName;                     //@synthesize hasName=_hasName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(void)setName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasName;
-(unsigned)type_id;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasName:(BOOL)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setType_id:(unsigned)arg1 ;
-(void)setRaw_bytes:(NSData *)arg1 ;
-(NSData *)raw_bytes;
-(BOOL)hasType_id;
-(void)setHasType_id:(BOOL)arg1 ;
-(BOOL)hasRaw_bytes;
-(void)setHasRaw_bytes:(BOOL)arg1 ;
@end
