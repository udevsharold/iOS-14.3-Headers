/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject {

	BOOL _wasSplit;
	BOOL _reachedMinSplit;
	BOOL _wasFixed;
	CPLChangeBatch* _batch;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CPLChangeBatch * batch;                     //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL wasSplit;                              //@synthesize wasSplit=_wasSplit - In the implementation block
@property (assign,nonatomic) BOOL reachedMinSplit;                       //@synthesize reachedMinSplit=_reachedMinSplit - In the implementation block
@property (assign,nonatomic) BOOL wasFixed;                              //@synthesize wasFixed=_wasFixed - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(CPLChangeBatch *)batch;
-(void)setWasSplit:(BOOL)arg1 ;
-(id)init;
-(id)lastAddedRecord;
-(BOOL)reachedMinSplit;
-(void)setReachedMinSplit:(BOOL)arg1 ;
-(BOOL)wasSplit;
-(void)addRecord:(id)arg1 ;
-(BOOL)wasFixed;
-(id)description;
-(void)setWasFixed:(BOOL)arg1 ;
-(id)batchesSplitForError;
-(void)incrementRetryCount;
-(void)setBatch:(CPLChangeBatch *)arg1 ;
-(unsigned long long)count;
@end

