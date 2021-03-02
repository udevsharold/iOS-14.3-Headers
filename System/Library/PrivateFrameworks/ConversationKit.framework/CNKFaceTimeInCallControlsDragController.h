/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@interface CNKFaceTimeInCallControlsDragController : NSObject <UIGestureRecognizerDelegate> {

	 inCallControlsView;
	 constraintsController;
	 panGestureRecognizer;
	 animation;
	 delegate;
	 disabledScrollViews;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeInCallControlsDragControllerDelegate> delegate; 
@property (readonly,nonatomic) BOOL isDragging; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)init;
-(BOOL)isDragging;
-(void)setDelegate:(id<CNKFaceTimeInCallControlsDragControllerDelegate>)arg1 ;
-(id<CNKFaceTimeInCallControlsDragControllerDelegate>)delegate;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(id)initInCallControlsView:(id)arg1 constraintsController:(id)arg2 ;
-(void)resetGestureRecognizer;
@end
