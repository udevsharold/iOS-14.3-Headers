/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFModuleModelProvider.h>

@protocol WFParameterPickerViewControllerDelegate;
@class WFWorkflow, WFWorkflowViewController, NSArray, NSString;

@interface WFParameterPickerViewController : UIViewController <WFModuleModelProvider> {

	WFWorkflow* _workflow;
	id<WFParameterPickerViewControllerDelegate> _delegate;
	WFWorkflowViewController* _workflowViewController;
	NSArray* _excludedParameters;

}

@property (assign,nonatomic,__weak) WFWorkflowViewController * workflowViewController;                 //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,retain) NSArray * excludedParameters;                                             //@synthesize excludedParameters=_excludedParameters - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                  //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWorkflow:(id)arg1 ;
-(void)cancelPressed;
-(WFWorkflow *)workflow;
-(void)setDelegate:(id<WFParameterPickerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id<WFParameterPickerViewControllerDelegate>)delegate;
-(WFWorkflowViewController *)workflowViewController;
-(id)createModelForAction:(id)arg1 ;
-(void)component:(id)arg1 didSelectAction:(id)arg2 parameter:(id)arg3 ;
-(void)setWorkflowViewController:(WFWorkflowViewController *)arg1 ;
-(NSArray *)excludedParameters;
-(void)setExcludedParameters:(NSArray *)arg1 ;
@end
