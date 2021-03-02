/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXScrollViewControllerDelegate <NSObject>
@optional
-(void)scrollViewControllerDidScroll:(id)arg1;
-(void)scrollViewControllerWillLayoutContent:(id)arg1;
-(void)scrollViewControllerDidLayoutContent:(id)arg1;
-(void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2;
-(double)navigationBarHeightForScrollViewController:(id)arg1;
-(double)toolBarHeightForScrollViewController:(id)arg1;
-(void)scrollViewControllerRequestsFullscreen:(id)arg1;
-(void)scrollViewController:(id)arg1 enableNavigation:(BOOL)arg2;
-(void)willReturnToFullscreen:(id)arg1;
-(void)scrollViewControllerWillDismissFullscreen:(id)arg1;
-(void)scrollViewControllerDismissFullscreen:(id)arg1;
-(BOOL)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(BOOL)arg2;
-(void)scrollViewControllerDidStopScrolling:(id)arg1;
-(void)scrollViewController:(id)arg1 triggerAction:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1;

@end
