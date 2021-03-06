/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICGalleryAttachmentUtilities : NSObject
+(id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 allowCached:(BOOL)arg2 ;
+(id)imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(BOOL)arg2 allowCached:(BOOL)arg3 ;
+(double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3 ;
+(CGSize)sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2 ;
+(id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3 ;
+(id)imageForSubAttachment:(id)arg1 ;
+(CGSize)sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2 ;
@end

