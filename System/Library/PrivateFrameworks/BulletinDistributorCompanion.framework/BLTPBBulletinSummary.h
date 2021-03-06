/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {

	unsigned _destinations;
	NSMutableArray* _keys;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) unsigned destinations;                       //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
+(Class)keyType;
-(void)setDestinations:(unsigned)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(NSString *)recordID;
-(NSMutableArray *)keys;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)publisherBulletinID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sectionID;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(id)description;
-(unsigned)destinations;
-(void)addKey:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(BOOL)hasRecordID;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPublisherBulletinID;
@end

