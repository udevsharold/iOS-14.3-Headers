/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STListViewController.h>
#import <libobjc.A.dylib/STRestrictionsPINControllerDelegate.h>

@protocol STRootViewModelCoordinator;
@class NSObject, NSString;

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate> {

	NSObject*<STRootViewModelCoordinator> _coordinator;
	id _showingPinTarget;

}

@property (nonatomic,retain) id showingPinTarget;                                            //@synthesize showingPinTarget=_showingPinTarget - In the implementation block
@property (nonatomic,retain) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)showPINSheet:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2 ;
-(void)didAcceptRemovePIN;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)showPINSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRootViewModelCoordinator:(id)arg1 ;
-(BOOL)shouldShowPINSheetForSpecifier:(id)arg1 ;
-(void)setShowingPinTarget:(id)arg1 ;
-(id)showingPinTarget;
-(BOOL)validatePIN:(id)arg1 forPINController:(id)arg2 ;
@end
