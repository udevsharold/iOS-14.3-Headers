/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSCache;


@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property (nonatomic,readonly) id<IMAssistantContactsDataSource> contactsDataSource; 
@property (nonatomic,readonly) id<IMAssistantChatDataSource> chatDataSource; 
@property (nonatomic,readonly) id<IMAssistantAccountDataSource> accountDataSource; 
@property (nonatomic,readonly) id<IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource; 
@property (nonatomic,readonly) id<IMLocationManager> locationManagerDataSource; 
@property (nonatomic,readonly) id<IMAssistantFileManager> fileManagerDataSource; 
@property (nonatomic,readonly) id<IMFileTransferCenter> fileTransferCenterDataSource; 
@property (nonatomic,readonly) NSCache * handleToContactIdentifierCache; 
@property (nonatomic,readonly) NSCache * spiHandleToPersonCache; 
@property (nonatomic,readonly) NSCache * contactIdentifierToUnifiedContactIdentifierCache; 
@property (nonatomic,readonly) BOOL isInternationalSpamFilteringEnabled; 
@required
-(id<IMAssistantContactsDataSource>)contactsDataSource;
-(BOOL)isInternationalSpamFilteringEnabled;
-(id<IMLocationManager>)locationManagerDataSource;
-(id<IMAssistantChatDataSource>)chatDataSource;
-(id<IMAssistantAccountDataSource>)accountDataSource;
-(id<IMAssistantCoreTelephonySubscriptionsDataSource>)coreTelephonySubscriptionsDataSource;
-(BOOL)screentimeAllowedToShowChat:(id)arg1 error:(id*)arg2;
-(id<IMAssistantFileManager>)fileManagerDataSource;
-(id<IMFileTransferCenter>)fileTransferCenterDataSource;
-(BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1 error:(id*)arg2;
-(NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
-(NSCache *)handleToContactIdentifierCache;
-(NSCache *)spiHandleToPersonCache;

@end

