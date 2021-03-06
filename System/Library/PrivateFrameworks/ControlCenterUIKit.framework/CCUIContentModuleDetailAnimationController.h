/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, UIViewPropertyAnimator, NSString;

@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController* _anchoringViewController;
	BOOL _presenting;
	UIViewPropertyAnimator* _propertyAnimator;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;                    //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(double)transitionDuration:(id)arg1 ;
-(void)performTransition:(id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(id)_newPropertyAnimator;
-(id)_contentModuleContainingViewController;
-(id)initForPresenting:(BOOL)arg1 anchoringViewController:(id)arg2 ;
@end

