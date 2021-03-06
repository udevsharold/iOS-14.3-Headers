/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFRemoteQuarantinePolicyEvaluatorDelegate.h>

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)userInterfaceToPresentAlertForEvaluator:(id)arg1 ;
-(void)evaluateQuarantineWithJavaScript:(id)arg1 webPage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getWebPageFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_getErrorFromScript:(id)arg1 ;
@end

