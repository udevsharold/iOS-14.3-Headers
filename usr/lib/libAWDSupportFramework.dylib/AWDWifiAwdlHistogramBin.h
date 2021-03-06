/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWifiAwdlHistogramBin : PBCodable <NSCopying> {

	double _binEnd;
	double _binStart;
	double _value;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) double binStart;               //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) double binEnd;                 //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
-(double)value;
-(void)setHasBinStart:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBinStart:(double)arg1 ;
-(double)binStart;
-(void)setBinEnd:(double)arg1 ;
-(double)binEnd;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBinEnd;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(BOOL)hasBinStart;
-(void)writeTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
@end

