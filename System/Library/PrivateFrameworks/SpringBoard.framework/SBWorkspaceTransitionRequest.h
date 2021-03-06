/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIAnimationControllerTransitionContextProvider.h>
#import <libobjc.A.dylib/SBWorkspaceApplicationSceneTransitionContextDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, FBSDisplayConfiguration, SBWorkspace, NSUUID, NSString, SBLayoutStateTransitionCoordinator, SBWorkspaceApplicationSceneTransitionContext, BSProcessHandle, SBWorkspaceTransientOverlayTransitionContext, FBSDisplayIdentity;

@interface SBWorkspaceTransitionRequest : NSObject <SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding> {

	FBSDisplayConfiguration* _displayConfiguration;
	SBWorkspace* _workspace;
	NSUUID* _uniqueID;
	NSString* _eventLabel;
	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	BOOL _finalized;
	long long _interfaceOrientation;
	SBWorkspaceApplicationSceneTransitionContext* _applicationContext;
	BSProcessHandle* _originatingProcess;
	SBWorkspaceTransientOverlayTransitionContext* _transientOverlayContext;

}

@property (nonatomic,readonly) BOOL isMainWorkspaceTransitionRequest; 
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBWorkspace * workspace;                                                           //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;                                    //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                                                //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (nonatomic,copy) NSString * eventLabel;                                                                 //@synthesize eventLabel=_eventLabel - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                                                 //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplicationSceneTransitionContext * applicationContext;                   //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransientOverlayTransitionContext * transientOverlayContext;              //@synthesize transientOverlayContext=_transientOverlayContext - In the implementation block
-(NSSet *)toApplicationSceneEntities;
-(NSSet *)fromApplicationSceneEntities;
-(NSUUID *)uniqueID;
-(id)init;
-(void)declineWithReason:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(void)modifyTransientOverlayContext:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)compactDescriptionBuilder;
-(BOOL)isFinalized;
-(BSProcessHandle *)originatingProcess;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBWorkspaceApplicationSceneTransitionContext *)applicationContext;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
-(NSString *)description;
-(SBWorkspace *)workspace;
-(CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(NSString *)eventLabel;
-(void)setEventLabel:(NSString *)arg1 ;
-(SBWorkspaceTransientOverlayTransitionContext *)transientOverlayContext;
-(void)finalize;
-(BOOL)isMainWorkspaceTransitionRequest;
-(id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2 ;
-(void)setApplicationContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 ;
-(void)setEventLabelWithFormat:(id)arg1 ;
-(void)setTransientOverlayContext:(SBWorkspaceTransientOverlayTransitionContext *)arg1 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(void)modifyApplicationContext:(/*^block*/id)arg1 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
@end

