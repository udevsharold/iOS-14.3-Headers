/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSDeviceSourced.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@protocol OS_os_transaction;
@class NSString, NMSMessageCenter, NSData, NMSOutgoingResponse, NSObject, IDSMessageContext;

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {

	BOOL _expectsResponse;
	unsigned short _messageID;
	NSString* sourceDeviceID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	NMSOutgoingResponse* _response;
	NSObject*<OS_os_transaction> _transaction;
	id _pbRequest;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;               //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                  //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) id pbRequest;                                          //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) NMSOutgoingResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceID; 
@property (nonatomic,retain) IDSMessageContext * idsContext;                        //@synthesize idsContext=_idsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowsUnrepliedRequestsForUnitTesting;
+(void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(id)init;
-(NSData *)data;
-(NMSOutgoingResponse *)response;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)dealloc;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setResponse:(NMSOutgoingResponse *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSString *)sourceDeviceID;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSString *)description;
-(void)setData:(NSData *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(unsigned long long)priority;
-(NSString *)idsIdentifier;
-(unsigned short)messageID;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(id)pbRequest;
-(void)setPbRequest:(id)arg1 ;
-(void)configureResponse;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end
