/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVRouteDetectorCoordinator : NSObject {

	BOOL _routeDetectionEnabled;

}

@property (assign,getter=isRouteDetectionEnabled,nonatomic) BOOL routeDetectionEnabled;              //@synthesize routeDetectionEnabled=_routeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL multipleRoutesDetected; 
+(void)endDetectingRoutes;
+(void)beginDetectingRoutes;
+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)updateMultipleRoutesDetected;
+(void)setMultipleRoutesDetected:(BOOL)arg1 ;
+(BOOL)multipleRoutesDetected;
-(void)dealloc;
-(BOOL)isRouteDetectionEnabled;
-(BOOL)multipleRoutesDetected;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
@end

