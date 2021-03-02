/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageDelivery.h>

@class NSArray, EMMailDropMetadata;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {

	NSArray* _attachments;
	EMMailDropMetadata* _imageArchiveMetadata;
	long long _mailDropState;

}

@property (nonatomic,retain) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) EMMailDropMetadata * imageArchiveMetadata;              //@synthesize imageArchiveMetadata=_imageArchiveMetadata - In the implementation block
@property (assign,nonatomic) long long mailDropState;                                //@synthesize mailDropState=_mailDropState - In the implementation block
+(id)_mailDropZone;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)_attachmentManager;
-(id)scaledImages:(id)arg1 ;
-(long long)_processAttachments;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(EMMailDropMetadata *)imageArchiveMetadata;
-(BOOL)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(void)setImageArchiveMetadata:(EMMailDropMetadata *)arg1 ;
-(void)setMailDropState:(long long)arg1 ;
-(id)publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(BOOL)arg5 ;
-(long long)mailDropState;
-(id)ckDatabase;
@end
