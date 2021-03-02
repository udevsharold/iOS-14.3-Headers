/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@interface TeaUI.SwipeActionManager : NSObject <UIGestureRecognizerDelegate> {

	 panGestureRecognizer;
	 tapGestureRecognizer;
	 deferGroup;
	 collectionView;
	 isSwipeActionEnabled;
	 dataSource;
	 delegate;
	??? swipeState;
	 rubberbandFactor;
	 maximumSwipeVelocity;
	 springStiffness;
	 snapOpenPercentage;
	 fadeDuration;
	 fadeOffset;

}
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)handlePanGestureWithRecognizer:(id)arg1 ;
-(void)handleTapGestureWithRecognizer:(id)arg1 ;
@end
