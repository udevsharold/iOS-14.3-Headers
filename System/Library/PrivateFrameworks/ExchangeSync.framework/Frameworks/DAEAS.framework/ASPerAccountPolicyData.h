/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ASPerAccountPolicyData : NSObject {

	NSString* _accountPersistentUUID;

}

@property (nonatomic,readonly) NSString * policyKey; 
@property (nonatomic,readonly) NSDictionary * policyValues; 
-(id)description;
-(NSString *)policyKey;
-(id)initWithAccountPersistentUUID:(id)arg1 ;
-(NSDictionary *)policyValues;
-(void)setPolicyKey:(id)arg1 policyValues:(id)arg2 ;
@end

