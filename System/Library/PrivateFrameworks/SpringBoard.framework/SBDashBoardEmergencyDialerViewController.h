/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHomeGestureDismissableCoverSheetViewController.h>
#import <libobjc.A.dylib/SBLockScreenEmergencyDialerDelegate.h>

@class TUCallCenter, SBLockScreenEmergencyDialerController, NSString;

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate> {

	TUCallCenter* _callCenter;
	SBLockScreenEmergencyDialerController* _controller;
	BOOL _inEmergencyCall;
	BOOL _inEmergencyCallMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateAppearance:(id)arg1 ;
-(long long)presentationPriority;
-(void)aggregateBehavior:(id)arg1 ;
-(long long)presentationType;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_deactivateEmergencyDialerController;
-(void)_activateEmergencyDialerController;
-(void)_updateEmergencyCallMode:(id)arg1 ;
-(void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2 ;
@end
