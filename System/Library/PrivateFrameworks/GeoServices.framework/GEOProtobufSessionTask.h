/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;
@class GEOProtobufSession, NSObject, NSError, PBCodable, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSString, GEOClientMetrics;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {

	Class _responseClass;
	id<GEODataSessionTask> _dataTask;
	GEOProtobufSession* _session;
	id<GEOProtobufSessionTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSError* _error;
	PBCodable* _response;
	unsigned _requestTypeCode;
	SCD_Struct_GE91 _requestKind;
	GEOApplicationAuditToken* _auditToken;
	BOOL _completedAsCancelled;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL completedAsCancelled; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) PBCodable * response; 
@property (nonatomic,readonly) SCD_Struct_GE91 requestKind; 
@property (nonatomic,readonly) Class responseClass;                                           //@synthesize responseClass=_responseClass - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> dataTask;                                 //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) GEOProtobufSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<GEOProtobufSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) BOOL completedAsCancelled;                                       //@synthesize completedAsCancelled=_completedAsCancelled - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) PBCodable * response;                                            //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned requestTypeCode;                                      //@synthesize requestTypeCode=_requestTypeCode - In the implementation block
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL receivedRNFNotification; 
-(unsigned long long)incomingPayloadSize;
-(SCD_Struct_GE91)requestKind;
-(unsigned long long)outgoingPayloadSize;
-(BOOL)mptcpNegotiated;
-(GEOClientMetrics *)clientMetrics;
-(BOOL)receivedRNFNotification;
-(unsigned long long)requestedMultipathServiceType;
-(NSString *)remoteAddressAndPort;
-(void)setSession:(GEOProtobufSession *)arg1 ;
-(unsigned)requestTypeCode;
-(id)initWithSession:(id)arg1 requestTypeCode:(unsigned)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 requestKind:(SCD_Struct_GE91)arg6 auditToken:(id)arg7 throttleToken:(id)arg8 ;
-(GEOProtobufSession *)session;
-(NSError *)error;
-(Class)responseClass;
-(id)init;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)completedAsCancelled;
-(PBCodable *)response;
-(BOOL)parseProtocolVersionWithReader:(id)arg1 ;
-(void)setCompletedAsCancelled:(BOOL)arg1 ;
-(void)setResponse:(PBCodable *)arg1 ;
-(void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3 ;
-(id<GEODataSessionTask>)dataTask;
-(void)_decodeResponseFromTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parseResponseFromResponseData:(id)arg1 ;
-(NSString *)description;
-(void)cancel;
-(BOOL)parseResponseTypeWithReader:(id)arg1 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(id)parseInnerProtobufFromData:(id)arg1 ;
-(void)start;
-(void)setDelegate:(id<GEOProtobufSessionTaskDelegate>)arg1 ;
-(void)setDataTask:(id<GEODataSessionTask>)arg1 ;
-(NSString *)debugDescription;
-(void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)parsePreambleWithReader:(id)arg1 ;
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<GEOProtobufSessionTaskDelegate>)delegate;
-(void)completeWithErrorCode:(long long)arg1 ;
@end

