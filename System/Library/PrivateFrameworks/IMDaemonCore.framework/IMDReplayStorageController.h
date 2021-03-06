/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject {

	NSString* _filePath;
	IDSKVStore* _store;

}

@property (nonatomic,retain) IDSKVStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(NSString *)filePath;
-(IDSKVStore *)store;
-(void)setStore:(IDSKVStore *)arg1 ;
-(void)dealloc;
-(id)initWithFilePath:(id)arg1 ;
-(BOOL)storeDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id*)arg2 ;
-(void)deleteReplayDB;
@end

