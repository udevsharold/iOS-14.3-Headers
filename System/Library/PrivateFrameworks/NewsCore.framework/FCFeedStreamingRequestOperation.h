/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration, OS_dispatch_queue;
@class FCFeedDatabase, NSArray, NSObject, NSMutableArray, NSMutableDictionary;

@interface FCFeedStreamingRequestOperation : FCOperation {

	BOOL _throttled;
	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	FCFeedDatabase* _feedDatabase;
	NSArray* _feedRequests;
	long long _streamingType;
	unsigned long long _cutoffAtCount;
	long long _options;
	NSArray* _feedTransformations;
	/*^block*/id _streamingResultsHandler;
	/*^block*/id _requestCompletionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableArray* _feedRangeSteps;
	NSMutableDictionary* _aggregateFeedResponsesByFeedID;
	NSMutableArray* _aggregateFeedItems;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedRangeSteps;                                   //@synthesize feedRangeSteps=_feedRangeSteps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aggregateFeedResponsesByFeedID;              //@synthesize aggregateFeedResponsesByFeedID=_aggregateFeedResponsesByFeedID - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregateFeedItems;                               //@synthesize aggregateFeedItems=_aggregateFeedItems - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCCoreConfiguration> configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCFeedDatabase * feedDatabase;                                     //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                              //@synthesize feedRequests=_feedRequests - In the implementation block
@property (assign,nonatomic) long long streamingType;                                           //@synthesize streamingType=_streamingType - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                                    //@synthesize throttled=_throttled - In the implementation block
@property (assign,nonatomic) unsigned long long cutoffAtCount;                                  //@synthesize cutoffAtCount=_cutoffAtCount - In the implementation block
@property (assign,nonatomic) long long options;                                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * feedTransformations;                                       //@synthesize feedTransformations=_feedTransformations - In the implementation block
@property (nonatomic,copy) id streamingResultsHandler;                                          //@synthesize streamingResultsHandler=_streamingResultsHandler - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                         //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(NSArray *)feedRequests;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(NSArray *)feedTransformations;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(id)requestCompletionHandler;
-(FCFeedDatabase *)feedDatabase;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(unsigned long long)cutoffAtCount;
-(id)_feedRangeCoveredByRequests;
-(id)_feedRangeBrokenIntoSteps:(id)arg1 ;
-(void)setFeedRangeSteps:(NSMutableArray *)arg1 ;
-(void)setAggregateFeedResponsesByFeedID:(NSMutableDictionary *)arg1 ;
-(void)setAggregateFeedItems:(NSMutableArray *)arg1 ;
-(void)_startNextFetchStep;
-(NSMutableDictionary *)aggregateFeedResponsesByFeedID;
-(NSMutableArray *)aggregateFeedItems;
-(NSMutableArray *)feedRangeSteps;
-(void)_appendFeedResponses:(id)arg1 feedItems:(id)arg2 ;
-(id)streamingResultsHandler;
-(long long)streamingType;
-(void)setStreamingType:(long long)arg1 ;
-(void)setCutoffAtCount:(unsigned long long)arg1 ;
-(void)setStreamingResultsHandler:(id)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(BOOL)throttled;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCContentContext>)context;
-(long long)options;
@end

