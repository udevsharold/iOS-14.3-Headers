/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BNPresentingDelegate <NSObject>
@optional
-(void)presenter:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;
-(void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForEvent:(id)arg3 inView:(id)arg4;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4;
-(id)panGestureRecognizerForPresenter:(id)arg1;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3;
-(void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
-(CGPoint*)presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3;
-(id)defaultTransitioningDelegateForPresenter:(id)arg1;

@required
-(void)presenterRelinquishesVisibility:(id)arg1;
-(void)presenterRequestsVisibility:(id)arg1;

@end

