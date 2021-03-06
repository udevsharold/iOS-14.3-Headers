/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class FBWorkspace, FBSSceneDefinition, FBSSceneParameters, NSObject, BSSimpleAssertion, BSAtomicSignal, FBSSceneClientSettings, FBSSceneSettings, NSString;

@interface FBSceneRemnant : NSObject <BSInvalidatable> {

	FBWorkspace* _workspace;
	FBSSceneDefinition* _definition;
	FBSSceneParameters* _parameters;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	BSSimpleAssertion* _assertion;
	BSAtomicSignal* _invalidated;

}

@property (nonatomic,__weak,readonly) FBWorkspace * _workspace;                            //@synthesize workspace=_workspace - In the implementation block
@property (getter=_hasBeenInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (nonatomic,copy,readonly) FBSSceneClientSettings * _clientSettings; 
@property (nonatomic,readonly) BSSimpleAssertion * _assertion;                             //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneDefinition * definition;                       //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * lastSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BSSimpleAssertion *)_assertion;
-(FBSSceneClientSettings *)_clientSettings;
-(FBWorkspace *)_workspace;
-(NSString *)description;
-(void)invalidate;
-(FBSSceneDefinition *)definition;
-(FBSSceneSettings *)lastSettings;
-(id)_initWithIdentity:(id)arg1 client:(id)arg2 workspace:(id)arg3 parameters:(id)arg4 assertionQueue:(id)arg5 assertion:(id)arg6 ;
-(BOOL)_hasBeenInvalidated;
@end

