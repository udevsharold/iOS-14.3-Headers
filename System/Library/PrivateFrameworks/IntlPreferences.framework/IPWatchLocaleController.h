/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSDomainAccessor, NPSManager, NSArray;

@interface IPWatchLocaleController : NSObject {

	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	NSArray* _systemLanguages;

}

@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;              //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                           //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * systemLanguages;                          //@synthesize systemLanguages=_systemLanguages - In the implementation block
-(id)preferredLanguages;
-(id)init;
-(id)deviceLanguage;
-(void)setLocale:(id)arg1 ;
-(NSArray *)systemLanguages;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(void)setSystemLanguages:(NSArray *)arg1 ;
-(NPSManager *)syncManager;
-(void)updateLocale:(id)arg1 ;
-(id)initWithSystemLanguages:(id)arg1 ;
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)resetTimeFormat;
-(void)postLocaleChangedNotification;
-(void)mirrorLanguagesAndLocaleToWatch;
-(void)initializeMirrorSettings;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
@end
