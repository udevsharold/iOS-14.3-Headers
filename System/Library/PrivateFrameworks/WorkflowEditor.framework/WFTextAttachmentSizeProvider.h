/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFTextAttachmentSizeProvider <NSObject>
@optional
-(BOOL)shouldDrawTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
-(double)preferredHeightForDrawingTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
-(void)getPreferredLeadingSpacing:(double*)arg1 trailingSpacing:(double*)arg2 forDrawingTextAttachment:(id)arg3 atCharacterIndex:(unsigned long long)arg4;

@end
