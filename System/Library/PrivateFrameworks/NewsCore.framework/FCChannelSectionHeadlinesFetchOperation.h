/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCChannelProviding;
@class FCCloudContext, NSString, NSArray, FCEdgeCacheHint;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	FCCloudContext* _cloudContext;
	NSString* _channelID;
	unsigned long long _maxHeadlinesCount;
	unsigned long long _maxHeadlinesPerFeed;
	double _fetchWindow;
	double _sectionsCacheTimeToLive;
	id<FCChannelProviding> _channel;
	NSArray* _sectionHeadlinesGroups;
	FCEdgeCacheHint* _edgeCacheHint;

}

@property (nonatomic,readonly) FCCloudContext * cloudContext;                       //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesCount;                //@synthesize maxHeadlinesCount=_maxHeadlinesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long maxHeadlinesPerFeed;              //@synthesize maxHeadlinesPerFeed=_maxHeadlinesPerFeed - In the implementation block
@property (nonatomic,readonly) double fetchWindow;                                  //@synthesize fetchWindow=_fetchWindow - In the implementation block
@property (nonatomic,readonly) double sectionsCacheTimeToLive;                      //@synthesize sectionsCacheTimeToLive=_sectionsCacheTimeToLive - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> channel;                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSArray * sectionHeadlinesGroups;                        //@synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups - In the implementation block
@property (nonatomic,readonly) FCEdgeCacheHint * edgeCacheHint;                     //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (copy) id fetchCompletionHandler;                                         //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(FCEdgeCacheHint *)edgeCacheHint;
-(NSString *)channelID;
-(id)init;
-(id<FCChannelProviding>)channel;
-(unsigned long long)maxHeadlinesCount;
-(FCCloudContext *)cloudContext;
-(NSArray *)sectionHeadlinesGroups;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
-(id)_configurationPromise;
-(id)_channelAndSectionTagsPromiseWithChannelID:(id)arg1 ;
-(double)sectionsCacheTimeToLive;
-(id)_channelPromiseWithTagsByID:(id)arg1 parentChannelID:(id)arg2 ;
-(id)_sectionsPromiseWithTagsByID:(id)arg1 sectionIDs:(id)arg2 ;
-(id)_feedItemsPromiseWithChannel:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3 ;
-(id)_headlinesPromiseWithFeedItems:(id)arg1 sectionsByID:(id)arg2 configuration:(id)arg3 ;
-(double)fetchWindow;
-(id)_createFeedRequestWithFeedID:(id)arg1 feedRange:(id)arg2 ;
-(id)_feedItemsTransformationWithConfiguration:(id)arg1 ;
-(id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg1 sectionIDsByFeedID:(id)arg2 sectionsByID:(id)arg3 ;
-(unsigned long long)maxHeadlinesPerFeed;
-(id)initWithCloudContext:(id)arg1 channelID:(id)arg2 maxHeadlinesCount:(unsigned long long)arg3 maxHeadlinesPerFeed:(unsigned long long)arg4 fetchWindow:(double)arg5 sectionsCacheTimeToLive:(double)arg6 edgeCacheHint:(id)arg7 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
@end

