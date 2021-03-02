/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NearField/NearField-Structs.h>
@class NSObject, NSString, NSUserDefaults;

@interface NFTapToRadar : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	Class _lsApplicationWorkspace;
	NSString* _pendingRequest;
	NSUserDefaults* _userDefaults;
	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;

}
+(void)handleCallback:(unsigned long long)arg1 ;
+(void)requestTapToRadar:(id)arg1 preferences:(id)arg2 ;
+(id)_getInstance;
-(id)init;
-(void)_handleCallbackSync:(unsigned long long)arg1 ;
-(void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2 ;
@end
