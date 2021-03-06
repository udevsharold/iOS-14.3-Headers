/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, NSData, NSNumber;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying> {

	unsigned long long _requestType;
	NSURL* _requestURL;
	NSDictionary* _requestHeaders;
	NSDictionary* _requestStringParams;
	NSData* _requestBody;
	NSDictionary* _responseHeaders;
	NSData* _responseBody;
	NSNumber* _responseStatusCode;
	NSDictionary* _timingData;

}

@property (assign,nonatomic) unsigned long long requestType;                //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                              //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,copy) NSDictionary * requestHeaders;                   //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (nonatomic,copy) NSDictionary * requestStringParams;              //@synthesize requestStringParams=_requestStringParams - In the implementation block
@property (nonatomic,copy) NSData * requestBody;                            //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                  //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,copy) NSData * responseBody;                           //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,copy) NSNumber * responseStatusCode;                   //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * timingData;                       //@synthesize timingData=_timingData - In the implementation block
-(NSDictionary *)timingData;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHeaders;
-(unsigned long long)requestType;
-(id)initWithURL:(id)arg1 type:(unsigned long long)arg2 headers:(id)arg3 stringParams:(id)arg4 body:(id)arg5 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)requestStringParams;
-(void)setRequestStringParams:(NSDictionary *)arg1 ;
-(void)setResponseStatusCode:(NSNumber *)arg1 ;
-(void)setRequestBody:(NSData *)arg1 ;
-(NSData *)responseBody;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSData *)requestBody;
-(NSURL *)requestURL;
-(BOOL)wantsIDSServer;
-(BOOL)wantsHTTPGet;
-(BOOL)allowDualDelivery;
-(BOOL)wantsManagedRetries;
-(BOOL)wantsBodySignature;
-(BOOL)wantsIDSSignatures;
-(BOOL)isIDSMessage;
-(id)messageBodyDataOverride;
-(NSNumber *)responseStatusCode;
-(void)setResponseBody:(NSData *)arg1 ;
-(id)additionalMessageHeaders;
-(id)additionalQueryStringParameters;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseBody:(id)arg1 ;
-(void)handleResponseStatus:(unsigned long long)arg1 ;
@end

