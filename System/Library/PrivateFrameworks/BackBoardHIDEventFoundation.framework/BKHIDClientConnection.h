/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSCompoundAssertion;

@interface BKHIDClientConnection : NSObject <BSInvalidatable> {

	IOHIDEventSystemConnectionRef _connection;
	long long _versionedPID;
	int _pid;
	unsigned _task;
	NSString* _bundleID;
	os_unfair_lock_s _lock;
	BSCompoundAssertion* _observerAssertion;
	atomic_flag _invalid;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) long long versionedPID;                //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) unsigned task;                         //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(long long)versionedPID;
-(id)addDisconnectionObserverBlock:(/*^block*/id)arg1 ;
-(int)pid;
-(NSString *)bundleID;
-(void)dealloc;
-(unsigned long long)hash;
-(id)initWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)task;
-(void)invalidate;
-(IOHIDEventSystemConnectionRef)connection;
@end

