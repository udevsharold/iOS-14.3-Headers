/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXAppLaunchCountDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
-(id)initWithDevice:(id)arg1 ;
-(void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
@end

