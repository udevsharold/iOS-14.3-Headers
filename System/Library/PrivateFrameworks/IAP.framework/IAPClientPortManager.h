/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface IAPClientPortManager : NSObject {

	NSMutableDictionary* _portList;
	NSObject*<OS_dispatch_queue> _portListQueue;
	BOOL _iaptransportdIsRunning;
	NSObject*<OS_xpc_object> _iaptransportdXPCConnection;

}

@property (assign,nonatomic) BOOL iaptransportdIsRunning; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendData:(id)arg1 data:(char*)arg2 length:(unsigned short)arg3 ;
-(int)unregisterSendDataHandler:(id)arg1 ;
-(BOOL)iaptransportdIsRunning;
-(void)setIaptransportdIsRunning:(BOOL)arg1 ;
-(int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(/*^block*/id)arg3 ;
-(int)forwardAccessoryDataToIAP:(id)arg1 data:(const char*)arg2 length:(unsigned short)arg3 ;
-(void)reRegisterHandlers;
@end

