/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconListViewDragDelegate <NSObject>
@required
-(id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
-(void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;

@end

