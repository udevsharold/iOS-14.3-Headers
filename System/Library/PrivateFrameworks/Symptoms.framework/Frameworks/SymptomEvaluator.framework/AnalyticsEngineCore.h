/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableDictionary, NSObject, NSDate;

@interface AnalyticsEngineCore : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableDictionary* spaces;
	NSObject*<OS_dispatch_source> mem_alerts;
	unsigned pending_mem_alerts;
	NSDate* lastWorkspaceReset;
	BOOL _enableAdHocDatabaseSave;
	BOOL _isHelper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isHelper;                                     //@synthesize isHelper=_isHelper - In the implementation block
+(id)queue;
-(void)shutdown;
-(BOOL)isHelper;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)dealloc;
-(BOOL)handlesEntity:(id)arg1 ;
-(id)getOption:(id)arg1 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)setIsHelper:(BOOL)arg1 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(void)clientTransactionsRelease;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)clientEvent:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(void)_saveAndUnloadAllState;
-(void)performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)extractQueryStringFrom:(id)arg1 isGeneric:(BOOL*)arg2 ;
@end
