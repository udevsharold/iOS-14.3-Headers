/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDDaemonTransaction, NSString, HDIDSMessageCenter, HDIDSParticipant, NSData, NSDictionary;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {

	HDDaemonTransaction* _transaction;
	BOOL _doNotCompress;
	BOOL _forceLocalDelivery;
	BOOL _sent;
	unsigned short _requestMessageID;
	unsigned short _messageID;
	NSString* _requestIdsIdentifier;
	HDIDSMessageCenter* _messageCenter;
	HDIDSParticipant* _toParticipant;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * requestIdsIdentifier;                   //@synthesize requestIdsIdentifier=_requestIdsIdentifier - In the implementation block
@property (nonatomic,retain) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short requestMessageID;                 //@synthesize requestMessageID=_requestMessageID - In the implementation block
@property (getter=isSent) BOOL sent;                                          //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                        //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) HDIDSParticipant * toParticipant;                //@synthesize toParticipant=_toParticipant - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                          //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                   //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,retain) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                     //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                              //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;               //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                              //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL forceLocalDelivery;                         //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
-(BOOL)isSent;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)init;
-(NSData *)data;
-(void)dealloc;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)send;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(NSString *)description;
-(void)setData:(NSData *)arg1 ;
-(void)setSent:(BOOL)arg1 ;
-(unsigned long long)priority;
-(NSString *)idsIdentifier;
-(unsigned short)messageID;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(double)sendTimeout;
-(HDIDSParticipant *)toParticipant;
-(id)nanoSyncDescription;
-(void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2 ;
-(void)configureWithStatus:(id)arg1 syncStore:(id)arg2 ;
-(BOOL)doNotCompress;
-(BOOL)forceLocalDelivery;
-(unsigned short)requestMessageID;
-(void)setDoNotCompress:(BOOL)arg1 ;
-(void)setForceLocalDelivery:(BOOL)arg1 ;
-(void)setToParticipant:(HDIDSParticipant *)arg1 ;
-(void)setRequestMessageID:(unsigned short)arg1 ;
-(NSString *)requestIdsIdentifier;
-(void)setRequestIdsIdentifier:(NSString *)arg1 ;
@end

