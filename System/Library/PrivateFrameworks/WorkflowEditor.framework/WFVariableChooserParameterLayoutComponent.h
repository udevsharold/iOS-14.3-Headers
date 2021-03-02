/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFParameter, WFVariable, CKComponent;

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent {

	WFParameter* _parameter;
	WFVariable* _variable;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	CKComponent* _controlComponent;
	id<WFComponentNavigationContext> _navigationContext;
	BOOL _chooserCanClear;
	/*^block*/id _updateBlock;

}
+(id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 parameter:(id)arg3 variable:(id)arg4 updateBlock:(/*^block*/id)arg5 options:(WFParameterComponentOptions)arg6 chooserCanClear:(BOOL)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 controlResistance:(const WFCompressionResistance*)arg11 controlComponent:(id)arg12 ;
-(void)presentTokenChooser:(id)arg1 ;
@end
