/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController {

	BiometricKitUIEnrollViewController* _enrollController;

}

@property (nonatomic,retain) BiometricKitUIEnrollViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(CGSize)preferredContentSize;
-(void)dealloc;
-(BOOL)isModalInPresentation;
-(void)teardown;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BiometricKitUIEnrollViewController *)enrollController;
-(void)setEnrollController:(BiometricKitUIEnrollViewController *)arg1 ;
@end

