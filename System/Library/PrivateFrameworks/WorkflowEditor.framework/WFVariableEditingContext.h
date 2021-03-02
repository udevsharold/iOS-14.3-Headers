/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class WFVariable;

@interface WFVariableEditingContext : NSObject {

	BOOL _editingVariable;
	WFVariable* _variable;
	NSRange _range;

}

@property (nonatomic,readonly) WFVariable * variable;              //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) BOOL editingVariable;               //@synthesize editingVariable=_editingVariable - In the implementation block
+(id)newWithVariable:(id)arg1 range:(NSRange)arg2 editingVariable:(BOOL)arg3 ;
-(NSRange)range;
-(WFVariable *)variable;
-(BOOL)editingVariable;
@end
