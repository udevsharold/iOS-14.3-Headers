/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {

	/*^block*/id _quotaFetchedBlock;

}

@property (nonatomic,copy) id quotaFetchedBlock;              //@synthesize quotaFetchedBlock=_quotaFetchedBlock - In the implementation block
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)generateRequestOperations;
-(void)setQuotaFetchedBlock:(id)arg1 ;
-(id)quotaFetchedBlock;
@end
