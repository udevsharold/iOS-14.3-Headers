/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	NSMutableIndexSet* _unusedIndexes;
	long long _usedMax;
	unsigned long long _fetchTimestamp;

}
+(void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 ;
+(unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1 ;
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3 ;
+(void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
-(void)getAvailableThumbnailIndexesFromLibrary:(id)arg1 ;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 ;
@end

