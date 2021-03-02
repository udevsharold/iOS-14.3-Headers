/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSString, NSData, MSMessage, NSObject;

@interface CKRemoteItemForSending : NSObject <NSSecureCoding> {

	BOOL _previewIsFullyRealizedByChatKit;
	NSURL* _attachmentURL;
	NSString* _attachmentDescription;
	IOSurfaceRef _previewImage;
	NSURL* _appendedVideoURL;
	NSURL* _appendedBundleURL;
	NSURL* _appendedRichLinkURL;
	NSData* _appendedRichLinkData;
	MSMessage* _appendedMessage;
	CGImageBlockSetRef _blockSet;
	NSObject*<OS_dispatch_semaphore> _previewCreationSemaphore;

}

@property (assign,nonatomic) CGImageBlockSetRef blockSet;                                            //@synthesize blockSet=_blockSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> previewCreationSemaphore;              //@synthesize previewCreationSemaphore=_previewCreationSemaphore - In the implementation block
@property (nonatomic,retain) NSURL * attachmentURL;                                                  //@synthesize attachmentURL=_attachmentURL - In the implementation block
@property (nonatomic,retain) NSString * attachmentDescription;                                       //@synthesize attachmentDescription=_attachmentDescription - In the implementation block
@property (assign,nonatomic) IOSurfaceRef previewImage;                                              //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) BOOL previewIsFullyRealizedByChatKit;                                   //@synthesize previewIsFullyRealizedByChatKit=_previewIsFullyRealizedByChatKit - In the implementation block
@property (nonatomic,retain) NSURL * appendedVideoURL;                                               //@synthesize appendedVideoURL=_appendedVideoURL - In the implementation block
@property (nonatomic,retain) NSURL * appendedBundleURL;                                              //@synthesize appendedBundleURL=_appendedBundleURL - In the implementation block
@property (nonatomic,retain) NSURL * appendedRichLinkURL;                                            //@synthesize appendedRichLinkURL=_appendedRichLinkURL - In the implementation block
@property (nonatomic,copy) NSData * appendedRichLinkData;                                            //@synthesize appendedRichLinkData=_appendedRichLinkData - In the implementation block
@property (nonatomic,copy) MSMessage * appendedMessage;                                              //@synthesize appendedMessage=_appendedMessage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)hasAppendedVideo:(id)arg1 ;
+(id)previewQueue;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(CGImageBlockSetRef)blockSet;
-(BOOL)isAttachmentTooLarge:(id)arg1 ;
-(NSURL *)attachmentURL;
-(void)_setPreviewUIImage:(id)arg1 ;
-(void)beginPreviewCreation;
-(id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 blockOnPreviewCreation:(BOOL)arg4 ;
-(NSString *)attachmentDescription;
-(void)setPreviewImage:(IOSurfaceRef)arg1 ;
-(void)setBlockSet:(CGImageBlockSetRef)arg1 ;
-(void)waitForPreviewGenerationIfNecessary;
-(id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2 ;
-(id)initWithAttachmentURL:(id)arg1 description:(id)arg2 blockOnPreviewCreation:(BOOL)arg3 ;
-(id)initWithMSMessage:(id)arg1 ;
-(id)previewUIImage;
-(IOSurfaceRef)previewImage;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(void)setAttachmentDescription:(NSString *)arg1 ;
-(BOOL)previewIsFullyRealizedByChatKit;
-(NSURL *)appendedVideoURL;
-(void)setPreviewIsFullyRealizedByChatKit:(BOOL)arg1 ;
-(void)setAppendedVideoURL:(NSURL *)arg1 ;
-(NSURL *)appendedBundleURL;
-(void)setAppendedBundleURL:(NSURL *)arg1 ;
-(NSURL *)appendedRichLinkURL;
-(void)setAppendedRichLinkURL:(NSURL *)arg1 ;
-(NSData *)appendedRichLinkData;
-(void)setAppendedRichLinkData:(NSData *)arg1 ;
-(MSMessage *)appendedMessage;
-(void)setAppendedMessage:(MSMessage *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)previewCreationSemaphore;
-(void)setPreviewCreationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
