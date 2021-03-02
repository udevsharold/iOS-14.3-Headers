/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFloatingDockViewControllerDelegate <NSObject>
@required
-(void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;
-(void)floatingDockViewController:(id)arg1 didChangeContentFrame:(CGRect)arg2;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningContent:(id)arg1;
-(void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(BOOL)arg4;
-(void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1;
-(void)floatingDockViewController:(id)arg1 wantsToBePresented:(BOOL)arg2;

@end
