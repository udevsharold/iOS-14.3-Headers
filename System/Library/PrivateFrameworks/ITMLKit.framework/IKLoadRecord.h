/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, ISURLOperation, NSString, NSUUID, NSURLSessionDataTask;

@interface IKLoadRecord : NSObject {

	BOOL _loadCompleted;
	NSURL* _URL;
	ISURLOperation* _opertaion;
	NSString* _scriptStr;
	NSUUID* _requestID;
	NSURLSessionDataTask* _dataTask;

}

@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ISURLOperation * opertaion;                   //@synthesize opertaion=_opertaion - In the implementation block
@property (assign,nonatomic) BOOL loadCompleted;                           //@synthesize loadCompleted=_loadCompleted - In the implementation block
@property (nonatomic,retain) NSString * scriptStr;                         //@synthesize scriptStr=_scriptStr - In the implementation block
@property (nonatomic,retain) NSUUID * requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
-(void)setRequestID:(NSUUID *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(NSUUID *)requestID;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSURL *)URL;
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
@end

