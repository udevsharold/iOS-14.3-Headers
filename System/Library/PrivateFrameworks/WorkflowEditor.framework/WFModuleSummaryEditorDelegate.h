/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFModuleSummaryEditorDelegate <NSObject>
@optional
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;

@required
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
-(void)summaryEditorDidRequestTextEntry:(id)arg1;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3;

@end
