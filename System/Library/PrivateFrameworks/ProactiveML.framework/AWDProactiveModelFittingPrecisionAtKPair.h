/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {

	unsigned long long _k;
	float _precision;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasPrecision; 
@property (assign,nonatomic) float precision;                     //@synthesize precision=_precision - In the implementation block
-(unsigned long long)k;
-(BOOL)hasK;
-(float)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPrecision:(float)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setK:(unsigned long long)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(void)setHasPrecision:(BOOL)arg1 ;
-(BOOL)hasPrecision;
@end

