/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLockScreenEmergencyCallViewControllerDelegate.h>

@protocol SBLockScreenEmergencyDialerDelegate;
@class SBLockScreenEmergencyCallViewController, UIViewController, NSString;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate> {

	SBLockScreenEmergencyCallViewController* _viewController;
	BOOL _active;
	id<SBLockScreenEmergencyDialerDelegate> _delegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deactivate;
-(BOOL)isActive;
-(void)setDelegate:(id<SBLockScreenEmergencyDialerDelegate>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id<SBLockScreenEmergencyDialerDelegate>)delegate;
-(UIViewController *)viewController;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
@end

