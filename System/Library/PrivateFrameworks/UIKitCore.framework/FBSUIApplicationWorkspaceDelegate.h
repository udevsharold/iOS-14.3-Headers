/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>
@optional
-(void)workspaceNoteAssertionExpirationImminent:(id)arg1;
-(void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2;

@required
-(void)workspaceShouldExit:(id)arg1;
-(void)workspace:(id)arg1 didLaunchWithCompletion:(/*^block*/id)arg2;

@end

