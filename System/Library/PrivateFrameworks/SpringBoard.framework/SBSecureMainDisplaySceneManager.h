/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneManager.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionSceneEntityFrameProvider.h>

@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_applicationSceneHandleClass;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(id)window;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_createRootWindowScenePresentationBinder;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)sceneLayoutViewController;
@end

