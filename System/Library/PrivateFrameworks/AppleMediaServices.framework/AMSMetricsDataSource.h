/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSMetricsDataSource
@required
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;
-(void)cancel;
-(void)didFinishBatching;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;

@end

