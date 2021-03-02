/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class PETSchemaPETAggregationKey, PETSchemaPETDistribution, NSData;

@interface PETSchemaPETAggregatedMessage : PBCodable {

	PETSchemaPETAggregationKey* _key;
	unsigned _count;
	PETSchemaPETDistribution* _distribution;
	SCD_Struct_SI1 _has;
	BOOL _hasKey;
	BOOL _hasDistribution;

}

@property (nonatomic,retain) PETSchemaPETAggregationKey * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasKey;                                          //@synthesize hasKey=_hasKey - In the implementation block
@property (assign,nonatomic) unsigned count;                                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (nonatomic,retain) PETSchemaPETDistribution * distribution;              //@synthesize distribution=_distribution - In the implementation block
@property (assign,nonatomic) BOOL hasDistribution;                                 //@synthesize hasDistribution=_hasDistribution - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setDistribution:(PETSchemaPETDistribution *)arg1 ;
-(PETSchemaPETAggregationKey *)key;
-(NSData *)jsonData;
-(void)setKey:(PETSchemaPETAggregationKey *)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasDistribution;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(void)setHasCount:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(PETSchemaPETDistribution *)distribution;
-(void)setHasKey:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDistribution:(BOOL)arg1 ;
@end
