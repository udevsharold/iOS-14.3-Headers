/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class WFWorkflow, UIViewController;

@interface WFConditionsHostingView : UICollectionReusableView {

	 workflow;
	 viewController;
	 hostingController;

}

@property (retain,nonatomic) WFWorkflow * workflow; 
@property (assign,__weak,nonatomic) UIViewController * viewController; 
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFWorkflow *)workflow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(UIViewController *)viewController;
@end

