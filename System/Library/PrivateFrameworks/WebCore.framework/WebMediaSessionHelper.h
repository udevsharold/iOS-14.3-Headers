/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionHelperiOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)activeOutputDeviceDidChange:(id)arg1 ;
-(id)initWithCallback:(MediaSessionHelperiOS*)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(void)startMonitoringAirPlayRoutes;
-(BOOL)hasWirelessTargetsAvailable;
-(void)stopMonitoringAirPlayRoutes;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)clearCallback;
-(void)mediaServerConnectionDied:(id)arg1 ;
@end

