/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(BOOL)isMigrationNeeded;
-(void)dealloc;
-(void)cancelDeferredExit;
-(void)deferExit;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportMigrationFailure;
-(unsigned)userDataDisposition;
-(long long)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 ;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(id)previousBuildVersion;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
-(id)orderedPluginIdentifiers;
-(id)migrationPhaseDescription;
@end
