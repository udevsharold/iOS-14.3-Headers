/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL canAddPhotosLocally; 
@property (nonatomic,readonly) BOOL canShowPhotosLocally; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(BOOL)shouldSuppressPhotoAttribution;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(BOOL)canAddPhotosLocally;
-(BOOL)canShowPhotosLocally;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(BOOL)supportsReportingIssue;
-(NSArray *)addPhotoURLs;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
@end
