/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PLJournalManagerCore : NSObject {

	NSURL* _baseURL;
	NSURL* _historyTokenURL;

}
+(id)payloadClasses;
+(void)validatePayloadClassesForManagedObjectModel:(id)arg1 ;
+(BOOL)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)appendSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 changedKeys:(id)arg3 error:(id*)arg4 ;
+(id)_objectEnumeratorForJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithBaseURL:(id)arg1 ;
-(BOOL)saveHistoryToken:(id)arg1 error:(id*)arg2 ;
@end

