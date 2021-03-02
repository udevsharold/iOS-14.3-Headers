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

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {

	unsigned long long _batchSize;
	NSMutableArray* _perLabelSupports;
	float _support;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasSupport; 
@property (assign,nonatomic) float support;                                  //@synthesize support=_support - In the implementation block
@property (assign,nonatomic) BOOL hasBatchSize; 
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * perLabelSupports;              //@synthesize perLabelSupports=_perLabelSupports - In the implementation block
+(Class)perLabelSupportType;
+(id)statsWithSize:(unsigned long long)arg1 support:(float)arg2 ;
+(id)statsWithPerLabelCounts:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSupport:(float)arg1 ;
-(unsigned long long)hash;
-(float)support;
-(id)description;
-(id)toDictionary;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)batchSize;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSupport:(BOOL)arg1 ;
-(BOOL)hasSupport;
-(void)setHasBatchSize:(BOOL)arg1 ;
-(BOOL)hasBatchSize;
-(void)clearPerLabelSupports;
-(void)addPerLabelSupport:(id)arg1 ;
-(unsigned long long)perLabelSupportsCount;
-(id)perLabelSupportAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)perLabelSupports;
-(void)setPerLabelSupports:(NSMutableArray *)arg1 ;
-(id)combineWithStats:(id)arg1 ;
-(float)supportForLabel:(unsigned long long)arg1 ;
@end
