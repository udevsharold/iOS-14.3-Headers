/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;
#import <PlacesKit/PlacesKit-Structs.h>
@class PKExtendedTraitCollection, NSObject, NSString;

@interface PXPlacesSnapshotOptions : NSObject {

	BOOL _shouldSkipPlaceholder;
	BOOL _showsPointLabels;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _cacheDirectoryPath;
	double _visibleDistance;
	unsigned long long _snapshotMapType;
	CGSize _viewSize;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;                                //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate;              //@synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectoryPath;                                                      //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (assign,nonatomic) double visibleDistance;                                                             //@synthesize visibleDistance=_visibleDistance - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotMapType;                                                 //@synthesize snapshotMapType=_snapshotMapType - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                                    //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPlaceholder;                                                         //@synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL showsPointLabels;                                                              //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(CGSize)viewSize;
-(id)init;
-(unsigned long long)snapshotMapType;
-(double)visibleDistance;
-(NSString *)cacheDirectoryPath;
-(void)setCacheDirectoryPath:(NSString *)arg1 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)geotaggableInformationDelegate;
-(void)setVisibleDistance:(double)arg1 ;
-(void)setGeotaggableInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(BOOL)shouldSkipPlaceholder;
-(void)setSnapshotMapType:(unsigned long long)arg1 ;
-(id)description;
-(void)setShouldSkipPlaceholder:(BOOL)arg1 ;
-(BOOL)showsPointLabels;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setShowsPointLabels:(BOOL)arg1 ;
@end

