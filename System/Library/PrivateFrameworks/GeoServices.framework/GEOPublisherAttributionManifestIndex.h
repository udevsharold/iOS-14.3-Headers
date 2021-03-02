/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _publisherAttributionFiles;
	NSMutableDictionary* _publisherToFileIndex;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * publisherAttributionFiles; 
@property (nonatomic,retain) NSMutableDictionary * publisherToFileIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)publisherToFileIndexType;
+(Class)publisherAttributionFilesType;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)publisherAttributionFiles;
-(void)addPublisherAttributionFiles:(id)arg1 ;
-(unsigned long long)publisherAttributionFilesCount;
-(void)clearPublisherAttributionFiles;
-(id)publisherAttributionFilesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)publisherToFileIndexCount;
-(void)clearPublisherToFileIndex;
-(void)setPublisherAttributionFiles:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)publisherToFileIndex;
-(void)setPublisherToFileIndex:(NSMutableDictionary *)arg1 ;
-(void)setPublisherToFileIndexValue:(unsigned)arg1 forKey:(id)arg2 ;
-(unsigned)publisherToFileIndexForKey:(id)arg1 ;
-(void)enumeratePublisherToFileIndexUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
