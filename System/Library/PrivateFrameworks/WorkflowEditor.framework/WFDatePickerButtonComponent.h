/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFDatePickerButtonComponent : CKCompositeComponent {

	BOOL _becomeFirstResponder;
	WFCustomButtonComponent* _buttonComponent;

}

@property (nonatomic,__weak,readonly) WFCustomButtonComponent * buttonComponent;              //@synthesize buttonComponent=_buttonComponent - In the implementation block
@property (nonatomic,readonly) BOOL becomeFirstResponder;                                     //@synthesize becomeFirstResponder=_becomeFirstResponder - In the implementation block
+(id)newWithAttributes:(const WFDatePickerAttributes*)arg1 updateBlock:(/*^block*/id)arg2 variableBlock:(/*^block*/id)arg3 size:(const CKComponentSize*)arg4 ;
-(BOOL)becomeFirstResponder;
-(WFCustomButtonComponent *)buttonComponent;
@end

