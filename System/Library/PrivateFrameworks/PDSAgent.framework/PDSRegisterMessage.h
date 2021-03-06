/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTIDSMessage.h>

@class PDSProtoBatchRegisterReq, PDSProtoBatchRegisterResp;

@interface PDSRegisterMessage : FTIDSMessage {

	PDSProtoBatchRegisterReq* _protoRequest;
	PDSProtoBatchRegisterResp* _protoResponse;
	unsigned long long _regReason;

}

@property (nonatomic,retain) PDSProtoBatchRegisterReq * protoRequest;                //@synthesize protoRequest=_protoRequest - In the implementation block
@property (nonatomic,retain) PDSProtoBatchRegisterResp * protoResponse;              //@synthesize protoResponse=_protoResponse - In the implementation block
@property (assign,nonatomic) unsigned long long regReason;                           //@synthesize regReason=_regReason - In the implementation block
-(id)bagKey;
-(BOOL)wantsIDSProtocolVersion;
-(BOOL)requiresPushTokenKeys;
-(double)anisetteHeadersTimeout;
-(id)messageBodyDataOverride;
-(id)overrideContentType;
-(id)parsedIDSMessageResult;
-(BOOL)wantsClientInfo;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(void)handleResponseBody:(id)arg1 ;
-(BOOL)wantsUDID;
-(void)setProtoRequest:(PDSProtoBatchRegisterReq *)arg1 ;
-(unsigned long long)regReason;
-(void)setRegReason:(unsigned long long)arg1 ;
-(PDSProtoBatchRegisterResp *)protoResponse;
-(PDSProtoBatchRegisterReq *)protoRequest;
-(void)setProtoResponse:(PDSProtoBatchRegisterResp *)arg1 ;
@end

