/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;
	BOOL _observingAttachment;

}

@property (assign,nonatomic) BOOL observingAttachment;              //@synthesize observingAttachment=_observingAttachment - In the implementation block
@property (nonatomic,readonly) ICDrawing * drawing; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)drawingDocument;
-(void)drawingPreviewIsUpToDate;
-(void)dealloc;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(id)initWithAttachment:(id)arg1 ;
-(ICDrawing *)drawing;
-(id)saveURL;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)previewImageURL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg1 ;
-(BOOL)observingAttachment;
-(void)setObservingAttachment:(BOOL)arg1 ;
@end

