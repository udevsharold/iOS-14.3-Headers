/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFAccessorySettingSiriLanguageAdapterObserver.h>

@class HFAccessorySettingSiriLanguageAdapter, HUSiriLanguageOptionItemProvider, HFAccessorySettingGroupItem, NSString;

@interface HUAccessorySettingsSiriOutputVoiceItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver> {

	HFAccessorySettingSiriLanguageAdapter* _adapter;
	HUSiriLanguageOptionItemProvider* _accentOptionItemProvider;
	HUSiriLanguageOptionItemProvider* _genderOptionItemProvider;

}

@property (nonatomic,retain) HUSiriLanguageOptionItemProvider * accentOptionItemProvider;              //@synthesize accentOptionItemProvider=_accentOptionItemProvider - In the implementation block
@property (nonatomic,retain) HUSiriLanguageOptionItemProvider * genderOptionItemProvider;              //@synthesize genderOptionItemProvider=_genderOptionItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFAccessorySettingGroupItem * groupItem; 
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;                        //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2 ;
-(void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(HFAccessorySettingGroupItem *)groupItem;
-(id)updateSelectionWithOptionItem:(id)arg1 ;
-(void)setAccentOptionItemProvider:(HUSiriLanguageOptionItemProvider *)arg1 ;
-(void)setGenderOptionItemProvider:(HUSiriLanguageOptionItemProvider *)arg1 ;
-(HUSiriLanguageOptionItemProvider *)accentOptionItemProvider;
-(HUSiriLanguageOptionItemProvider *)genderOptionItemProvider;
@end

