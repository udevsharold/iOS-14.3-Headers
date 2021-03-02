/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying> {

	long long _count;
	long long _dataTypeCode;
	double _endTime;
	long long _persistentID;
	long long _seriesIndex;
	long long _sourceID;
	double _startTime;
	double _value;
	NSData* _quantitySample;
	NSData* _uuid;
	SCD_Struct_HK23 _has;

}

@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) BOOL hasDataTypeCode; 
@property (assign,nonatomic) long long dataTypeCode;                //@synthesize dataTypeCode=_dataTypeCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasSourceID; 
@property (assign,nonatomic) long long sourceID;                    //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,nonatomic) BOOL hasSeriesIndex; 
@property (assign,nonatomic) long long seriesIndex;                 //@synthesize seriesIndex=_seriesIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantitySample; 
@property (nonatomic,retain) NSData * quantitySample;               //@synthesize quantitySample=_quantitySample - In the implementation block
-(void)setUuid:(NSData *)arg1 ;
-(double)endTime;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(double)value;
-(void)setCount:(long long)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(long long)sourceID;
-(void)setValue:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSourceID:(long long)arg1 ;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)hasEndTime;
-(void)setHasCount:(BOOL)arg1 ;
-(void)setHasEndTime:(BOOL)arg1 ;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasPersistentID;
-(void)setDataTypeCode:(long long)arg1 ;
-(void)setHasDataTypeCode:(BOOL)arg1 ;
-(BOOL)hasDataTypeCode;
-(void)setHasSourceID:(BOOL)arg1 ;
-(BOOL)hasSourceID;
-(void)setSeriesIndex:(long long)arg1 ;
-(void)setHasSeriesIndex:(BOOL)arg1 ;
-(BOOL)hasSeriesIndex;
-(long long)dataTypeCode;
-(void)setStartTime:(double)arg1 ;
-(NSData *)uuid;
-(id)description;
-(long long)persistentID;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)startTime;
-(BOOL)hasValue;
-(long long)count;
-(long long)seriesIndex;
-(BOOL)hasQuantitySample;
-(NSData *)quantitySample;
-(void)setQuantitySample:(NSData *)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
@end
