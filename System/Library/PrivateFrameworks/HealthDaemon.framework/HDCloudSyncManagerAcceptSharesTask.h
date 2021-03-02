/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncManagerPipelineTask.h>

@class HDCloudSyncShareSetupMetadata, HDCloudSyncPipelineStageAcceptShares, NSArray;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {

	HDCloudSyncShareSetupMetadata* _shareSetupMetadata;
	HDCloudSyncPipelineStageAcceptShares* _acceptSharesPipelineStage;

}

@property (nonatomic,copy,readonly) NSArray * acceptedShares; 
-(id)pipelineForRepository:(id)arg1 ;
-(NSArray *)acceptedShares;
-(id)initWithManager:(id)arg1 context:(id)arg2 shareSetupMetadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)requiresExistingShareOwnerParticipant;
@end
