/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHTTPConnectionDelegate.h>

@protocol OS_dispatch_queue, REHTTPServerDelegate;
@class NSObject, NSMutableArray;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CFHTTPServerRef _server;
	NSMutableArray* _connections;
	unsigned short _port;
	id<REHTTPServerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned short port;                            //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) id<REHTTPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned short)port;
-(void)invalidated;
-(void)dealloc;
-(BOOL)_valid;
-(void)invalidate;
-(id<REHTTPServerDelegate>)delegate;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didRecievedError:(id)arg1 ;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
@end
