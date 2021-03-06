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

@class PBDataReader, NSMutableArray;

@interface GEOLPRValueMapping : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _mappedValues;
	NSMutableArray* _timeConditions;
	NSMutableArray* _values;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_mappedValues : 1;
		unsigned read_timeConditions : 1;
		unsigned read_values : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * values; 
@property (nonatomic,retain) NSMutableArray * mappedValues; 
@property (nonatomic,retain) NSMutableArray * timeConditions; 
+(Class)valueType;
+(Class)mappedValueType;
+(Class)timeConditionsType;
+(BOOL)isValid:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(void)clearValues;
-(unsigned long long)valuesCount;
-(void)addValue:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)mappedValues;
-(void)addMappedValue:(id)arg1 ;
-(void)addTimeConditions:(id)arg1 ;
-(unsigned long long)mappedValuesCount;
-(void)clearMappedValues;
-(id)mappedValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeConditionsCount;
-(void)clearTimeConditions;
-(id)timeConditionsAtIndex:(unsigned long long)arg1 ;
-(void)setMappedValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeConditions;
-(void)setTimeConditions:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

