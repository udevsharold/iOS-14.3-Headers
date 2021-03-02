/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _distToNextCheckpoints;
	SCD_Struct_GE17* _timeToNextCheckpoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_distToNextCheckpoints : 1;
		unsigned read_timeToNextCheckpoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long distToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* distToNextCheckpoints; 
@property (nonatomic,readonly) unsigned long long timeToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* timeToNextCheckpoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)addDistToNextCheckpoint:(unsigned)arg1 ;
-(void)addTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned long long)distToNextCheckpointsCount;
-(void)clearDistToNextCheckpoints;
-(unsigned)distToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeToNextCheckpointsCount;
-(void)clearTimeToNextCheckpoints;
-(unsigned)timeToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(unsigned*)distToNextCheckpoints;
-(void)setDistToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)timeToNextCheckpoints;
-(void)setTimeToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
