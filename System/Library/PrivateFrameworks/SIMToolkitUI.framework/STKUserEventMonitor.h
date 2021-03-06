/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;
@class AWAttentionAwarenessConfiguration, NSObject, AWAttentionAwarenessClient;

@interface STKUserEventMonitor : NSObject {

	AWAttentionAwarenessConfiguration* _queue_configuration;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _invalidated;
	BOOL _enabled;
	id<STKUserEventMonitorDelegate> _delegate;
	AWAttentionAwarenessClient* _attentionAwarenessClient;

}

@property (nonatomic,retain) AWAttentionAwarenessClient * attentionAwarenessClient;              //@synthesize attentionAwarenessClient=_attentionAwarenessClient - In the implementation block
@property (assign,nonatomic,__weak) id<STKUserEventMonitorDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
-(void)_resume;
-(id)_queue;
-(id)init;
-(void)_suspend;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)setDelegate:(id<STKUserEventMonitorDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(id<STKUserEventMonitorDelegate>)delegate;
-(void)_queue_handleAttentionAwarenessEvent:(id)arg1 ;
-(id)_initWithAttentionAwarenessClient:(id)arg1 ;
-(AWAttentionAwarenessClient *)attentionAwarenessClient;
-(void)setAttentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
@end

