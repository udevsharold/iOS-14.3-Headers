/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSServiceConnectionHandlerDelegate;
@class NSXPCConnection;

@interface VSServiceConnectionHandler : NSObject {

	NSXPCConnection* _connection;
	id<VSServiceConnectionHandlerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<VSServiceConnectionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_didFinish;
-(void)setDelegate:(id<VSServiceConnectionHandlerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(id<VSServiceConnectionHandlerDelegate>)delegate;
@end
