/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMAnomalyDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMAnomalyEvent;

@interface CMAnomalyManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	CMAnomalyEvent* fLastReceivedEvent;
	CMAnomalyEvent* fLastDispatchedEvent;
	BOOL fRegisteredForNotification;
	id<CMAnomalyDelegate> _delegate;

}

@property (assign,nonatomic) id<CMAnomalyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAnomalyDetectionAvailable;
+(long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)arg1 ;
-(void)_registerForAnomalyDetection:(BOOL)arg1 ;
-(void)_sendRegistrationForAnomalyEvent:(id)arg1 ;
-(void)startAnomalyDetection;
-(void)stopAnomalyDetection;
-(void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2 ;
-(void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)updateAnomalyEventSOSCallState:(id)arg1 withSOSSCallState:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CMAnomalyDelegate>)arg1 ;
-(id<CMAnomalyDelegate>)delegate;
@end

