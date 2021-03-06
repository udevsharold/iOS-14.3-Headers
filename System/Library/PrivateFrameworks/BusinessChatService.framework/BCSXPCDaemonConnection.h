/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSXPCDaemonConnectionProtocol.h>

@class NSXPCConnection, NSString;

@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (retain,readonly) id<BCSXPCDaemonProtocol> remoteObjectProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMachServiceName:(id)arg1 ;
-(id<BCSXPCDaemonProtocol>)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)resume;
@end

