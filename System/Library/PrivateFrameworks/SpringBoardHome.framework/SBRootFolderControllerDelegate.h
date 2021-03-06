/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRootFolderControllerDelegate <SBFolderControllerDelegate>
@optional
-(void)rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3;
-(void)rootFolderController:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
-(void)rootFolderController:(id)arg1 statusBarInsetsDidChange:(UIEdgeInsets)arg2;
-(id)rootFolderController:(id)arg1 vendorNameForAppWithBundleIdentifiers:(id)arg2;
-(void)rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
-(void)rootFolderController:(id)arg1 didDismissPageManagementWithContext:(id)arg2;
-(void)rootFolderControllerViewWillAppear:(id)arg1;
-(double)externalDockHeightForRootFolderController:(id)arg1;
-(void)rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderControllerViewDidDisappear:(id)arg1;
-(void)rootFolderController:(id)arg1 willPresentPageManagementUsingAnimator:(id)arg2 context:(id)arg3;
-(double)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg1;
-(void)rootFolderController:(id)arg1 handleInsertionForWidgetIcon:(id)arg2 withReferenceIconView:(id)arg3 fromTodayPresenter:(BOOL)arg4 dismissViewControllerHandler:(/*^block*/id)arg5;
-(id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg1;
-(BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg1;
-(void)rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(long long)arg3;
-(void)rootFolderControllerDidDismissWidgetEditing:(id)arg1;
-(double)maxExternalDockHeightForRootFolderController:(id)arg1;
-(id)backgroundViewForDockForRootFolderController:(id)arg1;
-(void)rootFolderController:(id)arg1 willDismissPageManagementUsingAnimator:(id)arg2 context:(id)arg3;
-(id)externalDockIconListViewForRootFolderController:(id)arg1;
-(void)rootFolderControllerWillPresentWidgetEditing:(id)arg1;
-(void)rootFolderController:(id)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3;
-(void)rootFolderController:(id)arg1 prepareAddSheetViewController:(id)arg2;
-(void)rootFolderController:(id)arg1 didOverscrollOnLastPageByAmount:(double)arg2;
-(double)preferredExternalDockVerticalMarginForRootFolderController:(id)arg1;
-(void)rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderController:(id)arg1 willUsePropertyAnimator:(id)arg2 toTransitionToState:(long long)arg3;

@end

