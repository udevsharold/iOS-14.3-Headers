/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextDropDelegate <NSObject>
@optional
-(unsigned long long)textDroppableView:(id)arg1 willBecomeEditableForDrop:(id)arg2;
-(id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidUpdate:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)textDroppableView:(id)arg1 willPerformDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)textDroppableView:(id)arg1 previewForDroppingAllItemsWithDefault:(id)arg2;

@end
