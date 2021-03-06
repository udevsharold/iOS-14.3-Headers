/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@required
-(BOOL)isInteractive;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isAnimated;
-(id)viewControllerForKey:(id)arg1;
-(double)completionVelocity;
-(BOOL)isInterruptible;
-(BOOL)initiallyInteractive;
-(id)viewForKey:(id)arg1;
-(long long)presentationStyle;
-(UIView *)containerView;
-(BOOL)isCancelled;
-(double)percentComplete;
-(long long)completionCurve;

@end

