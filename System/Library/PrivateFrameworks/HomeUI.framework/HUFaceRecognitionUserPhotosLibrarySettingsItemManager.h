/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HUFaceRecognitionUserPhotosLibrarySettingsModule, HMHome, HFStaticItemProvider, HMUser;

@interface HUFaceRecognitionUserPhotosLibrarySettingsItemManager : HFItemManager {

	HFStaticItem* _addNamesInPhotosLibraryItem;
	HUFaceRecognitionUserPhotosLibrarySettingsModule* _photosLibrarySettingsModule;
	HMHome* _overrideHome;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HFStaticItem * addNamesInPhotosLibraryItem;                                                    //@synthesize addNamesInPhotosLibraryItem=_addNamesInPhotosLibraryItem - In the implementation block
@property (nonatomic,readonly) HMHome * overrideHome;                                                                       //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,readonly) HMUser * user; 
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                                                     //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,readonly) HUFaceRecognitionUserPhotosLibrarySettingsModule * photosLibrarySettingsModule;              //@synthesize photosLibrarySettingsModule=_photosLibrarySettingsModule - In the implementation block
-(HMUser *)user;
-(HMHome *)overrideHome;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(HUFaceRecognitionUserPhotosLibrarySettingsModule *)photosLibrarySettingsModule;
-(HFStaticItem *)addNamesInPhotosLibraryItem;
-(void)setAddNamesInPhotosLibraryItem:(HFStaticItem *)arg1 ;
-(id)setImportPhotosLibraryEnabled:(BOOL)arg1 ;
-(id)setSharePhotosLibraryEnabled:(BOOL)arg1 ;
@end

