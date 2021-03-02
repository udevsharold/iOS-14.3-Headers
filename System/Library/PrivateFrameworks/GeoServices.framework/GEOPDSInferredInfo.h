/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDSInferredValue, NSMutableArray;

@interface GEOPDSInferredInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDSInferredValue* _inferredValue;
	NSMutableArray* _operands;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _inferredType;
	int _operator;
	struct {
		unsigned has_inferredType : 1;
		unsigned has_operator : 1;
		unsigned read_unknownFields : 1;
		unsigned read_inferredValue : 1;
		unsigned read_operands : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasInferredType; 
@property (assign,nonatomic) int inferredType; 
@property (nonatomic,readonly) BOOL hasInferredValue; 
@property (nonatomic,retain) GEOPDSInferredValue * inferredValue; 
@property (assign,nonatomic) BOOL hasOperator; 
@property (assign,nonatomic) int operator; 
@property (nonatomic,retain) NSMutableArray * operands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)operandType;
-(int)operator;
-(void)setOperator:(int)arg1 ;
-(id)init;
-(BOOL)hasOperator;
-(GEOPDSInferredValue *)inferredValue;
-(void)setInferredType:(int)arg1 ;
-(void)setInferredValue:(GEOPDSInferredValue *)arg1 ;
-(int)inferredType;
-(void)setHasInferredType:(BOOL)arg1 ;
-(BOOL)hasInferredType;
-(id)inferredTypeAsString:(int)arg1 ;
-(BOOL)hasInferredValue;
-(int)StringAsInferredType:(id)arg1 ;
-(void)setHasOperator:(BOOL)arg1 ;
-(id)operatorAsString:(int)arg1 ;
-(int)StringAsOperator:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)operands;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addOperand:(id)arg1 ;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
