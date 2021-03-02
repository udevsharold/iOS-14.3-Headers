/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate;

@interface ATXNotificationsContentAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _ppnames;
	NSArray* _ppscores;
	NSDate* _lastUpdated;

}
-(id)init;
-(id)analyzeContent:(id)arg1 ;
-(void)updateAnalyzers;
-(BOOL)isExpired;
@end
