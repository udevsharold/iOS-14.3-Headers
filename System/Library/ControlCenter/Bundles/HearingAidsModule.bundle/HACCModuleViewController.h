/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingAidsModule/HearingAidsModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HACCIconViewControllerDelegate.h>
#import <libobjc.A.dylib/AXHAShortcutUpdateProtocol.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, HACCShortcutViewController, HACCIconViewController, NSString;

@interface HACCModuleViewController : UIViewController <HACCIconViewControllerDelegate, AXHAShortcutUpdateProtocol, CCUIContentModuleContentViewController> {

	HACCShortcutViewController* _shortcutController;
	HACCIconViewController* _iconController;
	BOOL _expanded;
	BOOL _pausedSoundRecognition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setContentModuleContext:(id)arg1 ;
-(double)preferredExpandedContentHeight;
-(id)firstResponder;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(id)shortcutViewController;
-(void)pauseSoundRecognitionIfNecessary;
-(void)restartSoundRecognitionIfNecessary;
-(void)haccIconButtonTapped;
@end

