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

@class PBDataReader, NSMutableArray, GEOPDOrientedBoundingBox;

@interface GEOPDStorefrontFace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _features;
	GEOPDOrientedBoundingBox* _geometry;
	unsigned long long _groupId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_groupId : 1;
		unsigned read_features : 1;
		unsigned read_geometry : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGeometry; 
@property (nonatomic,retain) GEOPDOrientedBoundingBox * geometry; 
@property (nonatomic,retain) NSMutableArray * features; 
@property (assign,nonatomic) BOOL hasGroupId; 
@property (assign,nonatomic) unsigned long long groupId; 
+(Class)featureType;
+(BOOL)isValid:(id)arg1 ;
-(GEOPDOrientedBoundingBox *)geometry;
-(void)setGeometry:(GEOPDOrientedBoundingBox *)arg1 ;
-(NSMutableArray *)features;
-(id)init;
-(BOOL)hasGeometry;
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
-(BOOL)hasGroupId;
-(void)addFeature:(id)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(void)setHasGroupId:(BOOL)arg1 ;
-(unsigned long long)groupId;
-(void)setGroupId:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setFeatures:(NSMutableArray *)arg1 ;
@end

