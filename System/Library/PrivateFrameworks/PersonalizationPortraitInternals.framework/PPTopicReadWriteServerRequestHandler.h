/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPTopicReadWriteServerProtocol.h>

@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)clearWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteAllTopicsWithTopicId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

