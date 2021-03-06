/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol> {

	BOOL _homesConfigured;
	int _homeKitPreferencesChangeNotifyToken;
	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	unsigned long long _homeAppInstallState;

}

@property (assign,nonatomic) unsigned long long visibilityState;                   //@synthesize visibilityState=_visibilityState - In the implementation block
@property (assign,nonatomic) BOOL homesConfigured;                                 //@synthesize homesConfigured=_homesConfigured - In the implementation block
@property (assign,nonatomic) unsigned long long homeAppInstallState;               //@synthesize homeAppInstallState=_homeAppInstallState - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangeNotifyToken;              //@synthesize homeKitPreferencesChangeNotifyToken=_homeKitPreferencesChangeNotifyToken - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                        //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)visibilityStateChangeHandler;
-(id)init;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setHomeAppInstallState:(unsigned long long)arg1 ;
-(void)setHomesConfigured:(BOOL)arg1 ;
-(void)dealloc;
-(void)_queryHomeAppInstallStateWithCompletion:(/*^block*/id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2 ;
-(void)setHomeKitPreferencesChangeNotifyToken:(int)arg1 ;
-(unsigned long long)visibilityState;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(void)reloadVisibilityState;
-(unsigned long long)homeAppInstallState;
-(void)applicationsDidUninstall:(id)arg1 ;
-(int)homeKitPreferencesChangeNotifyToken;
-(void)_reloadVisibilityStateIncludingInstallState:(BOOL)arg1 ;
-(void)_startListeningForManagedConfigurationChanges;
-(BOOL)homesConfigured;
-(void)applicationsDidInstall:(id)arg1 ;
@end

