/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFSettingsCell.h>

@class WFWorkflowImportQuestion;

@interface WFImportQuestionsEditTableViewCell : WFSettingsCell {

	WFWorkflowImportQuestion* _question;

}

@property (assign,nonatomic,__weak) WFWorkflowImportQuestion * question;              //@synthesize question=_question - In the implementation block
+(long long)cellStyle;
-(WFWorkflowImportQuestion *)question;
-(void)setQuestion:(WFWorkflowImportQuestion *)arg1 ;
@end

