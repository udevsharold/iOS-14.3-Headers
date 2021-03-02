/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SSLogFileOptions, NSObject;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	BOOL _writeToDisk;
	NSString* _category;
	unsigned long long _environment;
	NSString* _subsystem;
	SSLogFileOptions* _backingLogFileOptions;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;
	NSString* _outputDirectory;
	NSString* _outputFilename;

}

@property (nonatomic,retain) SSLogFileOptions * backingLogFileOptions;                      //@synthesize backingLogFileOptions=_backingLogFileOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * outputDirectory;                                      //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                       //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (assign,nonatomic) BOOL writeToDisk;                                              //@synthesize writeToDisk=_writeToDisk - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) SSLogFileOptions * logFileOptions; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) BOOL shouldLogToDisk; 
+(id)sharedFollowUpConfig;
+(id)sharedAccountsCookiesConfig;
+(id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharedDaemonConfig;
+(id)sharedAskPermissionExtensionConfig;
+(id)sharediTunesStoreConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedStoreServicesConfig;
+(BOOL)_deviceIsRunningSeedBuild;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedPushNotificationConfig;
+(id)sharedStoreServicesConfigOversize;
+(BOOL)_deviceIsRunningInternalBuild;
+(id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharedConfig;
+(id)sharedBagConfig;
+(id)sharedFairPlayAnisetteConfig;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)sharediTunesStoreConfigOversize;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharedAccountsAuthenticationConfig;
+(id)sharedDaemonConfigOversize;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedFeatureEnablerMigrationConfig;
+(id)sharedBagCacheConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsConfig;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(id)sharedWriteToDiskConfig;
+(id)sharedPrivacyConfig;
-(BOOL)debugLogsEnabled;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(void)setSubsystem:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(SSLogFileOptions *)logFileOptions;
-(NSString *)subsystem;
-(BOOL)writeToDisk;
-(BOOL)shouldLogToDisk;
-(NSString *)category;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setOutputDirectory:(NSString *)arg1 ;
-(void)setWriteToDisk:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBackingLogFileOptions:(SSLogFileOptions *)arg1 ;
-(SSLogFileOptions *)backingLogFileOptions;
-(BOOL)shouldLog;
-(NSObject*<OS_os_log>)OSLogObject;
-(unsigned long long)environment;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(NSString *)outputFilename;
-(NSString *)outputDirectory;
@end
