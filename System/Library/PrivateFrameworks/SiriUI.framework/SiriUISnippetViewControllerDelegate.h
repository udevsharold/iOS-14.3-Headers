/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>
@optional
-(void)siriSnippetViewController:(id)arg1 handleStartLocalRequest:(id)arg2;
-(unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;
-(void)userTouchedSnippet;
-(unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;
-(id)siriEnabledAppListForSiriViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2;
-(void)siriSnippetViewControllerRequestsPinning:(id)arg1;

@required
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
-(double)boundingWidthForSnippetViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
-(BOOL)siriSnippetViewControllerIsVisible:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

