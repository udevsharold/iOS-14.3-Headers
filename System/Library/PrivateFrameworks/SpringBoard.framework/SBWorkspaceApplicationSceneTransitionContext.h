/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceTransitionContext.h>
#import <libobjc.A.dylib/SBDisplayLayoutContext.h>

@protocol SBWorkspaceApplicationSceneTransitionContextDelegate;
@class SBLayoutState, NSMutableDictionary, NSMapTable, SBWorkspaceEntity, NSString, NSArray, SBMainWorkspaceTransitionRequest, NSSet, FBSDisplayIdentity;

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext <SBDisplayLayoutContext> {

	/*^block*/id _resultBlock;
	BOOL _background;
	BOOL _fencesAnimations;
	BOOL _alwaysRunsWatchdog;
	BOOL _waitsForSceneUpdates;
	BOOL _sentActivationResult;
	SBLayoutState* _layoutState;
	SBLayoutState* _previousLayoutState;
	NSMutableDictionary* _requestedWorkspaceEntityForLayoutRoleMutableDictionary;
	NSMapTable* _entityToRemovalContext;
	BOOL _suspendsInlineAppExposeCancellation;
	BOOL _prefersCrossfadeTransition;
	BOOL _sceneless;
	BOOL _prefersTouchCancellationDisabled;
	BOOL __alreadyPopulatedRequestedWorkspaceEntities;
	id<SBWorkspaceApplicationSceneTransitionContextDelegate> _delegate;
	long long _interfaceOrientation;
	long long _preferredInterfaceOrientation;
	SBWorkspaceEntity* _deactivatingEntity;
	long long _requestedSpaceConfiguration;
	long long _requestedFloatingConfiguration;
	long long _requestedUnlockedEnvironmentMode;
	long long _requestedFloatingSwitcherVisible;
	NSString* _requestedAppExposeBundleID;
	NSArray* _entitiesWithRemovalContexts;

}

@property (setter=_setRequestedActivatingWorkspaceEntity:,nonatomic,retain) SBWorkspaceEntity * requestedActivatingWorkspaceEntity; 
@property (assign,setter=_setAlreadyPopulatedRequestedWorkspaceEntities:,nonatomic) BOOL _alreadyPopulatedRequestedWorkspaceEntities;              //@synthesize _alreadyPopulatedRequestedWorkspaceEntities=__alreadyPopulatedRequestedWorkspaceEntities - In the implementation block
@property (nonatomic,__weak,readonly) SBMainWorkspaceTransitionRequest * request; 
@property (assign,getter=isBackground,nonatomic) BOOL background;                                                                                  //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL fencesAnimations;                                                                                                //@synthesize fencesAnimations=_fencesAnimations - In the implementation block
@property (assign,nonatomic) BOOL alwaysRunsWatchdog;                                                                                              //@synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneUpdates;                                                                                            //@synthesize waitsForSceneUpdates=_waitsForSceneUpdates - In the implementation block
@property (assign,nonatomic) BOOL suspendsInlineAppExposeCancellation;                                                                             //@synthesize suspendsInlineAppExposeCancellation=_suspendsInlineAppExposeCancellation - In the implementation block
@property (assign,nonatomic) BOOL prefersCrossfadeTransition;                                                                                      //@synthesize prefersCrossfadeTransition=_prefersCrossfadeTransition - In the implementation block
@property (assign,getter=isSceneless,nonatomic) BOOL sceneless;                                                                                    //@synthesize sceneless=_sceneless - In the implementation block
@property (nonatomic,copy) id resultBlock;                                                                                                         //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * applicationSceneEntities; 
@property (nonatomic,copy,readonly) NSSet * previousApplicationSceneEntities; 
@property (nonatomic,readonly) double watchdogScaleFactor; 
@property (nonatomic,readonly) SBLayoutState * previousLayoutState; 
@property (assign,nonatomic,__weak) id<SBWorkspaceApplicationSceneTransitionContextDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL prefersTouchCancellationDisabled;                                                                                //@synthesize prefersTouchCancellationDisabled=_prefersTouchCancellationDisabled - In the implementation block
@property (assign,nonatomic) long long preferredInterfaceOrientation;                                                                              //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,retain) SBWorkspaceEntity * activatingEntity; 
@property (nonatomic,retain) SBWorkspaceEntity * deactivatingEntity;                                                                               //@synthesize deactivatingEntity=_deactivatingEntity - In the implementation block
@property (assign,nonatomic) long long requestedSpaceConfiguration;                                                                                //@synthesize requestedSpaceConfiguration=_requestedSpaceConfiguration - In the implementation block
@property (assign,nonatomic) long long requestedFloatingConfiguration;                                                                             //@synthesize requestedFloatingConfiguration=_requestedFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long requestedUnlockedEnvironmentMode;                                                                           //@synthesize requestedUnlockedEnvironmentMode=_requestedUnlockedEnvironmentMode - In the implementation block
@property (assign,nonatomic) long long requestedFloatingSwitcherVisible;                                                                           //@synthesize requestedFloatingSwitcherVisible=_requestedFloatingSwitcherVisible - In the implementation block
@property (nonatomic,copy) NSString * requestedAppExposeBundleID;                                                                                  //@synthesize requestedAppExposeBundleID=_requestedAppExposeBundleID - In the implementation block
@property (nonatomic,copy) NSArray * entitiesWithRemovalContexts;                                                                                  //@synthesize entitiesWithRemovalContexts=_entitiesWithRemovalContexts - In the implementation block
@property (nonatomic,readonly) SBWorkspaceEntity * resolvedActivatingWorkspaceEntity; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBLayoutState * layoutState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_displayConfiguration;
-(SBLayoutState *)previousLayoutState;
-(NSSet *)applicationSceneEntities;
-(id)previousApplicationSceneEntityForLayoutRole:(long long)arg1 ;
-(void)setDeactivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(id)init;
-(BOOL)alwaysRunsWatchdog;
-(BOOL)isBackground;
-(SBLayoutState *)layoutState;
-(FBSDisplayIdentity *)displayIdentity;
-(id)appClipPlaceholderEntities;
-(long long)requestedFloatingSwitcherVisible;
-(void)setSceneless:(BOOL)arg1 ;
-(NSString *)requestedAppExposeBundleID;
-(void)_setRequestedActivatingWorkspaceEntity:(id)arg1 ;
-(BOOL)needsToSendActivationResult;
-(id)requestedWorkspaceEntityForLayoutRole:(long long)arg1 ;
-(SBWorkspaceEntity *)requestedActivatingWorkspaceEntity;
-(id)previousApplicationSceneEntityForBundleID:(id)arg1 ;
-(id)previousEntityForLayoutRole:(long long)arg1 ;
-(NSSet *)previousApplicationSceneEntities;
-(void)dealloc;
-(SBWorkspaceEntity *)resolvedActivatingWorkspaceEntity;
-(SBWorkspaceEntity *)activatingEntity;
-(void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(double)watchdogScaleFactor;
-(long long)interfaceOrientationOrPreferredOrientation;
-(long long)_lockedInterfaceOrientation;
-(id)resultBlock;
-(id)previousAppClipPlaceholderEntityForBundleID:(id)arg1 ;
-(void)setPrefersTouchCancellationDisabled:(BOOL)arg1 ;
-(void)setEntitiesWithRemovalContexts:(NSArray *)arg1 ;
-(void)sendActivationResultError:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)previousAppClipPlaceholderEntities;
-(long long)requestedFloatingConfiguration;
-(id)entityForLayoutRole:(long long)arg1 ;
-(void)setRequestedFloatingSwitcherVisible:(long long)arg1 ;
-(void)_setAlreadyPopulatedRequestedWorkspaceEntities:(BOOL)arg1 ;
-(void)setRemovalContext:(id)arg1 forEntity:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(id)appClipPlaceholderEntityForBundleID:(id)arg1 ;
-(void)setBackground:(BOOL)arg1 ;
-(void)setRequestedAppExposeBundleID:(NSString *)arg1 ;
-(id)applicationSceneEntityForLayoutRole:(long long)arg1 ;
-(void)setAlwaysRunsWatchdog:(BOOL)arg1 ;
-(void)setEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(SBWorkspaceEntity *)deactivatingEntity;
-(long long)requestedUnlockedEnvironmentMode;
-(void)setPrefersCrossfadeTransition:(BOOL)arg1 ;
-(void)setFencesAnimations:(BOOL)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(BOOL)suspendsInlineAppExposeCancellation;
-(void)finalize;
-(void)setRequestedSpaceConfiguration:(long long)arg1 ;
-(void)setWaitsForSceneUpdates:(BOOL)arg1 ;
-(void)setDelegate:(id<SBWorkspaceApplicationSceneTransitionContextDelegate>)arg1 ;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)preferredInterfaceOrientation;
-(long long)interfaceOrientation;
-(void)_setRequestedWorkspaceEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(BOOL)waitsForSceneUpdates;
-(BOOL)isSceneless;
-(void)setRequestedFloatingConfiguration:(long long)arg1 ;
-(id)applicationSceneEntityForBundleID:(id)arg1 ;
-(BOOL)prefersCrossfadeTransition;
-(BOOL)fencesAnimations;
-(CGRect)frameForApplicationSceneEntity:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(void)setRequestedUnlockedEnvironmentMode:(long long)arg1 ;
-(void)setActivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(BOOL)_alreadyPopulatedRequestedWorkspaceEntities;
-(void)setSuspendsInlineAppExposeCancellation:(BOOL)arg1 ;
-(id)removalContextForEntity:(id)arg1 ;
-(id<SBWorkspaceApplicationSceneTransitionContextDelegate>)delegate;
-(BOOL)prefersTouchCancellationDisabled;
-(NSArray *)entitiesWithRemovalContexts;
-(long long)requestedSpaceConfiguration;
@end

