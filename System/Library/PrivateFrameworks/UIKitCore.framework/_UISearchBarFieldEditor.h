/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIFieldEditor.h>

@interface _UISearchBarFieldEditor : UIFieldEditor {

	struct {
		unsigned inLayoutSubviews : 1;
	}  _flags;

}
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(void)_updateTokenViews;
-(void)layoutSubviews;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg1 ;
-(void)activateEditor;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
@end

