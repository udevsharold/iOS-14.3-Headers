/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKChatInputControllerDelegate <NSObject>
@required
-(id)viewControllerForChatInputModalPresentation;
-(id)chatInputTranscriptIdentifier;
-(void)sendCurrentLocation;
-(void)chatInputSentComposition:(id)arg1;
-(id)viewForDragAndChatInputDropTarget;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
-(void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
-(void)chatInputDidChangeSize;
-(id)dragControllerTranscriptDelegate;
-(BOOL)keyboardIsVisibleForChatInputController:(id)arg1;
-(BOOL)chatInputControllerCanSend:(id)arg1;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(void)chatInputController:(id)arg1 presentShelfModal:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
-(void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
-(void)chatInputDidSelectEffectPicker;
-(void)chatInputControllerDidShowHandwriting:(id)arg1;
-(void)chatInputControllerWillHideHandwriting:(id)arg1;
-(void)showContactForHandle:(id)arg1;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillTransitionExpanded:(id)arg1;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg1;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidTransitionExpanded:(id)arg1;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg1;
-(void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1;
-(void)chatInputControllerCancelSelectFunCamera:(id)arg1;
-(void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1;
-(void)chatInputControllerWillSelectFunCamera:(id)arg1;
-(void)chatInputControllerDidSelectFunCamera:(id)arg1;
-(BOOL)chatInputControllerShouldShowHandwriting:(id)arg1;

@end
