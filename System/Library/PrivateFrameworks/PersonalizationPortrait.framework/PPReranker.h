/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPNamedEntityStore, PPClientFeedbackHelper, _PASLock, NSString;

@interface PPReranker : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPNamedEntityStore* _namedEntityStore;
	PPClientFeedbackHelper* _clientFeedbackHelper;
	_PASLock* _dataLock;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_lazyLoadEntityRankMapWithError:(id*)arg1 ;
-(id)rerankedMediaItems:(id)arg1 error:(id*)arg2 ;
-(id)initWithNamedEntityStore:(id)arg1 ;
@end
