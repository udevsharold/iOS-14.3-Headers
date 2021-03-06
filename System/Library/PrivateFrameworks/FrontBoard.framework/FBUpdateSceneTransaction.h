/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol FBSynchronizedTransactionDelegate;
@class FBSceneManager, NSString, FBSSceneDefinition, FBSSceneParameters, FBSSceneTransitionContext, FBWaitForSceneDestructionTransaction, FBScene, FBSSceneSettings, FBSSceneSpecification;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {

	FBSceneManager* _sceneManager;
	NSString* _sceneID;
	FBSSceneDefinition* _definition;
	FBSSceneParameters* _parameters;
	FBSSceneTransitionContext* _transitionContext;
	FBWaitForSceneDestructionTransaction* _destructionTransaction;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;
	unsigned long long _transactionID;
	BOOL _waitsForSceneCommit;
	BOOL _readyToCommit;
	BOOL _didCommit;
	BOOL _destroyed;

}

@property (nonatomic,readonly) FBScene * scene; 
@property (nonatomic,readonly) NSString * sceneIdentifier;                                                      //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneSpecification * specification; 
@property (nonatomic,readonly) FBSSceneTransitionContext * transitionContext;                                   //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) BOOL destroyed;                                                                  //@synthesize destroyed=_destroyed - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneCommit;                                                          //@synthesize waitsForSceneCommit=_waitsForSceneCommit - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * newSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)performSynchronizedCommit;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(NSString *)sceneIdentifier;
-(void)_noteDidCommit:(BOOL)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(BOOL)isReadyForSynchronizedCommit;
-(BOOL)destroyed;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(BOOL)_canBeInterrupted;
-(void)addObserver:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_commitSceneUpdate:(/*^block*/id)arg1 ;
-(void)_begin;
-(void)_commitSceneOrWait;
-(void)_didComplete;
-(void)_noteWillUpdate;
-(id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4 ;
-(FBSSceneTransitionContext *)transitionContext;
-(void)setWaitsForSceneCommit:(BOOL)arg1 ;
-(void)_updateScene;
-(id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_noteWillCommit;
-(FBSSceneSettings *)newSettings;
-(void)_createScene;
-(FBSSceneSettings *)settings;
-(FBScene *)scene;
-(void)_noteDidCreate;
-(void)_performCommit;
-(BOOL)waitsForSceneCommit;
@end

