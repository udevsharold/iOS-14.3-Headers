/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {

	unsigned _itemType;
	unsigned _oldestRecordAgeInDays;
	NSMutableArray* _records;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) unsigned itemType;                           //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasOldestRecordAgeInDays; 
@property (assign,nonatomic) unsigned oldestRecordAgeInDays;              //@synthesize oldestRecordAgeInDays=_oldestRecordAgeInDays - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                    //@synthesize records=_records - In the implementation block
+(Class)recordsType;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)records;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)addRecords:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)setItemType:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasItemType;
-(void)setHasItemType:(BOOL)arg1 ;
-(unsigned)itemType;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearRecords;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)setOldestRecordAgeInDays:(unsigned)arg1 ;
-(void)setHasOldestRecordAgeInDays:(BOOL)arg1 ;
-(BOOL)hasOldestRecordAgeInDays;
-(unsigned)oldestRecordAgeInDays;
@end
