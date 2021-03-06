/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPageZoomPreferenceManager.h>

@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager
+(id)sharedManager;
-(void)dealloc;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)_didRemoveHostnames:(id)arg1 ;
@end

