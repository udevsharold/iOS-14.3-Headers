/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, NSString;

@interface HUCameraRecordingSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _setupButton;
	OBTrayButton* _learnMoreButton;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * setupButton;                                             //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * learnMoreButton;                                         //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(HMHome *)home;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(OBTrayButton *)learnMoreButton;
-(void)setLearnMoreButton:(OBTrayButton *)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(OBTrayButton *)setupButton;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 home:(id)arg5 ;
-(void)setSetupButton:(OBTrayButton *)arg1 ;
-(void)_setupCameraRecording:(id)arg1 ;
-(void)showCameraRecordingLearnMore;
@end

