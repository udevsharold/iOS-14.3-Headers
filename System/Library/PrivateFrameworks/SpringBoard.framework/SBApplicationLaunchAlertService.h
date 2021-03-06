/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSSet, SBApplicationController, SBAlertItemsController, NSMutableSet, NSMutableDictionary, NSString;

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable> {

	NSSet* _launchAlertEvaluators;
	SBApplicationController* _applicationController;
	SBAlertItemsController* _alertItemsController;
	NSSet* _sceneManagers;
	NSMutableSet* _foregroundingScenes;
	NSMutableDictionary* _mapBundleIDToLaunchAlertInfo;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_sceneDidResignForeground:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)dealloc;
-(void)_sceneDidBecomeForeground:(id)arg1 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)_sceneWillBecomeForeground:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3 ;
-(NSString *)description;
-(void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1 ;
-(void)invalidate;
-(id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4 ;
@end

