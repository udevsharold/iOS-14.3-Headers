/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ABCPeriodicMaintenanceActivity : NSObject {

	NSMutableArray* _activities;
	unsigned long long _nextActivityIndex;

}
+(id)sharedInstance;
+(long long)periodicActivityInterval;
+(const char*)periodicActivityID;
+(void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)_handleActivityRun:(id)arg1 ;
@end

