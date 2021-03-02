/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel {

	ICTableVersionedDocument* _tableDocument;

}

@property (nonatomic,retain) ICTableVersionedDocument * tableDocument;              //@synthesize tableDocument=_tableDocument - In the implementation block
@property (nonatomic,readonly) ICTable * table; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2 ;
-(ICTable *)table;
-(id)localizedFallbackTitle;
-(void)mergeTablePrimitiveData;
-(ICTableVersionedDocument *)tableDocument;
-(id)stringsAtRow:(unsigned long long)arg1 ;
-(void)updateAttachmentByMergingWithTableData:(id)arg1 ;
-(void)setTableDocument:(ICTableVersionedDocument *)arg1 ;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(void)noteWillAddOrRemovePassword;
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
-(id)searchableTextContentInNote;
-(void)regenerateTextContentInNote;
-(void)attachmentAwakeFromFetch;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
@end
