/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedNetworkBehavior;

@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (assign,nonatomic) BOOL rollbacksOnly; 
@property (assign,nonatomic) BOOL hasRollbacksOnly; 
@property (nonatomic,retain) TRIPersistedNetworkBehavior * networkBehavior; 
@property (assign,nonatomic) BOOL hasNetworkBehavior; 
+(id)descriptor;
@end
