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

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying> {

	SCD_Struct_AW6* _indices;
	SCD_Struct_AW7* _values;
	unsigned long long _length;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) unsigned long long indicesCount; 
@property (nonatomic,readonly) unsigned long long* indices; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) float* values; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned long long length;                      //@synthesize length=_length - In the implementation block
+(id)sparseFloatVectorFromModelWeights:(id)arg1 ;
+(id)sparseFloatVectorFromSparseVector:(id)arg1 ;
-(float*)values;
-(void)clearValues;
-(unsigned long long*)indices;
-(unsigned long long)valuesCount;
-(void)setLength:(unsigned long long)arg1 ;
-(float)valueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addValues:(float)arg1 ;
-(float)valuesAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)hasLength;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasLength:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(void)addIndices:(unsigned long long)arg1 ;
-(unsigned long long)indicesAtIndex:(unsigned long long)arg1 ;
-(void)setIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setValues:(float*)arg1 count:(unsigned long long)arg2 ;
@end

