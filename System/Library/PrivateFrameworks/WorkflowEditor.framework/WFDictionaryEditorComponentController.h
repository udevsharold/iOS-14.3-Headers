/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFListEditorViewDelegate.h>

@class WFDictionaryEditorView, WFListEditingContext, NSString;

@interface WFDictionaryEditorComponentController : CKStatefulViewComponentController <WFListEditorViewDelegate> {

	WFDictionaryEditorView* _viewForSizing;
	WFListEditingContext* _editingContext;

}

@property (nonatomic,retain) WFListEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(WFListEditingContext *)editingContext;
-(void)setEditingContext:(WFListEditingContext *)arg1 ;
-(void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)componentTreeWillAppear;
-(void)componentTreeDidDisappear;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forComponent:(id)arg2 ;
@end

