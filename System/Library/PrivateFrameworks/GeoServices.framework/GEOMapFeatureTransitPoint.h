/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureTransitStop, GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, NSString, NSArray;

@interface GEOMapFeatureTransitPoint : NSObject {

	GEOTransitNodeFeature* _feature;
	GEOCoarseLocationLatLng _coordinate;
	double _boundingRadius;
	SCD_Struct_GE36 _boundingRect;
	GEOCoarseLocationLatLng* _polygonPoints;
	unsigned long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) GEOTransitNodeFeature* feature; 
@property (nonatomic,readonly) GEOMapFeatureTransitStop * stop; 
@property (nonatomic,readonly) GEOMapFeatureTransitHall * hall; 
@property (nonatomic,readonly) GEOMapFeatureTransitStation * station; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;                  //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * internalSystemNames; 
@property (nonatomic,readonly) double boundingRadius;                               //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect;                        //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonPointsCount;               //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(GEOMapFeatureTransitHall *)hall;
-(NSString *)internalName;
-(void)dealloc;
-(GEOTileKey)tileKey;
-(GEOMapFeatureTransitStation *)station;
-(NSArray *)internalSystemNames;
-(void)updateWithGeometryFeature:(SCD_Struct_GE244*)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(id)description;
-(GEOTransitNodeFeature*)feature;
-(id)initWithFeature:(GEOTransitNodeFeature*)arg1 ;
-(unsigned long long)transitID;
-(double)boundingRadius;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(unsigned long long)polygonPointsCount;
-(SCD_Struct_GE36)boundingRect;
-(GEOMapFeatureTransitStop *)stop;
@end

