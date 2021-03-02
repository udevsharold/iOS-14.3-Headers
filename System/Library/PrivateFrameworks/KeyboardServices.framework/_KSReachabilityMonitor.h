/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <KeyboardServices/KeyboardServices-Structs.h>
@class NSObject;

@interface _KSReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isInternetReachable;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)startMonitoring;
-(id)init;
-(void)dealloc;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(void)queryInitialState;
@end
