/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {

	NSString* _suppressionReason;
	UIGestureRecognizer* _gestureRecognizer;
	long long _completionType;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) long long completionType;                           //@synthesize completionType=_completionType - In the implementation block
-(UIGestureRecognizer *)gestureRecognizer;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_beginAnimation;
-(void)_setupAnimation;
-(void)_begin;
-(void)_didComplete;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(long long)completionType;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)finishWithCompletionType:(long long)arg1 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(BOOL)shouldSuppressMedusaKeyboardDuringGesture;
@end

