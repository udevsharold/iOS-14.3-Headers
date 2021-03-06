/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMHome, NSSet, HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMSettings;


@protocol HFHomeKitSettingsVendor <HFHomeKitObject,HFGroupableItemProtocol>
@property (nonatomic,readonly) HMHome * hf_home; 
@property (nonatomic,readonly) NSSet * hf_dependentHomeKitObjectsForDownstreamItems; 
@property (nonatomic,readonly) HFHomeKitSettingsAdapterManager * hf_settingsAdapterManager; 
@property (nonatomic,readonly) HFHomeKitSettingsValueManager * hf_settingsValueManager; 
@property (nonatomic,readonly) BOOL hasValidSettings; 
@property (readonly) HMSettings * settings; 
@required
-(HFHomeKitSettingsValueManager *)hf_settingsValueManager;
-(NSSet *)hf_dependentHomeKitObjectsForDownstreamItems;
-(HMHome *)hf_home;
-(HFHomeKitSettingsAdapterManager *)hf_settingsAdapterManager;
-(BOOL)hasValidSettings;
-(HMSettings *)settings;

@end

