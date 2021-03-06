/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, FBWorkspaceConnectionsState;

@interface FBWorkspaceConnectionsStateStore : NSObject {

	NSString* _path1;
	NSString* _path2;
	NSObject*<OS_dispatch_queue> _queue;
	FBWorkspaceConnectionsState* _queue_state;
	long long _queue_lastBuffer;
	long long _queue_nextWriteFailure;
	BOOL _queue_writeFailedOnce;

}

@property (nonatomic,readonly) long long _lastUsedBuffer; 
@property (nonatomic,copy) FBWorkspaceConnectionsState * state; 
+(id)_loadStateFromPath:(id)arg1 outGeneration:(out BOOL*)arg2 outExisted:(out BOOL*)arg3 ;
+(BOOL)_storeState:(id)arg1 toPath:(id)arg2 withGeneration:(BOOL)arg3 injectedFailure:(inout long long*)arg4 ;
+(void)_unlinkAllForIdentifier:(id)arg1 ;
+(void)_unlinkShmPath:(id)arg1 graceful:(BOOL)arg2 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)init;
-(FBWorkspaceConnectionsState *)state;
-(long long)_lastUsedBuffer;
-(void)_setFailureModeForNextWrite:(long long)arg1 ;
-(void)setState:(FBWorkspaceConnectionsState *)arg1 ;
@end

