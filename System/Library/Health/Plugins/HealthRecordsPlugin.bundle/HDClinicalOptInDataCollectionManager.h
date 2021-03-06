/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSNumber, HDPeriodicActivity, NSObject, HDDaemonTransaction, HDHealthRecordsProfileExtension, HDProfile, HDClinicalOptInStudy, NSString;

@interface HDClinicalOptInDataCollectionManager : NSObject <HDPeriodicActivityDelegate> {

	NSNumber* _overriddenCollectsClinicalOptInData;
	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;
	HDDaemonTransaction* _transaction;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	HDClinicalOptInStudy* _study;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInStudy * study;                                           //@synthesize study=_study - In the implementation block
@property (nonatomic,readonly) BOOL collectsClinicalOptInData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_optInJSONForBuild:(id)arg1 extractionRulesVersion:(id)arg2 FHIRVersion:(id)arg3 resource:(id)arg4 ;
-(void)_queue_submitFetchedResources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)collectsClinicalOptInData;
-(void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)enableHealthCloudStudy;
-(HDClinicalOptInStudy *)study;
-(HDProfile *)profile;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_updateSubmittedAnchors:(id)arg1 accounts:(id)arg2 error:(id*)arg3 ;
-(void)_queue_triggerClinicalOptInDataCollectionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(void)setCollectsClinicalOptInData:(BOOL)arg1 ;
-(void)_queue_submitAnalyticsForResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)_queue_submitOptInResourcesForAccounts:(id)arg1 batchCountLimit:(long long)arg2 batchSizeLimit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithProfileExtension:(id)arg1 ;
@end

