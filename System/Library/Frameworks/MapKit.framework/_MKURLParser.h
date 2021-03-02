/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEOMapURLParser, NSString, GEOUserSessionEntity, MKMapCamera, GEOURLCollectionStorage, GEOURLExtraStorage, GEOMuninViewState;

@interface _MKURLParser : NSObject {

	GEOMapURLParser* parser;

}

@property (nonatomic,readonly) unsigned long long mapType; 
@property (nonatomic,readonly) unsigned long long transportType; 
@property (nonatomic,readonly) BOOL trackingModeSpecified; 
@property (nonatomic,readonly) long long trackingMode; 
@property (nonatomic,readonly) BOOL exactPositionSpecified; 
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) CGSize span; 
@property (nonatomic,readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) NSString * label; 
@property (nonatomic,readonly) CLLocationCoordinate2D searchCoordinate; 
@property (nonatomic,readonly) SCD_Struct_MK9 searchRegion; 
@property (nonatomic,readonly) int searchProviderID; 
@property (nonatomic,readonly) unsigned long long searchUID; 
@property (nonatomic,readonly) NSString * contentProvider; 
@property (nonatomic,readonly) NSString * contentProviderID; 
@property (nonatomic,readonly) NSString * abRecordID; 
@property (nonatomic,readonly) NSString * abAddressID; 
@property (nonatomic,readonly) NSString * cnContactIdentifier; 
@property (nonatomic,readonly) NSString * cnAddressIdentifier; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) double tilt; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) MKMapCamera * mapCamera; 
@property (nonatomic,readonly) unsigned long long lineMUID; 
@property (copy,readonly) NSString * lineName; 
@property (nonatomic,readonly) long long favoritesType; 
@property (nonatomic,readonly) BOOL tester; 
@property (nonatomic,readonly) GEOURLCollectionStorage * collectionStorage; 
@property (nonatomic,readonly) GEOURLExtraStorage * extraStorage; 
@property (nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (readonly) BOOL showCarDestinations; 
@property (nonatomic,readonly) unsigned long long curatedCollectionMUID; 
@property (nonatomic,readonly) unsigned long long publisherMUID; 
@property (readonly) BOOL showAllCuratedCollections; 
+(BOOL)isAppleMapsGuidesURL:(id)arg1 ;
+(BOOL)isValidMapURL:(id)arg1 ;
-(NSString *)addressString;
-(CGSize)span;
-(double)tilt;
-(double)roll;
-(double)rotation;
-(double)altitude;
-(CLLocationCoordinate2D)centerCoordinate;
-(BOOL)tester;
-(float)zoomLevel;
-(unsigned long long)transportType;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)mapType;
-(MKMapCamera *)mapCamera;
-(NSString *)searchQuery;
-(unsigned long long)lineMUID;
-(NSString *)lineName;
-(NSString *)contentProvider;
-(unsigned long long)searchUID;
-(NSString *)abRecordID;
-(SCD_Struct_MK9)searchRegion;
-(long long)trackingMode;
-(NSString *)abAddressID;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(long long)favoritesType;
-(BOOL)trackingModeSpecified;
-(BOOL)exactPositionSpecified;
-(NSString *)directionsSourceAddressString;
-(GEOURLExtraStorage *)extraStorage;
-(NSString *)directionsDestinationAddressString;
-(int)searchProviderID;
-(NSString *)contentProviderID;
-(NSString *)cnContactIdentifier;
-(NSString *)cnAddressIdentifier;
-(GEOUserSessionEntity *)userSessionEntity;
-(GEOURLCollectionStorage *)collectionStorage;
-(GEOMuninViewState *)muninViewState;
-(unsigned long long)publisherMUID;
-(BOOL)showCarDestinations;
-(unsigned long long)curatedCollectionMUID;
-(BOOL)showAllCuratedCollections;
-(CLLocationCoordinate2D)searchCoordinate;
-(NSString *)label;
@end
