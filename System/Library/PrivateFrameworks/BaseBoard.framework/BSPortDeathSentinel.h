/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class BSMachPortSendRight, NSObject, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {

	BSMachPortSendRight* _sendRight;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _source;
	BOOL _activated;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)monitorSendRight:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)activateWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)initWithSendRight:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invalidate;
@end

