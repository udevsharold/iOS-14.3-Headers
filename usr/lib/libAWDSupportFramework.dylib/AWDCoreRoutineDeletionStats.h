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

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deleteType;
	NSMutableArray* _groups;
	BOOL _syncEnabled;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                          //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteType; 
@property (assign,nonatomic) unsigned deleteType;                       //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                   //@synthesize groups=_groups - In the implementation block
+(Class)groupsType;
-(NSMutableArray *)groups;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)syncEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(unsigned)deleteType;
-(void)setDeleteType:(unsigned)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(void)addGroups:(id)arg1 ;
-(unsigned long long)groupsCount;
-(void)clearGroups;
-(id)groupsAtIndex:(unsigned long long)arg1 ;
@end

