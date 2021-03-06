/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkspaceEventDispatcherTarget;
#import <FrontBoard/FrontBoard-Structs.h>
@class FBWorkspaceConnectionsStateStore, NSMutableDictionary, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {

	FBWorkspaceConnectionsStateStore* _store;
	id<FBWorkspaceEventDispatcherTarget> _target;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_workspaces;
	NSMutableDictionary* _lock_restartAssertions;
	FBMutableWorkspaceConnectionsState* _lock_mutableState;

}
+(id)sharedInstance;
-(id)init;
-(void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg1 toTarget:(id)arg2 ;
-(void)registerTarget:(id)arg1 ;
-(id)registerWorkspaceWithProcessHandle:(id)arg1 ;
-(id)_initWithConnectionStore:(id)arg1 ;
-(void)noteHandshakeForWorkspaceRegistration:(id)arg1 withRemnants:(id)arg2 ;
@end

