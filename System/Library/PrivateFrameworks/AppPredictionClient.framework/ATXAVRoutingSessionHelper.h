/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVRoutingSessionManager, ATXAVRouteInfo;

@interface ATXAVRoutingSessionHelper : NSObject {

	float _threshold;
	AVRoutingSessionManager* _avRoutingSessionManager;
	ATXAVRouteInfo* _internalPredictedRouteInfo;

}

@property (nonatomic,readonly) float acceptThreshod; 
@property (nonatomic,readonly) ATXAVRouteInfo * predictedRouteInfo; 
-(id)init;
-(float)acceptThreshod;
-(id)_atxAVRouteInfoWithRoute:(id)arg1 ;
-(id)_selectedOrPendingRoute;
-(id)_predictedRouteWithAcceptThreshold:(float)arg1 ;
-(ATXAVRouteInfo *)predictedRouteInfo;
-(id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2 ;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg2 ;
-(id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2 ;
@end

