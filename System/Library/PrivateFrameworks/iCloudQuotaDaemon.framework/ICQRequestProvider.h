/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount;

@interface ICQRequestProvider : NSObject {

	ACAccount* _account;

}
+(BOOL)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2 ;
+(void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2 ;
+(id)stringTimeOfLastBackup;
-(id)initWithAccount:(id)arg1 ;
-(void)addCommonHeadersToRequest:(id)arg1 ;
-(id)urlForQuotaKey:(id)arg1 ;
@end

