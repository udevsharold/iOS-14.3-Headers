/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFParameterPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/WFImportQuestionDetailsViewControllerDelegate.h>

@class WFWorkflow, WFWorkflowSettingsLayoutMetrics, UITableView, SSSectionedDataSource, SSSection, NSString;

@interface WFImportQuestionsEditViewController : UIViewController <UITableViewDelegate, WFParameterPickerViewControllerDelegate, WFImportQuestionDetailsViewControllerDelegate> {

	WFWorkflow* _workflow;
	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	UITableView* _tableView;
	SSSectionedDataSource* _dataSource;
	SSSection* _addSection;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SSSectionedDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SSSection * addSection;                                       //@synthesize addSection=_addSection - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsLayoutMetrics * layoutMetrics;              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithWorkflow:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setDataSource:(SSSectionedDataSource *)arg1 ;
-(WFWorkflow *)workflow;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SSSectionedDataSource *)dataSource;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(SSSection *)addSection;
-(void)parameterPicker:(id)arg1 didFinishWithParameter:(id)arg2 ofAction:(id)arg3 ;
-(void)parameterPickerDidCancel:(id)arg1 ;
-(void)questionDetailsViewControllerWillDisappear:(id)arg1 withUpdatedImportQuestion:(id)arg2 ;
-(void)updateFooterText;
-(void)updateEditButton;
-(void)setLayoutMetrics:(WFWorkflowSettingsLayoutMetrics *)arg1 ;
-(void)setAddSection:(SSSection *)arg1 ;
@end
