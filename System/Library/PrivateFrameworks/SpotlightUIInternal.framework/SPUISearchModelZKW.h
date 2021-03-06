/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class NSObject, SPZKWSession;

@interface SPUISearchModelZKW : SPUISearchModel {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	BOOL _shouldCacheResults;
	BOOL _newQuery;
	SPZKWSession* _session;

}

@property (nonatomic,retain) SPZKWSession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(SPZKWSession *)arg1 ;
-(SPZKWSession *)session;
-(id)init;
-(void)dealloc;
-(void)updateWithQueryContext:(id)arg1 ;
@end

