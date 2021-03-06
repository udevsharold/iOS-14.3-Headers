/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class SPClientSession, NSObject, NSString;

@interface SPUISearchModelGeneral : SPUISearchModel {

	SPClientSession* _session;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) SPClientSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * rankingDebugLog; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(SPClientSession *)arg1 ;
-(void)clear;
-(SPClientSession *)session;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)activate;
-(id)init;
-(void)updatesDisabled;
-(void)deactivate;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(BOOL)queryInProgress;
-(BOOL)forceStableResults;
-(long long)maxUISuggestions;
-(NSString *)rankingDebugLog;
-(void)_setInfinitePatience:(BOOL)arg1 ;
-(void)setForceStableResults:(BOOL)arg1 ;
-(void)updateWithQueryContext:(id)arg1 ;
-(void)updatesEnabled;
-(BOOL)infinitePatience;
-(void)setMaxUISuggestions:(long long)arg1 ;
@end

