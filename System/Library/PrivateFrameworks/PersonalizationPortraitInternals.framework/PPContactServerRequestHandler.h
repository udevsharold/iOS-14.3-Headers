/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPContactServerProtocol.h>

@protocol PPContactClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, PPLocalContactStore, NSString;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {

	id<PPContactClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	AB _isTerminated;
	PPLocalContactStore* _store;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(NSString *)clientProcessName;
-(void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setIsTerminated;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)unblockPendingQueries;
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
@end

