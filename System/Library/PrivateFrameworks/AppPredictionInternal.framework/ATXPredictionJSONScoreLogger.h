/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXPredictionScoreLogger.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface ATXPredictionJSONScoreLogger : NSObject <ATXPredictionScoreLogger> {

	NSMutableDictionary* _history;
	unsigned char _consumerSubType;
	NSMutableArray* _subscoreHistories;
	NSObject*<OS_dispatch_queue> _fastQueue;
	NSObject*<OS_dispatch_queue> _slowQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setConsumerSubType:(unsigned char)arg1 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)flush;
-(void)setAssetVersion:(unsigned long long)arg1 ;
-(void)setCacheAge:(double)arg1 ;
-(void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 filenameSuffix:(id)arg2 ;
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)setPredictionClass:(id)arg1 ;
-(void)logStageScores:(id)arg1 forStageType:(long long)arg2 ;
-(void)flushWithFilenameSuffix:(id)arg1 ;
@end

