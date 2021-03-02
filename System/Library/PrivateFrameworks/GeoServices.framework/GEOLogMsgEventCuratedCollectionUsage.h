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

@class GEOTouristInfo;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {

	double _collectionFirstViewedDate;
	double _collectionLastViewedDate;
	unsigned long long _collectionMuid;
	GEOTouristInfo* _touristInfo;
	unsigned _viewsToday;
	struct {
		unsigned has_collectionFirstViewedDate : 1;
		unsigned has_collectionLastViewedDate : 1;
		unsigned has_collectionMuid : 1;
		unsigned has_viewsToday : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCollectionMuid; 
@property (assign,nonatomic) unsigned long long collectionMuid; 
@property (assign,nonatomic) BOOL hasViewsToday; 
@property (assign,nonatomic) unsigned viewsToday; 
@property (assign,nonatomic) BOOL hasCollectionFirstViewedDate; 
@property (assign,nonatomic) double collectionFirstViewedDate; 
@property (assign,nonatomic) BOOL hasCollectionLastViewedDate; 
@property (assign,nonatomic) double collectionLastViewedDate; 
@property (nonatomic,readonly) BOOL hasTouristInfo; 
@property (nonatomic,retain) GEOTouristInfo * touristInfo; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasTouristInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCollectionMuid:(unsigned long long)arg1 ;
-(void)setViewsToday:(unsigned)arg1 ;
-(void)setCollectionFirstViewedDate:(double)arg1 ;
-(void)setCollectionLastViewedDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTouristInfo:(GEOTouristInfo *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned)viewsToday;
-(unsigned long long)collectionMuid;
-(BOOL)hasCollectionMuid;
-(BOOL)hasViewsToday;
-(void)setHasCollectionMuid:(BOOL)arg1 ;
-(void)setHasViewsToday:(BOOL)arg1 ;
-(double)collectionFirstViewedDate;
-(double)collectionLastViewedDate;
-(void)setHasCollectionFirstViewedDate:(BOOL)arg1 ;
-(BOOL)hasCollectionFirstViewedDate;
-(void)setHasCollectionLastViewedDate:(BOOL)arg1 ;
-(BOOL)hasCollectionLastViewedDate;
-(void)writeTo:(id)arg1 ;
-(GEOTouristInfo *)touristInfo;
@end
