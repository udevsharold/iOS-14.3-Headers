/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;
@class NSHashTable, GEOActiveTileGroup, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, geo_isolater, GEOResourceManifestConfiguration, NSObject, NSString;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	os_unfair_lock_s _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	NSSet* _allRegionalResourceNames;
	BOOL _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	os_unfair_recursive_lock_s _tileGroupObserversLock;
	os_unfair_lock_s _closedCountLock;
	long long _closedCount;
	BOOL _constantlyChangeTileGroup;
	double _constantlyChangeTileGroupInterval;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	geo_isolater* _networkActivityHandlersIsolation;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	os_unfair_lock_s _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;
	NSObject*<OS_dispatch_source> _cachedResourceInfoPurgeTimer;
	unsigned long long _stateCaptureHandle;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTileGroup; 
@property (nonatomic,readonly) BOOL hasLoadedActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)disableServerConnection;
+(id)modernManager;
+(void)setHiDPI:(BOOL)arg1 ;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(void)useRemoteProxy;
+(void)configureInProcessSingletonWithConfiguration:(id)arg1 ;
+(void)useLocalProxy;
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernManagerNoCreate;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
-(id<GEOResourceManifestServerProxy>)serverProxy;
-(void)removeDevResources;
-(GEOActiveTileGroup *)activeTileGroup;
-(id)allResourceNames;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(id)pathForResourceWithName:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(unsigned)mapMatchingZoomLevel;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)activateResourceScale:(int)arg1 ;
-(void)closeServerConnection:(BOOL)arg1 ;
-(id)init;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(void)devResourcesFolderDidChange;
-(id)detailedDescription;
-(id)authToken;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)dealloc;
-(BOOL)hasResourceManifest;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(void)activateResourceScenario:(int)arg1 ;
-(BOOL)hasActiveTileGroup;
-(id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)setConstantlyChangeTileGroup:(BOOL)arg1 ;
-(void)setConstantlyChangeTileGroupInterval:(double)arg1 ;
-(void)startObservingDevResources;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)stopObservingDevResources;
-(id)updateProgress;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(void)_notifyObserversOfResourcesChange;
-(void)removeServerProxyObserver:(id)arg1 ;
-(id)_loadActiveTileGroupIfNecessary:(BOOL)arg1 ;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)fakeTileGroupChange;
-(BOOL)isMuninEnabled;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(void)closeServerConnection;
-(void)removeTileGroupObserver:(id)arg1 ;
-(void)resetActiveTileGroup;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const GEOTileKey*)arg2 overrideLocale:(id)arg3 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(BOOL)hasLoadedActiveTileGroup;
-(void)_purgeCachedResourceInfo;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(void)_buildResourceNamesToPaths;
-(unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(unsigned)activeTileGroupIdentifier;
-(void)forceUpdate;
-(int)mapMatchingTileSetStyle;
-(id)allResourcePaths;
-(id)disputedBordersQueryItemsForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(void)cancelCurrentManifestUpdate;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(id)allRegionalResourceNames;
-(BOOL)isDisputedBordersAllowlistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(void)updateManifest:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1 ;
-(void)openServerConnection;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(void)updateManifest:(/*^block*/id)arg1 ;
@end

