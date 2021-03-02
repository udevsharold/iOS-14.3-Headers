/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSObject;

@interface PLCloudResourcePruneManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	BOOL _stopped;
	NSObject*<OS_dispatch_queue> _workQueue;

}
-(id)init;
-(long long)_totalPurgeableAmountForUrgency:(long long)arg1 ;
-(long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2 ;
-(CFDictionaryRef)_handleCacheDeletePurge:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(CFDictionaryRef)_handleCacheDeletePurgeable:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(void)_handleCacheDeleteRegistration;
-(void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)pruneStatusForDebug:(BOOL)arg1 ;
-(long long)_localResourcesSize;
-(long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(/*^block*/id)arg3 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(long long)diskSpaceToPrune;
-(id)_predicateForPruneWithUrgency:(long long)arg1 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)dealloc;
-(long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)updateCacheDeletePurgeableAmount;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(void)stop;
@end
