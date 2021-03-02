/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class NSData, ICStoreRequestContext;

@interface ICMachineDataOperation : ICAsyncOperation {

	NSData* _data;
	ICStoreRequestContext* _requestContext;
	long long _protocolVersion;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
-(long long)protocolVersion;
-(NSData *)data;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(ICStoreRequestContext *)requestContext;
-(void)setData:(NSData *)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
@end
