/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSArray;

@interface KTClientRequest : NSObject {

	unsigned long long _type;
	NSString* _application;
	NSString* _uri;
	NSData* _accountID;
	NSArray* _serverLoggableDatas;
	NSArray* _clientLoggableDatas;
	NSData* _queryRequest;
	NSData* _queryResponse;

}

@property (assign) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (retain) NSString * application;                     //@synthesize application=_application - In the implementation block
@property (retain) NSString * uri;                             //@synthesize uri=_uri - In the implementation block
@property (retain) NSData * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSArray * serverLoggableDatas;              //@synthesize serverLoggableDatas=_serverLoggableDatas - In the implementation block
@property (retain) NSArray * clientLoggableDatas;              //@synthesize clientLoggableDatas=_clientLoggableDatas - In the implementation block
@property (retain) NSData * queryRequest;                      //@synthesize queryRequest=_queryRequest - In the implementation block
@property (retain) NSData * queryResponse;                     //@synthesize queryResponse=_queryResponse - In the implementation block
-(NSString *)uri;
-(NSData *)accountID;
-(NSString *)application;
-(void)setType:(unsigned long long)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(void)setAccountID:(NSData *)arg1 ;
-(unsigned long long)type;
-(void)setApplication:(NSString *)arg1 ;
-(void)setServerLoggableDatas:(NSArray *)arg1 ;
-(void)setClientLoggableDatas:(NSArray *)arg1 ;
-(void)setQueryResponse:(NSData *)arg1 ;
-(void)setQueryRequest:(NSData *)arg1 ;
-(NSArray *)clientLoggableDatas;
-(NSArray *)serverLoggableDatas;
-(NSData *)queryRequest;
-(NSData *)queryResponse;
-(id)initWithType:(unsigned long long)arg1 application:(id)arg2 uri:(id)arg3 accountID:(id)arg4 serverLoggableDatas:(id)arg5 ;
-(id)addValidateRequest:(id)arg1 dataStore:(id)arg2 error:(id*)arg3 ;
@end

