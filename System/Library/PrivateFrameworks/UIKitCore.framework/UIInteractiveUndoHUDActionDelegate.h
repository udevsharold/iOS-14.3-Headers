/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInteractiveUndoHUDActionDelegate <NSObject>
@required
-(BOOL)canCut;
-(void)redo:(BOOL)arg1;
-(void)cutOperation;
-(void)copyOperation;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(BOOL)canPaste;
-(void)undo:(BOOL)arg1;
-(BOOL)canCopy;
-(void)pasteOperation;

@end
