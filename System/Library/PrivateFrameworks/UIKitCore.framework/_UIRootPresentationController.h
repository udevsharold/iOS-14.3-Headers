/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISheetPresentationController.h>
#import <UIKitCore/_UIStatusBarAnimationProviding.h>

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters, UIWindow, NSString;

@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding> {

	UIWindow* _presentingWindow;

}

@property (nonatomic,__weak,readonly) UIWindow * presentingWindow;                                                                                                               //@synthesize presentingWindow=_presentingWindow - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (nonatomic,readonly) int _preferredStatusBarVisibility; 
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsDeferredTransitions;
-(long long)preferredStatusBarStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_preferredStatusBarStyleAnimationParameters;
-(id)_preferredStatusBarHideAnimationParameters;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarUpdateAnimation;
-(id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(id)_fullscreenPresentationSuperview;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(id)_parentTraitEnvironment;
-(UIWindow *)presentingWindow;
-(BOOL)_isRootPresentation;
@end

