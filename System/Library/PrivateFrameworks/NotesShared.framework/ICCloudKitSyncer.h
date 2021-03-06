/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICCloudKitSyncerDelegate;
@interface ICCloudKitSyncer : NSObject {

	id<ICCloudKitSyncerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICCloudKitSyncerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveUnsyncedObjects;
-(void)setDelegate:(id<ICCloudKitSyncerDelegate>)arg1 ;
-(id<ICCloudKitSyncerDelegate>)delegate;
@end

