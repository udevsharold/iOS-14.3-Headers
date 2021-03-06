/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _contentBlockersPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * contentBlockersPreference;                        //@synthesize contentBlockersPreference=_contentBlockersPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)preferences;
-(id)offValueForPreference:(id)arg1 ;
-(id)init;
-(void)getContentBlockersEnabledStateForDomain:(id)arg1 withTimeout:(double)arg2 fallbackEnabledState:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WBSPerSitePreference *)contentBlockersPreference;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)onValueForPreference:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
@end

