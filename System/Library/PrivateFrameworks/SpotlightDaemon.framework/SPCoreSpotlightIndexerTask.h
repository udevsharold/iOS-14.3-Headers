/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSIndexJob, NSArray;

@interface SPCoreSpotlightIndexerTask : NSObject {

	BOOL _shouldResumeOnFailure;
	CSIndexJob* _job;
	NSArray* _indexers;
	NSArray* _bundleIDs;
	NSArray* _completedBundleIDs;
	unsigned long long _dataMigrationStage;

}

@property (nonatomic,readonly) CSIndexJob * job;                                 //@synthesize job=_job - In the implementation block
@property (nonatomic,readonly) NSArray * indexers;                               //@synthesize indexers=_indexers - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                                //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * completedBundleIDs;                       //@synthesize completedBundleIDs=_completedBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long dataMigrationStage;              //@synthesize dataMigrationStage=_dataMigrationStage - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeOnFailure;                         //@synthesize shouldResumeOnFailure=_shouldResumeOnFailure - In the implementation block
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(NSArray *)indexers;
-(void)setCompletedBundleIDs:(NSArray *)arg1 ;
-(NSArray *)completedBundleIDs;
-(void)setShouldResumeOnFailure:(BOOL)arg1 ;
-(unsigned long long)dataMigrationStage;
-(id)initWithIndexJob:(id)arg1 indexers:(id)arg2 ;
-(CSIndexJob *)job;
-(void)setDataMigrationStage:(unsigned long long)arg1 ;
-(BOOL)shouldResumeOnFailure;
@end

