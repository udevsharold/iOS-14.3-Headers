/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOTileLoader;

@interface GEOMapFeatureTileFinder : NSObject {

	unsigned long long _zoomLevel;
	int _tileSize;
	int _tileScale;
	int _tileSetStyle;
	NSString* _tileLoaderClientIdentifier;
	GEOTileLoader* _tileLoader;

}
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5 ;
-(id)initWithTileLoader:(id)arg1 ;
-(id)findTilesAround:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 allowNetwork:(BOOL)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 ;
-(id)_findTilesInList:(id)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_tileLoaderClientIdentifier;
-(void)cancel;
-(id)findTileWithKey:(GEOTileKey)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

