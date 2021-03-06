/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSPolicy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSmartSiriVolumeEnabledConditions;
@end

