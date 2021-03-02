/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {

	UIView* _fromCanvasView;
	UIView* _toCanvasView;

}
-(void)complete;
-(double)contentViewMaxY;
-(void)_prepareCanvasViews;
-(void)_prepareLargeTitleView;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
-(int)transition;
-(void)animate;
-(void)prepare;
-(void)cancel;
-(void)_prepareSearchBar;
-(void)_animateLargeTitleView;
-(void)_animateContentView;
-(void)_prepareContentView;
-(void)_animateSearchBar;
-(void)_animateCanvasViews;
@end
