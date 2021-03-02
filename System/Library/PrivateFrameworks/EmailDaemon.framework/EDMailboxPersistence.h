/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDMailboxProviderDelegate.h>
#import <libobjc.A.dylib/EMMailboxTypeResolver.h>

@protocol EDMailboxProvider;
@class NSSet, NSMutableDictionary, NSString;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {

	os_unfair_lock_s _changeObserversByIdentifierLock;
	NSMutableDictionary* _changeObserversByIdentifier;
	id<EDMailboxProvider> _mailboxProvider;

}

@property (nonatomic,retain) NSMutableDictionary * changeObserversByIdentifier;              //@synthesize changeObserversByIdentifier=_changeObserversByIdentifier - In the implementation block
@property (nonatomic,retain) id<EDMailboxProvider> mailboxProvider;                          //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,readonly) NSSet * allMailboxObjectIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)allMailboxObjectIDs;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(id)legacyMailboxForObjectID:(id)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)initWithMailboxProvider:(id)arg1 ;
-(id<EDMailboxProvider>)mailboxProvider;
-(void)mailboxListInvalidated;
-(id)allMailboxes;
-(BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)deleteMailbox:(id)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(void)setMailboxProvider:(id<EDMailboxProvider>)arg1 ;
-(id)legacyMailboxForMailboxURL:(id)arg1 ;
-(NSMutableDictionary *)changeObserversByIdentifier;
-(void)setChangeObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)allMailboxesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)userCreatedMailboxObjectIDs;
-(void)fetchMailboxLists;
-(void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeChangeObserverWithIdentifier:(id)arg1 ;
@end
