/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class NSString, NSMutableArray;

@interface ARRunLoop : NSObject {

	NSString* _name;
	CFRunLoopRef _runloop;
	CFRunLoopObserverRef _runLoopEnterObserver;
	CFRunLoopObserverRef _runLoopExitObserver;
	CFArrayRef _autoreleasePoolStack;
	NSMutableArray* _earlyRunloopBlocks;
	os_unfair_lock_s _lock;
	BOOL _started;
	BOOL _cancelled;

}

@property (assign) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)cancelled;
-(void)_runloop_popAutoreleasePool;
-(id)init;
-(void)_runloop_pushAutoreleasePool;
-(void)setCancelled:(BOOL)arg1 ;
-(void)_runloop_handleActivity:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_startThread;
-(void)runOnRunLoop:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)start;
-(id)initWithName:(id)arg1 ;
@end
