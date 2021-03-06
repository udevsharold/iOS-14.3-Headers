/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeControlCenterCompactModule/HomeControlCenterCompactModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCCRemoteDashboardDelegate.h>

@protocol HUCCDashboardContainerViewControllerDelegate;
@class NSDictionary, HUCCRemoteDashboardViewController, _UIAsyncInvocation;

@interface HUCCDashboardContainerViewController : UIViewController <HUCCRemoteDashboardDelegate> {

	NSDictionary* _transitionSubviewFrames;
	HUCCRemoteDashboardViewController* _remoteDashboardViewController;
	_UIAsyncInvocation* _cancelServiceInvocation;
	id<HUCCDashboardContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) HUCCRemoteDashboardViewController * remoteDashboardViewController;              //@synthesize remoteDashboardViewController=_remoteDashboardViewController - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                                   //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCDashboardContainerViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * transitionSubviewFrames;                                         //@synthesize transitionSubviewFrames=_transitionSubviewFrames - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setDelegate:(id<HUCCDashboardContainerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(id)serviceViewControllerProxy;
-(id<HUCCDashboardContainerViewControllerDelegate>)delegate;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)willBeginTransition:(BOOL)arg1 forCompactModule:(BOOL)arg2 ;
-(void)willFinishTransition:(BOOL)arg1 forCompactModule:(BOOL)arg2 ;
-(void)stopRemoteViewController;
-(NSDictionary *)transitionSubviewFrames;
-(CGSize)preferredExpandedSize;
-(void)remoteDashboard:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(CGRect)expandedContentFrame;
-(void)_requestRemoteViewControllerForHome:(id)arg1 ;
-(void)_stopAndRemoveRemoteViewController;
-(HUCCRemoteDashboardViewController *)remoteDashboardViewController;
-(void)_configureAndAddRemoteViewController:(id)arg1 forHome:(id)arg2 ;
-(void)_addNewRemoteViewController:(id)arg1 ;
-(void)setTransitionSubviewFrames:(NSDictionary *)arg1 ;
-(void)setRemoteDashboardViewController:(HUCCRemoteDashboardViewController *)arg1 ;
-(void)requestLockAuthenticationForRemoteDashboard:(id)arg1 ;
@end

