/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCIPCRemoteIncomingConnection.h>

@interface _GCAppClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic,retain) id<_GCAppServerInterface> server; 
-(id<_GCAppServerInterface>)server;
-(void)setServer:(id<_GCAppServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
@end

