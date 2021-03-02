/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContextKit/ContextKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {

	BOOL _semaOwner;
	unsigned _sema;
	unsigned long long _shmSize;
	SCD_Struct_CK0* _shm;
	NSObject*<OS_xpc_object> _shmObject;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)notifyAll;
-(BOOL)busy;
-(void)dealloc;
-(void)incPending;
-(BOOL)tryAcquire;
-(unsigned long long)activeGauge;
-(id)initSemaphoreForXPCService;
-(unsigned long long)numAcquired;
-(unsigned long long)sharedMemorySize;
-(id)initWithCoder:(id)arg1 ;
-(long long)waitFor:(double)arg1 ;
-(void)decPending;
-(long long)pending;
-(void)setActiveGauge:(unsigned long long)arg1 ;
-(unsigned long long)gauge;
-(void)resetPending;
-(unsigned long long)pendingExceptionsCount;
-(unsigned long long)requestsServed;
-(void)notify;
-(void)encodeWithCoder:(id)arg1 ;
@end
