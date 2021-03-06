/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, _SFRequestDesktopSiteQuirksManager, NSMutableSet, WBSPerSitePreference, NSString;

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	_SFRequestDesktopSiteQuirksManager* _quirksManager;
	NSMutableSet* _observers;
	BOOL _clientPrefersMobileUserAgentByDefault;
	WBSPerSitePreference* _requestDesktopSitePreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * requestDesktopSitePreference;                     //@synthesize requestDesktopSitePreference=_requestDesktopSitePreference - In the implementation block
@property (assign,nonatomic) BOOL clientPrefersMobileUserAgentByDefault;                                //@synthesize clientPrefersMobileUserAgentByDefault=_clientPrefersMobileUserAgentByDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)preferences;
-(id)offValueForPreference:(id)arg1 ;
-(id)init;
-(void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
-(void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
-(void)setClientPrefersMobileUserAgentByDefault:(BOOL)arg1 ;
-(void)dealloc;
-(void)getAllRequestDesktopSitePerSitePreferenceValues:(/*^block*/id)arg1 ;
-(BOOL)clientPrefersMobileUserAgentByDefault;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)onValueForPreference:(id)arg1 ;
-(void)getRequestDesktopSitePreferenceForDomain:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WBSPerSitePreference *)requestDesktopSitePreference;
-(id)valuesForPreference:(id)arg1 ;
-(long long)_defaultPreferenceValue;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg1 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 quirksManager:(id)arg2 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

