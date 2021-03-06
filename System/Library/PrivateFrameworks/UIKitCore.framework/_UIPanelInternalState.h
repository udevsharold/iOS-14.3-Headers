/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIPanelControllerDelegate;
@class UIViewController, UISlidingBarConfiguration, UISlidingBarStateRequest, _UIPanelAnimationState;

@interface _UIPanelInternalState : NSObject <NSCopying> {

	UIViewController* _mainViewController;
	UIViewController* _leadingViewController;
	UIViewController* _supplementaryViewController;
	UIViewController* _trailingViewController;
	UIViewController* _collapsedViewController;
	UIViewController* _preservedDetailController;
	id<UIPanelControllerDelegate> _delegate;
	UISlidingBarConfiguration* _configuration;
	UISlidingBarStateRequest* _stateRequest;
	UISlidingBarStateRequest* _externallyAnimatingStateRequest;
	long long _externallyAnimatingAffectedSides;
	_UIPanelAnimationState* _animationState;
	UISlidingBarStateRequest* _interactiveStateRequest;
	long long _collapsedState;
	double _keyboardAdjustment;

}

@property (nonatomic,retain) UIViewController * mainViewController;                                 //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) UIViewController * leadingViewController;                              //@synthesize leadingViewController=_leadingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * supplementaryViewController;                        //@synthesize supplementaryViewController=_supplementaryViewController - In the implementation block
@property (nonatomic,retain) UIViewController * trailingViewController;                             //@synthesize trailingViewController=_trailingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * collapsedViewController;                            //@synthesize collapsedViewController=_collapsedViewController - In the implementation block
@property (nonatomic,retain) UIViewController * preservedDetailController;                          //@synthesize preservedDetailController=_preservedDetailController - In the implementation block
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UISlidingBarConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest;                                 //@synthesize stateRequest=_stateRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * externallyAnimatingStateRequest;              //@synthesize externallyAnimatingStateRequest=_externallyAnimatingStateRequest - In the implementation block
@property (assign,nonatomic) long long externallyAnimatingAffectedSides;                            //@synthesize externallyAnimatingAffectedSides=_externallyAnimatingAffectedSides - In the implementation block
@property (nonatomic,retain) _UIPanelAnimationState * animationState;                               //@synthesize animationState=_animationState - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * interactiveStateRequest;                      //@synthesize interactiveStateRequest=_interactiveStateRequest - In the implementation block
@property (assign,nonatomic) long long collapsedState;                                              //@synthesize collapsedState=_collapsedState - In the implementation block
@property (assign,nonatomic) double keyboardAdjustment;                                             //@synthesize keyboardAdjustment=_keyboardAdjustment - In the implementation block
-(void)setCollapsedState:(long long)arg1 ;
-(UIViewController *)preservedDetailController;
-(id)_allowedSupplementaryWidthsForParentWidth:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInteractiveStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setCollapsedViewController:(UIViewController *)arg1 ;
-(id)computePossibleStatesGivenParentView:(id)arg1 withSize:(CGSize)arg2 forceOverlay:(BOOL)arg3 ;
-(_UIPanelAnimationState *)animationState;
-(UISlidingBarConfiguration *)configuration;
-(void)setPreservedDetailController:(UIViewController *)arg1 ;
-(id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(id)_allowedLeadingWidthsForParentWidth:(double)arg1 ;
-(long long)externallyAnimatingAffectedSides;
-(double)keyboardAdjustment;
-(double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(id)description;
-(id)_allowedTrailingWidthsForParentWidth:(double)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(void)setAnimationState:(_UIPanelAnimationState *)arg1 ;
-(long long)collapsedState;
-(UISlidingBarStateRequest *)externallyAnimatingStateRequest;
-(UIViewController *)collapsedViewController;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(id)computePossibleStatesGivenParentView:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(void)setSupplementaryViewController:(UIViewController *)arg1 ;
-(UIViewController *)mainViewController;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3 ;
-(void)setKeyboardAdjustment:(double)arg1 ;
-(UIViewController *)supplementaryViewController;
-(UIViewController *)trailingViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(void)setExternallyAnimatingStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(UISlidingBarStateRequest *)interactiveStateRequest;
-(id<UIPanelControllerDelegate>)delegate;
-(UIViewController *)leadingViewController;
-(void)setExternallyAnimatingAffectedSides:(long long)arg1 ;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
@end

