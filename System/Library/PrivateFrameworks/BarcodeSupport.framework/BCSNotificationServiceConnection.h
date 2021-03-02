/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject {

	/*^block*/id _interruptionHandler;
	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                             //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(void)dealloc;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)startNFCReaderWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)stopNFCReaderWithErrorHandler:(/*^block*/id)arg1 ;
-(void)cancelNotificationsForCodeType:(long long)arg1 ;
-(void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
@end
