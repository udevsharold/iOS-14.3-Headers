/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface SYOutgoingSyncAllObjectsSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	unsigned _state;
	BOOL _errorIsLocal;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	double _sessionStartTime;
	NSMutableArray* _changesToSend;
	BOOL _cancelled;
	BOOL canRestart;
	BOOL canRollback;

}
-(void)start:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(void)cancelWithError:(id)arg1 ;
-(unsigned)state;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(void)setState:(unsigned)arg1 ;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(double)remainingSessionTime;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sendChanges;
-(void)_sessionCompleteWithError:(id)arg1 ;
-(void)_fetchChanges;
-(void)_sessionFailed;
@end

