/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKHealthRecordsAccountInfoStoreServer.h>

@class NSString;

@interface HDHealthRecordsAccountInfoServer : HDStandardTaskServer <HKHealthRecordsAccountInfoStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(void)remote_determineMedicalRecordsAccountInfoStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
@end
