/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIContentModuleContainerViewControllerDelegate <NSObject>
@required
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
-(CGRect*)compactModeFrameForContentModuleContainerViewController:(id)arg1;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;

@end
