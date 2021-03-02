/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, RBDomainAttributeManaging, RBAssertionOriginatorPidPersisting, OS_dispatch_queue;
#import <RunningBoard/RunningBoard-Structs.h>
@class RBProcess, NSMutableSet, NSObject;

@interface RBProcessReconnectManager : NSObject {

	id<RBAssertionManaging> _assertionManager;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
	RBProcess* _originatorProcess;
	NSMutableSet* _currentAssertionIdentifiers;
	NSMutableSet* _pendingProcesses;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;

}
-(id)initWithAssertionManager:(id)arg1 domainAttributeManager:(id)arg2 assertionOriginatorPidStore:(id)arg3 originatorProcess:(id)arg4 ;
-(id)init;
-(void)didInvalidateAssertion:(id)arg1 ;
-(void)reconnectProcesses:(id)arg1 ;
@end
