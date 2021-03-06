/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITransitionState.h>

@class UIView, UIViewController;

@interface _UIQueuingScrollViewState : _UITransitionState {

	UIView* _view;
	UIViewController* _viewController;
	BOOL _manual;

}

@property (nonatomic,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (getter=isManual,nonatomic,readonly) BOOL manual;              //@synthesize manual=_manual - In the implementation block
-(BOOL)isManual;
-(UIView *)view;
-(id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(id)description;
@end

