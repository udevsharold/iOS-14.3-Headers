/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTape/SiriTape-Structs.h>
#import <libobjc.A.dylib/GCDAsyncSocketDelegate.h>

@protocol STAceObjectHandler, OS_dispatch_queue;
@class NSURL, GCDAsyncSocket, NSObject, NSMutableArray, NSMutableDictionary, STServerConnection;

@interface STProxySocketDelegate : NSObject <GCDAsyncSocketDelegate> {

	NSURL* _serverURL;
	NSURL* _replayURL;
	unsigned long long _port;
	BOOL _usingTLS;
	id<STAceObjectHandler> _handler;
	GCDAsyncSocket* _serverSocket;
	GCDAsyncSocket* _listenSocket;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSMutableArray* _connectedSockets;
	NSMutableDictionary* _clientConnections;
	STServerConnection* _serverConnection;

}
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2 ;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(id)initWithActiveServerURL:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3 ;
@end

