/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/CSEmergencyCalling.h>
#import <libobjc.A.dylib/SBLockScreenCallHandling.h>

@class CSCoverSheetViewController, SBDashBoardEmergencyDialerViewController, NSString;

@interface SBDashBoardEmergencyDialerController : NSObject <PTSettingsKeyObserver, CSEmergencyCalling, SBLockScreenCallHandling> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardEmergencyDialerViewController* _emergencyDialerViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)launchEmergencyDialer;
-(BOOL)isMakingEmergencyCall;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
@end
