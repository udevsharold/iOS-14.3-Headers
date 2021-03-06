/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying> {

	NSString* _assetVersion;
	NSMutableArray* _experimentalGroups;
	NSMutableArray* _records;
	BOOL _hasMusicSubscription;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,retain) NSMutableArray * records;                         //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL hasHasMusicSubscription; 
@property (assign,nonatomic) BOOL hasMusicSubscription;                        //@synthesize hasMusicSubscription=_hasMusicSubscription - In the implementation block
@property (nonatomic,retain) NSMutableArray * experimentalGroups;              //@synthesize experimentalGroups=_experimentalGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                          //@synthesize assetVersion=_assetVersion - In the implementation block
+(Class)recordsType;
+(Class)experimentalGroupsType;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)records;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)addRecords:(id)arg1 ;
-(NSString *)assetVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearRecords;
-(void)setAssetVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearExperimentalGroups;
-(void)addExperimentalGroups:(id)arg1 ;
-(unsigned long long)experimentalGroupsCount;
-(id)experimentalGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAssetVersion;
-(NSMutableArray *)experimentalGroups;
-(void)setExperimentalGroups:(NSMutableArray *)arg1 ;
-(void)setHasMusicSubscription:(BOOL)arg1 ;
-(void)setHasHasMusicSubscription:(BOOL)arg1 ;
-(BOOL)hasHasMusicSubscription;
-(BOOL)hasMusicSubscription;
@end

