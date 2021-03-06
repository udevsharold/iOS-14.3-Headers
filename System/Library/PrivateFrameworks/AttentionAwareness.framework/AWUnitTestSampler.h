/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AWUnitTestSampler.h>

@protocol AWUnitTestSampler
@required
-(void)setSmartCoverClosed:(BOOL)arg1;
-(void)setDisplayCallback:(/*^block*/id)arg1;
-(void)setDisplayState:(BOOL)arg1;
-(void)getStatsWithBlock:(/*^block*/id)arg1;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSmartCoverCallback:(/*^block*/id)arg1;
-(void)setPearlErrorState:(BOOL)arg1;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2;

@end


@protocol NSXPCProxyCreating, OS_dispatch_queue;
@class NSObject;

@interface AWUnitTestSampler : NSObject <AWUnitTestSampler> {

	id<NSXPCProxyCreating> _remoteSamplerProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedSampler;
-(id)connect;
-(id)init;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(id)_connect;
-(void)setDisplayCallback:(/*^block*/id)arg1 ;
-(void)setDisplayState:(BOOL)arg1 ;
-(void)getStatsWithBlock:(/*^block*/id)arg1 ;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverCallback:(/*^block*/id)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)invokeSampler:(/*^block*/id)arg1 ;
@end

