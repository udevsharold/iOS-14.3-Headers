/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@class NSMutableArray, UIWindow, SBSharedModalAlertItemPresenter, BSMonotonicReferenceTime, NSString;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver> {

	BOOL _pendingLayoutVerification;
	NSMutableArray* _updateReasons;
	UIWindow* _alertWindow;
	SBSharedModalAlertItemPresenter* _alertPresenter;
	BSMonotonicReferenceTime* _firstLogEventTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityYOffsetDidChange;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg1 ;
-(void)setAlertItemWindow:(id)arg1 ;
-(void)setAlertPresenter:(id)arg1 ;
@end
