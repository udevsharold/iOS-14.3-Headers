/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAttachmentUtilities : NSObject
+(id)temporaryDirectory;
+(id)writeData:(id)arg1 toTemporaryFileURLWithFileName:(id)arg2 ;
+(id)makeAttachmentPlaceholder:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)securityScopeForFileURL:(id)arg1 ;
+(id)_temporaryDirectoryUniqueURL;
+(id)temporaryFileURLWithExtension:(id)arg1 ;
+(id)mimeTypeForFileName:(id)arg1 ;
+(BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(long long)arg1 ;
@end

