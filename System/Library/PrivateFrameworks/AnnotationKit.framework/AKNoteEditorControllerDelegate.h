/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKNoteEditorControllerDelegate <NSObject>
@required
-(CGRect*)stickyViewFrameForNoteEditor:(id)arg1;
-(id)stickyContainerForNoteEditor:(id)arg1;
-(unsigned long long)edgeForNoteEditor:(id)arg1;
-(id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
-(void)noteEditorWillDismissFromFullScreen:(id)arg1;
-(void)noteEditorDidBeginEditing:(id)arg1;
-(void)noteEditorDidFinishEditing:(id)arg1;
-(void)noteEditorWillPresentFullScreen:(id)arg1;
-(BOOL)handleEditAnnotation:(id)arg1;

@end
