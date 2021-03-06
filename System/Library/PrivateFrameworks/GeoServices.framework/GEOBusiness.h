/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOBusiness : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _uID;
	NSString* _uRL;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _placeDataAmendments;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isClosed;
	struct {
		unsigned has_uID : 1;
		unsigned has_isClosed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_uRL : 1;
		unsigned read_attributeKeyValues : 1;
		unsigned read_attributions : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned read_localizedCategories : 1;
		unsigned read_mapsURL : 1;
		unsigned read_name : 1;
		unsigned read_openHours : 1;
		unsigned read_phoneticName : 1;
		unsigned read_photos : 1;
		unsigned read_placeDataAmendments : 1;
		unsigned read_ratings : 1;
		unsigned read_sources : 1;
		unsigned read_starRatings : 1;
		unsigned read_telephone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) unsigned long long uID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone; 
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL; 
@property (assign,nonatomic) BOOL hasIsClosed; 
@property (assign,nonatomic) BOOL isClosed; 
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL; 
@property (nonatomic,retain) NSMutableArray * ratings; 
@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * photos; 
@property (nonatomic,retain) NSMutableArray * attributeKeyValues; 
@property (nonatomic,retain) NSMutableArray * openHours; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * localizedCategories; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * sources; 
@property (nonatomic,retain) NSMutableArray * starRatings; 
@property (nonatomic,retain) NSMutableArray * placeDataAmendments; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sourceType;
+(Class)openHoursType;
+(Class)attributeKeyValueType;
+(Class)localizedCategoriesType;
+(Class)starRatingType;
+(Class)placeDataAmendmentType;
+(Class)photoType;
+(BOOL)isValid:(id)arg1 ;
+(Class)ratingType;
+(Class)attributionType;
+(Class)categoryType;
-(NSString *)telephone;
-(NSMutableArray *)attributeKeyValues;
-(void)addRating:(id)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(void)clearAttributions;
-(BOOL)hasCenter;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)photosCount;
-(GEOLatLng *)center;
-(NSString *)phoneticName;
-(void)addPlaceDataAmendment:(id)arg1 ;
-(unsigned long long)uID;
-(BOOL)hasTelephone;
-(NSMutableArray *)photos;
-(void)setMapsURL:(NSString *)arg1 ;
-(unsigned long long)placeDataAmendmentsCount;
-(unsigned long long)attributionsCount;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)setUID:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)sourcesCount;
-(NSMutableArray *)attributions;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(NSString *)uRL;
-(NSString *)mapsURL;
-(void)addCategory:(id)arg1 ;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(NSMutableArray *)starRatings;
-(void)setIsClosed:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)placeDataAmendmentAtIndex:(unsigned long long)arg1 ;
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
-(void)setSources:(NSMutableArray *)arg1 ;
-(void)addLocalizedCategories:(id)arg1 ;
-(void)clearAttributeKeyValues;
-(BOOL)isClosed;
-(void)setPlaceDataAmendments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)openHours;
-(void)setURL:(NSString *)arg1 ;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasURL;
-(unsigned long long)attributeKeyValuesCount;
-(void)addPhoto:(id)arg1 ;
-(NSMutableArray *)localizedCategories;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)sources;
-(void)addStarRating:(id)arg1 ;
-(unsigned long long)ratingsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPhoneticName:(NSString *)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(void)clearOpenHours;
-(NSMutableArray *)categorys;
-(void)readAll:(BOOL)arg1 ;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)clearPlaceDataAmendments;
-(void)addAttributeKeyValue:(id)arg1 ;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(void)clearSources;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(BOOL)hasIsClosed;
-(id)description;
-(void)addOpenHours:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)placeDataAmendments;
-(BOOL)hasName;
-(void)copyTo:(id)arg1 ;
-(void)clearLocalizedCategories;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(void)addSource:(id)arg1 ;
-(void)clearRatings;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasUID;
-(void)clearPhotos;
-(id)initWithData:(id)arg1 ;
-(NSString *)name;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)starRatingsCount;
-(id)jsonRepresentation;
-(void)clearCategorys;
-(BOOL)hasPhoneticName;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)openHoursCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6 ;
-(BOOL)hasMapsURL;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIsClosed:(BOOL)arg1 ;
-(NSMutableArray *)ratings;
-(unsigned long long)categorysCount;
-(void)clearStarRatings;
@end

