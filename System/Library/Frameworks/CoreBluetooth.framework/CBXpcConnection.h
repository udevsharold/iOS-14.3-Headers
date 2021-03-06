/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object, CBXpcConnectionDelegate;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _sessionType;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	BOOL _uiAppIsBackgrounded;
	id<CBXpcConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CBXpcConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)disconnect;
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_handleMsg:(id)arg1 ;
-(void)_handleConnectionEvent:(id)arg1 ;
-(id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_sendBarrier;
-(id)_nameForMessage:(unsigned short)arg1 ;
-(void)_applicationDidEnterBackgroundNotification;
-(void)_checkOut;
-(void)_applicationWillEnterForegroundNotification;
-(void)_handleInvalid;
-(void)_handleFinalized;
-(void)_handleReset;
-(void)setDelegate:(id<CBXpcConnectionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(void)_checkIn;
-(void)setTargetQueue:(id)arg1 ;
-(id<CBXpcConnectionDelegate>)delegate;
@end

