/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrator.h>

@class GEOResourceManifestConfiguration, geo_isolater, NSMutableArray, NSString;

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	geo_isolater* _isolater;
	NSMutableArray* _runningTasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4 ;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7 ;
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2 ;
-(void)_addRunningTask:(id)arg1 ;
-(void)_removeRunningTask:(id)arg1 ;
@end
