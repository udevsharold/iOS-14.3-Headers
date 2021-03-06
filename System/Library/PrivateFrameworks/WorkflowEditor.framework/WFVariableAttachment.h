/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont, UIColor, WFVariable, NSString, WFVariableAttachmentCell;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying> {

	BOOL _enabled;
	BOOL _selected;
	BOOL _highlighted;
	UIFont* _font;
	UIColor* _tintColor;
	WFVariable* _variable;
	NSString* _overrideVariableName;
	WFVariableAttachmentCell* _wf_attachmentCell;

}

@property (nonatomic,retain) WFVariableAttachmentCell * wf_attachmentCell;              //@synthesize wf_attachmentCell=_wf_attachmentCell - In the implementation block
@property (nonatomic,readonly) WFVariable * variable;                                   //@synthesize variable=_variable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                           //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                     //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIFont * font;                                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * overrideVariableName;                             //@synthesize overrideVariableName=_overrideVariableName - In the implementation block
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(BOOL)isSelected;
-(BOOL)isHighlighted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(UIColor *)tintColor;
-(id)attachmentCell;
-(id)description;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)variableDidChange:(id)arg1 ;
-(void)setOverrideVariableName:(NSString *)arg1 ;
-(NSString *)overrideVariableName;
-(WFVariableAttachmentCell *)wf_attachmentCell;
-(void)setWf_attachmentCell:(WFVariableAttachmentCell *)arg1 ;
@end

