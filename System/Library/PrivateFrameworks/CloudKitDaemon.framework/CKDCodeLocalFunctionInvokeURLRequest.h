/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;
	NSURL* _resolvedBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                      //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) NSURL * resolvedBaseURL;                      //@synthesize resolvedBaseURL=_resolvedBaseURL - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                 //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(BOOL)allowsAnonymousAccount;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(long long)databaseScope;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)additionalHeaderValues;
-(NSURL *)resolvedBaseURL;
-(void)setResolvedBaseURL:(NSURL *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(long long)partitionType;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)url;
-(id)requestBodyStream;
-(BOOL)requestGETPreAuth;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(long long)serverType;
-(BOOL)shouldCompressBody;
-(Class)requestMessageClass;
-(id)serializedResultsCallback;
-(id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 resolvedBaseURL:(id)arg5 ;
-(void)setSerializedResultsCallback:(id)arg1 ;
@end

