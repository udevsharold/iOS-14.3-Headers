/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCInterface, NSXPCConnection;

@interface MSXPCService : NSObject {

	NSLock* _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCConnection* _connection;
	BOOL _shouldLaunchMobileMail;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
+(id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(BOOL)arg2 connectionErrorHandler:(/*^block*/id)arg3 ;
+(id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxy;
-(id)init;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(id)newConnectionForInterface:(id)arg1 ;
-(id)connection;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
@end

