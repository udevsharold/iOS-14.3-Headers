/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PLDeferredPhotoFinalizer;

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker {

	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;

}
+(id)workerWithLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)_predicateToFetchDeferredAssets;
-(id)deferredPhotoFinalizer;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasPendingJobs;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
-(id)managedObjectIDsNeedingProcessing;
@end
