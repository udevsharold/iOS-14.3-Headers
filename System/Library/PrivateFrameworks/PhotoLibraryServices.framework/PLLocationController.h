/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSMutableArray, NSDictionary, NSString, PLPhotoLibrary;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSMutableArray* _locationPendingAssets;
	NSDictionary* _exifDictionary;
	NSString* _locationStr;
	BOOL _isEnabled;
	BOOL _isUpdating;
	BOOL _isHeadingEnabled;
	PLPhotoLibrary* _photoLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(BOOL)arg1 ;
+(id)sharedInstance;
-(id)photoLibrary;
-(id)locationString;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(id)init;
-(void)_updateLocationRunState;
-(id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2 ;
-(BOOL)_addLocationToAsset:(id)arg1 ;
-(void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3 ;
-(void)_updatePendingAssets;
-(void)_assetContainerChanged:(id)arg1 ;
-(void)dealloc;
-(id)location;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_stopUpdating;
-(void)_startUpdating;
@end

