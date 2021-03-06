/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceFiltersManagerDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, GEOActiveResourceFilters, NSSet;

@interface GEOResourceFiltersManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;
	GEOActiveResourceFilters* _activeFilters;
	os_unfair_lock_s _lock;
	id<GEOResourceFiltersManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOResourceFiltersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * activeScales; 
@property (nonatomic,readonly) NSSet * activeScenarios; 
-(void)deactivateScenario:(int)arg1 ;
-(id)init;
-(void)deactivateScale:(int)arg1 ;
-(void)activateScale:(int)arg1 ;
-(NSSet *)activeScenarios;
-(void)_deactivateFilters:(/*^block*/id)arg1 ;
-(void)_writeToDisk;
-(id)initWithConfiguration:(id)arg1 ;
-(void)activateScenario:(int)arg1 ;
-(void)setDelegate:(id<GEOResourceFiltersManagerDelegate>)arg1 ;
-(NSSet *)activeScales;
-(void)_activateFilters:(/*^block*/id)arg1 setValueBlock:(/*^block*/id)arg2 ;
-(id<GEOResourceFiltersManagerDelegate>)delegate;
@end

