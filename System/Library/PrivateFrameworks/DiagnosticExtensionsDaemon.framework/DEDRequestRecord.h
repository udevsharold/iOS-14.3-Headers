/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface DEDRequestRecord : NSObject {

	BOOL _isFailure;
	NSString* _URL;
	NSDate* _date;
	NSString* _method;
	long long _runtime;
	NSString* _requestHeader;
	NSString* _requestBody;
	NSString* _responseHeader;
	NSString* _responseBody;

}

@property (retain) NSString * requestBody;                 //@synthesize requestBody=_requestBody - In the implementation block
@property (retain) NSString * requestHeader;               //@synthesize requestHeader=_requestHeader - In the implementation block
@property (retain) NSString * responseHeader;              //@synthesize responseHeader=_responseHeader - In the implementation block
@property (retain) NSString * responseBody;                //@synthesize responseBody=_responseBody - In the implementation block
@property (retain) NSString * URL;                         //@synthesize URL=_URL - In the implementation block
@property (retain) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (retain) NSString * method;                      //@synthesize method=_method - In the implementation block
@property (assign) long long runtime;                      //@synthesize runtime=_runtime - In the implementation block
@property (assign) BOOL isFailure;                         //@synthesize isFailure=_isFailure - In the implementation block
-(void)setRequestBody:(NSString *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)method;
-(NSString *)responseBody;
-(long long)runtime;
-(NSString *)requestBody;
-(void)setMethod:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isFailure;
-(void)setResponseBody:(NSString *)arg1 ;
-(NSString *)URL;
-(void)setIsFailure:(BOOL)arg1 ;
-(id)formattedBody:(id)arg1 error:(id)arg2 ;
-(id)formattedRequestHeader:(id)arg1 session:(id)arg2 cookies:(id)arg3 ;
-(id)formattedResponseHeader:(id)arg1 ;
-(id)initWithURL:(id)arg1 httpMethod:(id)arg2 responseData:(id)arg3 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 session:(id)arg3 cookies:(id)arg4 body:(id)arg5 error:(id)arg6 ;
-(void)setRuntime:(long long)arg1 ;
-(NSString *)requestHeader;
-(void)setRequestHeader:(NSString *)arg1 ;
-(NSString *)responseHeader;
-(void)setResponseHeader:(NSString *)arg1 ;
@end

