/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDropDelegate <NSObject>
@optional
-(void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;

@required
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end

