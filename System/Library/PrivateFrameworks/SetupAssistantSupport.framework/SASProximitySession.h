/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASProximitySessionDelegate, OS_dispatch_queue;
@class NSObject, SASProximitySessionTransport, CUMessageSession;

@interface SASProximitySession : NSObject {

	BOOL _connected;
	id<SASProximitySessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _actionQueue;
	SASProximitySessionTransport* _transport;

}

@property (retain) NSObject*<OS_dispatch_queue> actionQueue;              //@synthesize actionQueue=_actionQueue - In the implementation block
@property (retain) SASProximitySessionTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (assign) id<SASProximitySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) CUMessageSession * sharingMessageSession; 
@property (getter=isConnected) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
-(void)setConnected:(BOOL)arg1 ;
-(void)activate;
-(SASProximitySessionTransport *)transport;
-(id)init;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sendAction:(id)arg1 ;
-(void)setTransport:(SASProximitySessionTransport *)arg1 ;
-(BOOL)isConnected;
-(void)setDelegate:(id<SASProximitySessionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(void)invalidate;
-(id<SASProximitySessionDelegate>)delegate;
-(void)handleAction:(id)arg1 ;
-(void)receivedAction:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)actionFromData:(id)arg1 ;
-(void)setSharingMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)sharingMessageSession;
@end

