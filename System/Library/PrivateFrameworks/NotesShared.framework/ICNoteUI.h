/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICNoteUI <NSObject>
@optional
-(BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
-(void)noteWillTurnIntoFault;
-(void)noteDidReplaceDocument;
-(id)uiAttributedString;
-(void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
-(void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
-(void)noteDidSaveAndClearDecryptedData;
-(void)createMissingAttachmentsInTextStorage;

@end

