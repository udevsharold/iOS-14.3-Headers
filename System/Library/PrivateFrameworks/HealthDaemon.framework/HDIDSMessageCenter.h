/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_source, HDIDSMessageCenterDelegate, OS_dispatch_queue;
@class HDDaemon, NSString, NSUUID, IDSService, NSMutableDictionary, HDIDSPersistentDictionary, NSObject;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate> {

	HDDaemon* _daemon;
	NSString* _serviceIdentifier;
	NSString* _shortServiceIdentifier;
	NSUUID* _pairingUUID;
	IDSService* _service;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _errorHandlers;
	NSMutableDictionary* _responseHandlers;
	NSMutableDictionary* _pbMapping;
	HDIDSPersistentDictionary* _persistentContextStore;
	double _nextExpireTimerFireDate;
	NSObject*<OS_dispatch_source> _expireTimer;
	AB _invalidated;
	id<HDIDSMessageCenterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<HDIDSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * idsService; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPersistentDictionaryWithURL:(id)arg1 ;
-(id)deviceForFromID:(id)arg1 ;
-(id)_logPrefix;
-(NSString *)serviceIdentifier;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)_queue;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3 ;
-(IDSService *)idsService;
-(void)_expireMessages;
-(void)cancelPendingRequestsWithMessageID:(unsigned short)arg1 device:(id)arg2 ;
-(void)_sendResponse:(id)arg1 ;
-(void)_handleError:(id)arg1 context:(id)arg2 ;
-(void)sendRequest:(id)arg1 ;
-(void)dealloc;
-(void)_updateExpireTimerWithTimestamp:(double)arg1 ;
-(void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(id)nanoSyncDevices;
-(void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(id)initWithIDSServiceIdentifier:(id)arg1 persistentDictionary:(id)arg2 queue:(id)arg3 daemon:(id)arg4 ;
-(void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2 ;
-(void)setDelegate:(id<HDIDSMessageCenterDelegate>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_pbMappingForMessageID:(unsigned short)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3 ;
-(void)invalidate;
-(id<HDIDSMessageCenterDelegate>)delegate;
-(void)resume;
@end

