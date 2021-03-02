/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSAccessibilityWindowHostingClientToServerInterface;
@class BSServiceConnection;

@interface _SBAccessibilityWindowHostingControllerServerTarget : NSObject {

	BSServiceConnection* _connection;
	id<SBSAccessibilityWindowHostingClientToServerInterface> _proxyInterface;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSAccessibilityWindowHostingClientToServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
+(id)currentTarget;
-(id<SBSAccessibilityWindowHostingClientToServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSAccessibilityWindowHostingClientToServerInterface>)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)unregisterWindowWithContextID:(id)arg1 ;
-(void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2 ;
-(BSServiceConnection *)connection;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end
