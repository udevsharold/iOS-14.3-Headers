/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <PowerUI/PowerUI-Structs.h>
@class TRIClient, NSString, TRITrackingId, NSObject;

@interface PowerUITrialManager : NSObject {

	os_unfair_lock_s _lock;
	TRIClient* _trialClient;
	NSString* _treatmentID;
	NSString* _experimentID;
	NSString* _trialNamespaceName;
	TRITrackingId* _trialTrackingID;
	NSObject*<OS_os_log> _log;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                      //@synthesize lock=_lock - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                      //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) TRIClient * trialClient;                    //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) NSString * treatmentID;                               //@synthesize treatmentID=_treatmentID - In the implementation block
@property (retain) NSString * experimentID;                              //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * trialNamespaceName;              //@synthesize trialNamespaceName=_trialNamespaceName - In the implementation block
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSString *)experimentID;
-(NSObject*<OS_os_log>)log;
-(void)setTreatmentID:(NSString *)arg1 ;
-(NSString *)treatmentID;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(TRIClient *)trialClient;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(id)initWithDefaultsDomain:(id)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(os_unfair_lock_s)lock;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(id)trialFactor:(id)arg1 ;
-(id)loadModelFromPath:(id)arg1 deleteExistingFiles:(BOOL)arg2 ;
-(void)loadTrialUpdates;
-(id)loadTrialEngageModelByDeletingExistingModel:(BOOL)arg1 ;
-(id)loadTrialDurationModelByDeletingExistingModel:(BOOL)arg1 ;
-(double)loadTrialThreshold;
-(double)loadTrialAdjustedHours;
-(double)loadTrialMinInputChargeDuration;
-(NSString *)trialNamespaceName;
-(void)setTrialNamespaceName:(NSString *)arg1 ;
@end

