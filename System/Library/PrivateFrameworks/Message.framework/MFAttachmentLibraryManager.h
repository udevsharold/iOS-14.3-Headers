/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1 ;
-(id)initWithPrimaryLibrary:(id)arg1 ;
-(id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2 ;
@end
