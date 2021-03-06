/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFService, NSObject;

@interface PKProximityAdvertiser : NSObject {

	SFService* _nearbyInfoSharingService;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _advertiserQueue;
	BOOL _isAdvertising;

}

@property (nonatomic,readonly) BOOL isAdvertising;              //@synthesize isAdvertising=_isAdvertising - In the implementation block
-(BOOL)isAdvertising;
-(id)init;
-(void)_queue_endAdvertising;
-(void)dealloc;
-(/*^block*/id)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)startAdvertisingForDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)endAdvertising;
@end

