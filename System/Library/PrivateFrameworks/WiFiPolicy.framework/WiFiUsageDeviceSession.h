/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageDeviceSession : WiFiUsageSession {

	BOOL _firstDisplayOn;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)systemWakeStateDidChange:(BOOL)arg1 wokenByWiFi:(BOOL)arg2 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
@end

