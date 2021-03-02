/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
@class GEOPDContainedPlace, NSArray;

@interface GEOMapItemContainedPlace : NSObject {

	GEOPDContainedPlace* _containedPlace;
	id<GEOMapItem> _parent;
	NSArray* _children;
	NSArray* _siblings;

}

@property (nonatomic,readonly) unsigned long long featureId; 
@property (nonatomic,readonly) unsigned long long parentFeatureId; 
@property (nonatomic,readonly) id<GEOMapItem> parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * siblings; 
-(id)init;
-(unsigned long long)featureId;
-(id<GEOMapItem>)parent;
-(NSArray *)children;
-(id)description;
-(NSArray *)siblings;
-(id)initWithContainedPlace:(id)arg1 ;
-(unsigned long long)parentFeatureId;
@end
