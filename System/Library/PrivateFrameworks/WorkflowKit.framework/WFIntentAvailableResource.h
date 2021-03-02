/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAppInstalledResource.h>

@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource {

	BOOL _intentIsSynced;
	BOOL _actionRequiresRemoteExecution;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;              //@synthesize executionInfo=_executionInfo - In the implementation block
@property (nonatomic,readonly) BOOL intentIsSynced;                                //@synthesize intentIsSynced=_intentIsSynced - In the implementation block
@property (nonatomic,readonly) BOOL actionRequiresRemoteExecution;                 //@synthesize actionRequiresRemoteExecution=_actionRequiresRemoteExecution - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isSyncedFromOtherDevice:(BOOL)arg3 ;
-(BOOL)intentIsEligibleForRemoteExecution;
-(BOOL)intentIsLocallyAvailable;
-(void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1 ;
-(INIntentExecutionInfo *)executionInfo;
-(BOOL)intentIsSynced;
-(BOOL)actionRequiresRemoteExecution;
@end
