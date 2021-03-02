/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDragDelegate <NSObject>
@optional
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end
