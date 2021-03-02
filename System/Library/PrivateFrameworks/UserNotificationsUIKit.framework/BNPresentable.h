/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol BNPresentable <BNPresentableIdentifying,BNPresentableObserving>
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@optional
-(id)presentableDescription;
-(void)draggingDidBeginWithGestureProxy:(id)arg1;
-(long long)presentableType;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;

@required
-(UIViewController *)viewController;

@end
