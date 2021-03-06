/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRAidedRangingClientProtocol.h>

@protocol OS_os_log, PRRangingSessionDelegate, OS_dispatch_queue;
@class NSObject, NSXPCConnection, PRPeer, PRRangingDevice, NSMutableSet, NSString;

@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol> {

	NSObject*<OS_os_log> _logger;
	NSXPCConnection* _connection;
	PRPeer* _localPeer;
	PRRangingDevice* _rangingDevice;
	BOOL _isReady;
	BOOL _valid;
	id<PRRangingSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _sessionParticipants;
	PRPeer* _rangedPeer;

}

@property (retain) NSMutableSet * sessionParticipants;                      //@synthesize sessionParticipants=_sessionParticipants - In the implementation block
@property (assign) BOOL isReady;                                            //@synthesize isReady=_isReady - In the implementation block
@property (getter=isValid) BOOL valid;                                      //@synthesize valid=_valid - In the implementation block
@property (retain) PRPeer * rangedPeer;                                     //@synthesize rangedPeer=_rangedPeer - In the implementation block
@property (__weak) id<PRRangingSessionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (copy,readonly) PRPeer * localPeer;                               //@synthesize localPeer=_localPeer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)computeLocalDeviceIndex:(id)arg1 sessionParticipants:(id)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)isReady;
-(id)remoteObject;
-(void)invokeDelegateBlock:(/*^block*/id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)handleInvalidation;
-(BOOL)isValid;
-(PRPeer *)localPeer;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleInterruption;
-(void)connectToDaemon;
-(void)setDelegate:(id<PRRangingSessionDelegate>)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
-(void)invalidate;
-(id<PRRangingSessionDelegate>)delegate;
-(void)setRangedPeer:(PRPeer *)arg1 ;
-(id)rangingConfigurationWithDeviceIndex:(unsigned long long)arg1 ;
-(void)requestInitialCollaborationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(PRPeer *)rangedPeer;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)sendDataToPeers:(id)arg1 ;
-(void)startRangingWithPeer:(id)arg1 ;
-(void)stopRangingWithPeer:(id)arg1 ;
-(void)pushCollaborationData:(id)arg1 ;
-(NSMutableSet *)sessionParticipants;
-(void)setSessionParticipants:(NSMutableSet *)arg1 ;
@end

