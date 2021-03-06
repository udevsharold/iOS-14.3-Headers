/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject {

	ATXApp2VecMapping* _clusterCentroids;
	ATXApp2VecMapping* _appEmbeddings;
	long long _vectorLength;
	BOOL _loaded;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(id)getClosestClusterCentroidForBundleId:(id)arg1 ;
-(id)_mergeClusterCentroids:(id)arg1 forBundleIds:(id)arg2 ;
-(float)_getL2DistanceFrom:(const float*)arg1 to:(float*)arg2 ;
-(id)_getClosestClusterCentroidForVector:(const float*)arg1 ;
-(id)getClusterCentroidsForBundleIds:(id)arg1 ;
@end

