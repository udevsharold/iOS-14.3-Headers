/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EDSearchableIndexPersistence.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2 ;
-(id)additionalFilterClause;
-(id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 ;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(/*^block*/id)arg5 ;
@end
