/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SDConnectionConfiguration, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject {

	AI _outBatchCount;
	NSMutableDictionary* _queryTasks;
	SDConnectionConfiguration* _configuration;
	NSMutableOrderedSet* _pausedTasks;

}

@property (nonatomic,readonly) unsigned outBatchCount; 
@property (nonatomic,retain) NSMutableDictionary * queryTasks;                       //@synthesize queryTasks=_queryTasks - In the implementation block
@property (nonatomic,retain) SDConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pausedTasks;                      //@synthesize pausedTasks=_pausedTasks - In the implementation block
-(NSMutableOrderedSet *)pausedTasks;
-(unsigned)outBatchCount;
-(id)bundleID;
-(void)dealloc;
-(SDConnectionConfiguration *)configuration;
-(id)queryTask:(long long)arg1 ;
-(void)setQueryTask:(id)arg1 forQueryID:(long long)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_didReceiveResultsBatchCompletion;
-(NSMutableDictionary *)queryTasks;
-(void)setPausedTasks:(NSMutableOrderedSet *)arg1 ;
-(void)setConfiguration:(SDConnectionConfiguration *)arg1 ;
-(id)initWithConnectionConfiguration:(id)arg1 ;
-(void)cancelQueryTask:(long long)arg1 ;
-(void)setQueryTasks:(NSMutableDictionary *)arg1 ;
-(BOOL)searchInternal;
-(id)protectionClass;
-(void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2 ;
-(void)cancelQueryTasks;
@end

