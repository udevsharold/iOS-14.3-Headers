/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/HUServicePickerViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, HMHome, NSString;

@interface WFHomeServicePickerParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;
	HMHome* _home;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(UIViewController *)presentedViewController;
-(void)servicePickerDidCancel:(id)arg1 ;
-(void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

