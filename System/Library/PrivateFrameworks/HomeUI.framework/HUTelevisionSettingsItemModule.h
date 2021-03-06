/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@class NSSet, HMHome, HMAccessory, HFItem;

@interface HUTelevisionSettingsItemModule : HFItemModule {

	NSSet* _itemProviders;
	HMHome* _home;
	HMAccessory* _accessory;
	HFItem* _showPowerModeSelectionItem;

}

@property (nonatomic,readonly) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HFItem * showPowerModeSelectionItem;              //@synthesize showPowerModeSelectionItem=_showPowerModeSelectionItem - In the implementation block
+(id)_powerModeSelectionCharacteristicForAccessory:(id)arg1 ;
+(BOOL)_supportsAccessory:(id)arg1 ;
-(HMHome *)home;
-(HMAccessory *)accessory;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem *)showPowerModeSelectionItem;
-(id)showPowerModeSelection;
-(void)_createItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 accessory:(id)arg3 ;
@end

