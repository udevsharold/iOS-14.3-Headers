/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting>
@required
-(void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
-(void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2;

@end
