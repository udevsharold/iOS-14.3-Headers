/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PETEventTracker2, NSObject;

@interface WFEventTracker : NSObject {

	PETEventTracker2* _proactiveTracker;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) PETEventTracker2 * proactiveTracker;                    //@synthesize proactiveTracker=_proactiveTracker - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> loggingQueue;              //@synthesize loggingQueue=_loggingQueue - In the implementation block
+(id)sharedTracker;
-(NSObject*<OS_dispatch_queue>)loggingQueue;
-(id)init;
-(id)initWithTracker:(id)arg1 ;
-(void)trackEvent:(id)arg1 ;
-(void)trackEvent:(id)arg1 count:(int)arg2 ;
-(PETEventTracker2 *)proactiveTracker;
@end
