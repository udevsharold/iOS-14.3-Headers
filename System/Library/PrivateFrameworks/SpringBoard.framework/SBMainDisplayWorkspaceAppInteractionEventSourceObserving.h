/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>
@optional
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;

@end

