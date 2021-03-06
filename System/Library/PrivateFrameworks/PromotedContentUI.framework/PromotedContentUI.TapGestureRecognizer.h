/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	 kMaximumTimeSinceTap;
	 touchDownHandler;
	 touchMovedHandler;
	 touchUpHandler;
	 shouldBlockNavigation;
	 mostRecentTapLocation;
	 lastTrackedTouch;
	 mostRecentTapTimestamp;
	 location;
	 pointIsInsideView;
	 preventedTouches;
	 $__lazy_storage_$_scrollableAncestor;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)init;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

