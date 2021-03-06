/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {

	NSMutableArray* _filters;
	int _queryOperator;
	NSMutableArray* _sorts;
	NSMutableArray* _types;
	BOOL _distinct;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,retain) NSMutableArray * types;                //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * sorts;                //@synthesize sorts=_sorts - In the implementation block
@property (assign,nonatomic) BOOL hasDistinct; 
@property (assign,nonatomic) BOOL distinct;                         //@synthesize distinct=_distinct - In the implementation block
@property (assign,nonatomic) BOOL hasQueryOperator; 
@property (assign,nonatomic) int queryOperator;                     //@synthesize queryOperator=_queryOperator - In the implementation block
+(Class)typesType;
+(Class)filtersType;
+(Class)sortsType;
-(void)setSorts:(NSMutableArray *)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)setHasDistinct:(BOOL)arg1 ;
-(id)typesAtIndex:(unsigned long long)arg1 ;
-(void)clearFilters;
-(int)queryOperator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addSorts:(id)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearSorts;
-(void)setTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)types;
-(BOOL)readFrom:(id)arg1 ;
-(id)sortsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasDistinct;
-(NSMutableArray *)filters;
-(void)copyTo:(id)arg1 ;
-(void)setHasQueryOperator:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)distinct;
-(void)setQueryOperator:(int)arg1 ;
-(BOOL)hasQueryOperator;
-(NSMutableArray *)sorts;
-(unsigned long long)sortsCount;
-(void)setDistinct:(BOOL)arg1 ;
-(void)clearTypes;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)typesCount;
-(void)addTypes:(id)arg1 ;
-(id)queryOperatorAsString:(int)arg1 ;
-(int)StringAsQueryOperator:(id)arg1 ;
@end

