/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableHealthObject, NSString;

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableHealthObject* _object;
	SCD_Struct_HD12 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableHealthObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                          //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                              //@synthesize endDate=_endDate - In the implementation block
-(long long)dataType;
-(double)endDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(HDCodableHealthObject *)object;
-(unsigned long long)hash;
-(void)setObject:(HDCodableHealthObject *)arg1 ;
-(NSString *)description;
-(BOOL)hasDataType;
-(double)startDate;
-(void)setHasDataType:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(BOOL)hasObject;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)applyToObject:(id)arg1 ;
@end

