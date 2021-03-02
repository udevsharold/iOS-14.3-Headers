/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKKeyValueDomainServerInterface.h>

@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface> {

	HDKeyValueDomain* _keyValueDomain;

}
+(id)requiredEntitlements;
+(id)taskIdentifier;
+(id)_entitlementForCategory:(long long)arg1 ;
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_numberForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_allValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1 ;
-(id)remoteInterface;
-(void)remote_dateForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_stringForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(Class)_keyValueEntityClass;
-(void)remote_dataForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setValueForAllKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
