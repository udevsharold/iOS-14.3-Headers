/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionDataTask, NPTMetricResult, NSURLSessionTaskMetrics;

@interface NPTTaskMetrics : NSObject {

	NSURLSessionDataTask* _task;
	NPTMetricResult* _results;
	NSURLSessionTaskMetrics* _taskMetrics;

}

@property (nonatomic,retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NPTMetricResult * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(NSURLSessionTaskMetrics *)taskMetrics;
-(id)init;
-(NPTMetricResult *)results;
-(void)setResults:(NPTMetricResult *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionDataTask *)task;
@end

