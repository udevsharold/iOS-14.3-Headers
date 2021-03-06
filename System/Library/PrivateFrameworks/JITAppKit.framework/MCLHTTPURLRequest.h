/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCLURLDataLoaderTask, NSURL, NSString, NSDictionary, NSError, NSData;

@interface MCLHTTPURLRequest : NSObject {

	MCLURLDataLoaderTask* _task;
	NSURL* _url;
	NSString* _httpMethod;
	NSDictionary* _httpHeaders;
	double _timeout;
	unsigned long long _statusCode;
	NSError* _error;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                        //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                   //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
-(void)handleCompletion:(id)arg1 ;
-(unsigned long long)statusCode;
-(NSDictionary *)httpHeaders;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSError *)error;
-(id)init;
-(void)sendData:(id)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSData *)data;
-(double)timeout;
-(void)send;
-(NSString *)httpMethod;
-(void)cancel;
-(void)setData:(NSData *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)sendText:(id)arg1 ;
@end

