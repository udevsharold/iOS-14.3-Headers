/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession {

	long long _event;
	STKSessionBehavior* _behavior;

}

@property (nonatomic,readonly) long long event;                            //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) STKSessionBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
-(STKSessionBehavior *)behavior;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1 ;
-(long long)event;
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6 ;
@end
