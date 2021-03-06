/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMEnvironment : NSObject {

	BOOL _testMigrationInfrastructureOnly;

}

@property (assign,nonatomic) BOOL testMigrationInfrastructureOnly;              //@synthesize testMigrationInfrastructureOnly=_testMigrationInfrastructureOnly - In the implementation block
+(id)sharedInstance;
+(BOOL)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2 ;
-(id)buildVersion;
-(void)setLastMigrationResultsPref:(id)arg1 ;
-(BOOL)isDeviceUsingEphemeralStorage;
-(void)setMigrationPluginResultsPref:(id)arg1 ;
-(id)lastBuildVersionPref;
-(void)setUserDataDispositionPref:(id)arg1 ;
-(void)blockUntilPreferencesFlush;
-(BOOL)suppressMigrationPluginWrapperExitMarkerPref;
-(void)setLastBuildVersionPref:(id)arg1 ;
-(void)setTestMigrationInfrastructureOnly:(BOOL)arg1 ;
-(id)contextPath;
-(id)continuousIntegrationMarkerPref;
-(BOOL)testMigrationInfrastructureOnly;
-(void)setContext:(id)arg1 ;
-(id)context;
-(id)lastMigrationResultsPref;
-(id)migrationPluginResultsPref;
-(id)userDataDispositionPref;
-(BOOL)waitForExecutePluginsSignalMarkerPref;
-(BOOL)implementMigrationPluginResults;
-(void)clearContext;
@end

