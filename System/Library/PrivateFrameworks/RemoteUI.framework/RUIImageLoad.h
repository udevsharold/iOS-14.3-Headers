/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSURLSessionDataTask, NSURL;

@interface RUIImageLoad : NSObject {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(void)dealloc;
-(void)start;
-(NSURL *)URL;
-(BOOL)receivedValidResponse:(id)arg1 ;
@end
