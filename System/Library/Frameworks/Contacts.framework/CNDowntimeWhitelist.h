/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDowntimeWhitelistContainerFetching, NSObject;
@class CNContactStore, NSNotificationCenter;

@interface CNDowntimeWhitelist : NSObject {

	id<CNDowntimeWhitelistContainerFetching> _containerFetcher;
	CNContactStore* _contactStore;
	NSNotificationCenter* _notificationCenter;
	id<NSObject> _contactStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NSObject> contactStoreDidChangeNotificationToken;                    //@synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) id<CNDowntimeWhitelistContainerFetching> containerFetcher;              //@synthesize containerFetcher=_containerFetcher - In the implementation block
+(id)os_log;
+(BOOL)isWhitelistedContact:(id)arg1 ;
+(id)keyDescriptor;
+(BOOL)anyContactIsWhitelisted:(id)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)allWhitelistedHandleStrings:(id*)arg1 ;
-(void)setTestContainerFetcher:(id)arg1 ;
-(id)requestForContactsInPermittedContainers;
-(id)init;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 error:(id*)arg2 ;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg1 ;
-(id<NSObject>)contactStoreDidChangeNotificationToken;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 ;
-(id)allWhitelistedContacts:(id*)arg1 ;
-(void)dealloc;
-(id)allWhitelistedHandleStrings;
-(BOOL)isHandleStringWhitelisted:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)requestForNonUnifiedContacts;
-(id)initWithContactStore:(id)arg1 notificationCenter:(id)arg2 ;
-(id<CNDowntimeWhitelistContainerFetching>)containerFetcher;
-(id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 error:(id*)arg2 ;
-(void)beginObservingChangeNotifications;
@end

