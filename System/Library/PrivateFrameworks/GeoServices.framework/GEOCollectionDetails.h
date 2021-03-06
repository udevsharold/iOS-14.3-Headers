/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOCollectionDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE92* _collectionIds;
	NSString* _collectionCategory;
	unsigned long long _targetId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _currentlySaved;
	struct {
		unsigned has_targetId : 1;
		unsigned has_currentlySaved : 1;
		unsigned read_collectionIds : 1;
		unsigned read_collectionCategory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long collectionIdsCount; 
@property (nonatomic,readonly) unsigned long long* collectionIds; 
@property (nonatomic,readonly) BOOL hasCollectionCategory; 
@property (nonatomic,retain) NSString * collectionCategory; 
@property (assign,nonatomic) BOOL hasTargetId; 
@property (assign,nonatomic) unsigned long long targetId; 
@property (assign,nonatomic) BOOL hasCurrentlySaved; 
@property (assign,nonatomic) BOOL currentlySaved; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)setCollectionCategory:(NSString *)arg1 ;
-(void)setCurrentlySaved:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)collectionIdsCount;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addCollectionId:(unsigned long long)arg1 ;
-(void)clearCollectionIds;
-(unsigned long long)collectionIdAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)targetId;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long*)collectionIds;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(NSString *)collectionCategory;
-(void)setTargetId:(unsigned long long)arg1 ;
-(void)setCollectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasCollectionCategory;
-(void)setHasTargetId:(BOOL)arg1 ;
-(BOOL)hasTargetId;
-(BOOL)currentlySaved;
-(void)setHasCurrentlySaved:(BOOL)arg1 ;
-(BOOL)hasCurrentlySaved;
-(void)writeTo:(id)arg1 ;
@end

