/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICAddAttachmentsManager : NSObject
+(id)sharedManager;
-(void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 fetchFirst:(BOOL)arg5 ;
-(id)saveAttachmentsToNewNote:(id)arg1 inFolder:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 ;
-(void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 ;
@end
