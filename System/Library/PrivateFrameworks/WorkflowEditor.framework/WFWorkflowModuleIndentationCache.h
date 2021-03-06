/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWorkflow, NSLock, NSCountedSet;

@interface WFWorkflowModuleIndentationCache : NSObject {

	WFWorkflow* _workflow;
	NSLock* _lock;
	NSCountedSet* _indentationLevels;

}

@property (nonatomic,readonly) NSLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSCountedSet * indentationLevels;              //@synthesize indentationLevels=_indentationLevels - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                  //@synthesize workflow=_workflow - In the implementation block
-(id)initWithWorkflow:(id)arg1 ;
-(void)dealloc;
-(WFWorkflow *)workflow;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLock *)lock;
-(unsigned long long)indentationLevelForAction:(id)arg1 ;
-(NSCountedSet *)indentationLevels;
@end

