/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFXPCActivityScheduler : NSObject {

	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) NSString * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(/*^block*/id)arg2 runHandler:(/*^block*/id)arg3 ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(/*^block*/id)arg2 ;
-(NSString *)activityIdentifier;
-(void)invalidate;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)scheduleWithCheckInHandler:(/*^block*/id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)scheduleWithRunHandler:(/*^block*/id)arg1 ;
@end
