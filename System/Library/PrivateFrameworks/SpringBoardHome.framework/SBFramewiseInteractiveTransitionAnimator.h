/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;
@class NSString;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {

	double _percentComplete;
	BOOL _presenting;
	id<SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                               //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) double percentVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(BOOL)supportsRestarting;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(double)percentVisible;
-(BOOL)isPresenting;
-(double)transitionDuration:(id)arg1 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(double)percentComplete;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setDelegate:(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)arg1 ;
-(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)delegate;
@end

