/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BYDaemonProximitySourceProtocol.h>
#import <libobjc.A.dylib/BYBuddyDaemonProximitySourceProtocol.h>

@protocol BYBuddyDaemonProximitySourceProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonProximitySourceClient : NSObject <BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol> {

	id<BYBuddyDaemonProximitySourceProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (__weak) id<BYBuddyDaemonProximitySourceProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proximitySourceClientInterface;
-(id)init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)activateWithSharingChannel:(id)arg1 ;
-(void)finishedWithError:(id)arg1 ;
-(void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2 ;
-(void)backupCompletedWithError:(id)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)connectToDaemon;
-(void)setDelegate:(id<BYBuddyDaemonProximitySourceProtocol>)arg1 ;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id<BYBuddyDaemonProximitySourceProtocol>)delegate;
@end
