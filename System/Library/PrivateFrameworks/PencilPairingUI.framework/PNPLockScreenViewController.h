/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PNPPlatterViewController.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>
#import <libobjc.A.dylib/PNPViewController.h>

@protocol PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate, PNPDeviceStateConfigurable;
@class PNPPlatterTransitioningDelegate, UIView, PNPDeviceState, NSString;

@interface PNPLockScreenViewController : UIViewController <PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {

	PNPPlatterTransitioningDelegate* _platterTransitioningDelegate;
	id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
	id<PNPViewControllerAppearanceDelegate> appearanceDelegate;
	UIView*<PNPDeviceStateConfigurable> _pillView;

}

@property (nonatomic,retain) UIView*<PNPDeviceStateConfigurable> pillView;                                    //@synthesize pillView=_pillView - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredEdge; 
@property (assign,nonatomic,__weak) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate; 
@property (nonatomic,readonly) double preferredCornerRadius; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PNPViewControllerAppearanceDelegate> appearanceDelegate; 
-(void)setPillView:(UIView*<PNPDeviceStateConfigurable>)arg1 ;
-(CGSize)preferredContentSize;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(UIView*<PNPDeviceStateConfigurable>)pillView;
-(PNPDeviceState *)deviceState;
-(void)setAppearanceDelegate:(id<PNPViewControllerAppearanceDelegate>)arg1 ;
-(id<PNPViewControllerAppearanceDelegate>)appearanceDelegate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_platterContainerView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id<PNPPlatterViewControllerPlatterDelegate>)platterDelegate;
-(void)setPlatterDelegate:(id<PNPPlatterViewControllerPlatterDelegate>)arg1 ;
-(unsigned long long)preferredEdge;
-(void)dismissPill;
@end
