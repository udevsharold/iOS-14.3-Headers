/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSDate, NSData, PLRevGeoPlaceAnnotation, PLRevGeoLocationInfo, NSString;


@protocol PLMomentAssetData <PLMomentRefreshable,PLRegionsClusteringItem>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain,readonly) NSDate * localDateCreated; 
@property (nonatomic,readonly) int inferredTimeZoneOffset; 
@property (nonatomic,readonly) double gpsHorizontalAccuracy; 
@property (nonatomic,retain) id<PLMomentData> moment; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * shiftedLocation; 
@property (assign,nonatomic) BOOL shiftedLocationIsValid; 
@property (nonatomic,retain,readonly) PLRevGeoPlaceAnnotation * placeAnnotation; 
@property (nonatomic,retain,readonly) PLRevGeoLocationInfo * locationInfo; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingSummaryAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingFirstAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> yearHighlightBeingKeyAsset; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) double curationScore; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isScreenRecording; 
@property (nonatomic,readonly) NSString * avalancheUUID; 
@property (nonatomic,readonly) BOOL isInterestingForAvalanche; 
@property (nonatomic,readonly) BOOL isAvalancheStackPhoto; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) short kind; 
@property (assign,nonatomic) short kindSubtype; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain,readonly) NSString * cloudAssetGUID; 
@optional
-(void)setModificationDate:(id)arg1;
-(NSDate *)modificationDate;
-(void)setWidth:(long long)arg1;
-(void)setKindSubtype:(short)arg1;
-(long long)width;
-(void)setHeight:(long long)arg1;
-(long long)height;
-(void)setDuration:(double)arg1;
-(NSString *)uuid;
-(short)kindSubtype;
-(void)setKind:(short)arg1;
-(NSString *)cloudAssetGUID;
-(double)duration;
-(short)kind;

@required
-(CLLocation *)shiftedLocation;
-(void)setShiftedLocation:(id)arg1;
-(NSData *)reverseLocationData;
-(void)setFavorite:(BOOL)arg1;
-(double)curationScore;
-(void)setCurationScore:(double)arg1;
-(void)setReverseLocationData:(id)arg1;
-(BOOL)reverseLocationDataIsValid;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(BOOL)isPhoto;
-(BOOL)isDeleted;
-(double)gpsHorizontalAccuracy;
-(void)setShiftedLocationIsValid:(BOOL)arg1;
-(id<PLMomentData>)moment;
-(id<PLPhotosHighlightData>)highlightBeingKeyAsset;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingKeyAsset;
-(CLLocation *)location;
-(void)setDateCreated:(id)arg1;
-(NSString *)avalancheUUID;
-(PLRevGeoLocationInfo *)locationInfo;
-(BOOL)isVideo;
-(id)assetComparisonSortDescriptors;
-(id)globalUUID;
-(void)setMoment:(id)arg1;
-(void)setLocation:(id)arg1;
-(long long)compareToAsset:(id)arg1;
-(BOOL)visibilityStateIsEqualToState:(short)arg1;
-(BOOL)shiftedLocationIsValid;
-(id<PLPhotosHighlightData>)highlightBeingAssets;
-(void)setHighlightBeingAssets:(id)arg1;
-(void)setHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingSummaryAssets;
-(void)setHighlightBeingSummaryAssets:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingExtendedAssets;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingAssets;
-(void)setHighlightBeingExtendedAssets:(id)arg1;
-(void)setDayGroupHighlightBeingAssets:(id)arg1;
-(void)setDayGroupHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingExtendedAssets;
-(void)setDayGroupHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingKeyAsset;
-(void)setMonthHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingFirstAsset;
-(void)setMonthHighlightBeingFirstAsset:(id)arg1;
-(id<PLPhotosHighlightData>)yearHighlightBeingKeyAsset;
-(void)setYearHighlightBeingKeyAsset:(id)arg1;
-(BOOL)isInterestingForAvalanche;
-(int)inferredTimeZoneOffset;
-(BOOL)isScreenRecording;
-(NSDate *)dateCreated;
-(BOOL)hasChanges;
-(NSDate *)localDateCreated;
-(BOOL)favorite;
-(BOOL)isAvalancheStackPhoto;
-(PLRevGeoPlaceAnnotation *)placeAnnotation;
-(NSObject*<NSCopying>)uniqueObjectID;

@end

