/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFHomeKitSettingsVendor;
@class HFItem, HMSetting, HMSettingGroup, HMAccessorySelectionSettingItem, HFAccessorySettingsEntity, NSDictionary, NSString;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable> {

	HFItem* _outputItem;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HMSetting* _singleSetting;
	HMSettingGroup* _settingGroup;
	HMAccessorySelectionSettingItem* _optionItem;
	HFAccessorySettingsEntity* _accessoryGroupEntity;
	NSDictionary* _usageOptions;

}

@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) HMSetting * singleSetting;                                      //@synthesize singleSetting=_singleSetting - In the implementation block
@property (nonatomic,readonly) HMSettingGroup * settingGroup;                                  //@synthesize settingGroup=_settingGroup - In the implementation block
@property (nonatomic,readonly) HMAccessorySelectionSettingItem * optionItem;                   //@synthesize optionItem=_optionItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * accessoryGroupEntity;               //@synthesize accessoryGroupEntity=_accessoryGroupEntity - In the implementation block
@property (nonatomic,readonly) HFItem * outputItem;                                            //@synthesize outputItem=_outputItem - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) NSDictionary * usageOptions;                                    //@synthesize usageOptions=_usageOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(BOOL)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 ;
-(NSString *)cacheKey;
-(NSString *)keyPath;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSDictionary *)usageOptions;
-(HMAccessorySelectionSettingItem *)optionItem;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3 ;
-(unsigned long long)hash;
-(NSString *)description;
-(HMSettingGroup *)settingGroup;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3 ;
-(HMSetting *)singleSetting;
-(HFAccessorySettingsEntity *)accessoryGroupEntity;
-(BOOL)shouldBeDisplayed;
-(HFItem *)outputItem;
@end

