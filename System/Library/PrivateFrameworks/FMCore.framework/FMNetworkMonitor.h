/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject {

	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
+(id)sharedInstance;
-(void)startMonitoring;
-(BOOL)isNetworkUp;
-(void)stopMonitoring;
-(NWPathEvaluator *)evaluator;
-(BOOL)isMonitoring;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(void)registerNetworkMonitorLaunchEvent:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

