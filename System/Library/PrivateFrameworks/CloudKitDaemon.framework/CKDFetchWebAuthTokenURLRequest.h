/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {

	NSString* _APIToken;
	/*^block*/id _tokenFetchedBlock;

}

@property (nonatomic,copy) NSString * APIToken;               //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id tokenFetchedBlock;              //@synthesize tokenFetchedBlock=_tokenFetchedBlock - In the implementation block
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)generateRequestOperations;
-(void)setTokenFetchedBlock:(id)arg1 ;
-(id)tokenFetchedBlock;
@end
