/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class DNDEventBehaviorResolutionService, NSObject, EFFuture;

@interface _MFSoundBehaviorOverridesMonitor : NSObject {

	DNDEventBehaviorResolutionService* _dndBehaviorResolutionService;
	NSObject*<OS_dispatch_queue> _dndBehaviorResolutionServiceQueue;
	EFFuture* _behaviorOverrideTypes;

}

@property (readonly) EFFuture * behaviorOverrideTypes;              //@synthesize behaviorOverrideTypes=_behaviorOverrideTypes - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_resolveDNDBehavior;
-(EFFuture *)behaviorOverrideTypes;
@end

