/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDSleepHealthDaemonPluginServerInterface.h>

@class HDProfile, HDSHProfileExtension, HDHealthStoreClient, NSString;

@interface HDSHPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface> {

	HDProfile* _profile;
	HDSHProfileExtension* _profileExtension;
	HDHealthStoreClient* _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(id)diagnosticDescription;
-(id)remoteInterface;
-(void)remote_updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_startSleepTrackingSession;
-(void)remote_stopSleepTrackingSession;
-(void)remote_saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepSchedules:(id)arg3 error:(id*)arg4 ;
-(BOOL)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepDurationGoal:(id)arg3 error:(id*)arg4 ;
-(BOOL)_replaceSamples:(id)arg1 withSamples:(id)arg2 error:(id*)arg3 ;
-(void)_saveSleepTrackingSamplesAfterFirstUnlock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_insertSamplesWithClientSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteSamples:(id)arg1 error:(id*)arg2 ;
@end
