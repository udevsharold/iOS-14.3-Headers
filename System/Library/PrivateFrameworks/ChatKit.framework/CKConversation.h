/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString, IMChat, NSSet, NSAttributedString, NSNumber, NSDate, CNGroupIdentity, CKEntity, CKComposition, IMService;

@interface CKConversation : NSObject <NSItemProviderWriting> {

	NSArray* _recipients;
	NSString* _name;
	IMChat* _chat;
	unsigned _limitToLoad;
	struct {
		unsigned ignoringTypingUpdates : 1;
	}  _conversationFlags;
	BOOL _needsReload;
	BOOL _shouldShowGroupPhotoUpdateBanner;
	BOOL _shouldShowGroupNameUpdateBanner;
	BOOL _hasLoadedAllMessages;
	BOOL _isReportedAsSpam;
	BOOL _wasKnownSender;
	BOOL _hasSetWasKnownSender;
	BOOL _holdWasKnownSenderUpdates;
	BOOL _needsUpdatedContactsForVisualIdentity;
	BOOL _needsUpdatedGroupPhotoForVisualIdentity;
	BOOL _needsUpdatedGroupNameForVisualIdentity;
	int _wasDetectedAsSMSSpam;
	int _wasDetectedAsSMSCategory;
	int _wasDetectedAsiMessageSpam;
	NSArray* _pendingHandles;
	NSString* _conversationListCollectionViewPinnedItemIdentifier;
	NSString* _conversationListCollectionViewListItemIdentifier;
	NSString* _selectedLastAddressedHandle;
	NSString* _selectedLastAddressedSIMID;
	NSSet* _pendingRecipients;
	NSAttributedString* _groupName;
	NSString* _groupIdentityUpdateHandleID;
	NSAttributedString* _previewText;
	NSNumber* _businessConversation;
	NSDate* _dateLastViewed;
	CNGroupIdentity* __conversationVisualIdentity;

}

@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMChat * chat;                                                                //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSAttributedString * previewText;                                               //@synthesize previewText=_previewText - In the implementation block
@property (nonatomic,retain) NSSet * pendingRecipients;                                                    //@synthesize pendingRecipients=_pendingRecipients - In the implementation block
@property (assign,nonatomic) unsigned limitToLoad;                                                         //@synthesize limitToLoad=_limitToLoad - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedAllMessages;                                                    //@synthesize hasLoadedAllMessages=_hasLoadedAllMessages - In the implementation block
@property (assign,nonatomic) BOOL isReportedAsSpam;                                                        //@synthesize isReportedAsSpam=_isReportedAsSpam - In the implementation block
@property (nonatomic,retain) NSNumber * businessConversation;                                              //@synthesize businessConversation=_businessConversation - In the implementation block
@property (nonatomic,retain) NSDate * dateLastViewed;                                                      //@synthesize dateLastViewed=_dateLastViewed - In the implementation block
@property (assign,nonatomic) BOOL wasKnownSender;                                                          //@synthesize wasKnownSender=_wasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL hasSetWasKnownSender;                                                    //@synthesize hasSetWasKnownSender=_hasSetWasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL holdWasKnownSenderUpdates;                                               //@synthesize holdWasKnownSenderUpdates=_holdWasKnownSenderUpdates - In the implementation block
@property (nonatomic,retain) CNGroupIdentity * _conversationVisualIdentity;                                //@synthesize _conversationVisualIdentity=__conversationVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedContactsForVisualIdentity;                                   //@synthesize needsUpdatedContactsForVisualIdentity=_needsUpdatedContactsForVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedGroupPhotoForVisualIdentity;                                 //@synthesize needsUpdatedGroupPhotoForVisualIdentity=_needsUpdatedGroupPhotoForVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedGroupNameForVisualIdentity;                                  //@synthesize needsUpdatedGroupNameForVisualIdentity=_needsUpdatedGroupNameForVisualIdentity - In the implementation block
@property (nonatomic,readonly) NSArray * frequentReplies; 
@property (nonatomic,retain) NSString * selectedLastAddressedHandle;                                       //@synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle - In the implementation block
@property (nonatomic,retain) NSString * selectedLastAddressedSIMID;                                        //@synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID - In the implementation block
@property (nonatomic,readonly) NSString * lastAddressedHandle; 
@property (nonatomic,readonly) NSString * lastAddressedSIMID; 
@property (nonatomic,readonly) CKEntity * recipient; 
@property (nonatomic,copy,readonly) NSArray * recipientStrings; 
@property (nonatomic,readonly) unsigned long long recipientCount; 
@property (nonatomic,readonly) BOOL isToEmailAddress; 
@property (nonatomic,readonly) NSString * rawAddressedName; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (assign,nonatomic) NSString * displayName; 
@property (nonatomic,readonly) NSAttributedString * groupName;                                             //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSString * serviceDisplayName; 
@property (nonatomic,readonly) char buttonColor; 
@property (nonatomic,readonly) BOOL isPreviewTextForAttachment; 
@property (nonatomic,readonly) NSSet * mergedPinningIdentifiers; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,copy,readonly) NSString * senderIdentifier; 
@property (nonatomic,retain) CKComposition * unsentComposition; 
@property (nonatomic,readonly) unsigned long long unreadCount; 
@property (nonatomic,readonly) BOOL hasUnreadMessages; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=shouldSendReadReceipts,nonatomic,readonly) BOOL sendReadReceipts; 
@property (nonatomic,readonly) BOOL needsReload;                                                           //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * deviceIndependentID; 
@property (nonatomic,readonly) NSString * pinningIdentifier; 
@property (nonatomic,readonly) int wasDetectedAsSMSSpam;                                                   //@synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsSMSCategory;                                               //@synthesize wasDetectedAsSMSCategory=_wasDetectedAsSMSCategory - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsiMessageSpam;                                              //@synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsSpam; 
@property (nonatomic,readonly) long long spamCategory; 
@property (nonatomic,readonly) IMService * sendingService; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (getter=isGroupConversation,nonatomic,readonly) BOOL groupConversation; 
@property (nonatomic,readonly) BOOL canLeave; 
@property (getter=hasLeft,nonatomic,readonly) BOOL left; 
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers; 
@property (getter=hasLeftGroupChat,nonatomic,readonly) BOOL leftGroupChat; 
@property (assign,nonatomic) BOOL shouldShowGroupPhotoUpdateBanner;                                        //@synthesize shouldShowGroupPhotoUpdateBanner=_shouldShowGroupPhotoUpdateBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGroupNameUpdateBanner;                                         //@synthesize shouldShowGroupNameUpdateBanner=_shouldShowGroupNameUpdateBanner - In the implementation block
@property (nonatomic,retain) NSString * groupIdentityUpdateHandleID;                                       //@synthesize groupIdentityUpdateHandleID=_groupIdentityUpdateHandleID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCharacterCount; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,copy) NSString * localUserIsComposing; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (nonatomic,copy,readonly) NSArray * pendingEntities; 
@property (nonatomic,copy) NSArray * pendingHandles;                                                       //@synthesize pendingHandles=_pendingHandles - In the implementation block
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) unsigned long long disclosureAtomStyle; 
@property (assign,getter=isIgnoringTypingUpdates,nonatomic) BOOL ignoringTypingUpdates; 
@property (nonatomic,readonly) NSString * conversationListCollectionViewPinnedItemIdentifier;              //@synthesize conversationListCollectionViewPinnedItemIdentifier=_conversationListCollectionViewPinnedItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * conversationListCollectionViewListItemIdentifier;                //@synthesize conversationListCollectionViewListItemIdentifier=_conversationListCollectionViewListItemIdentifier - In the implementation block
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 ;
+(double)_sms_maxTrimDurationForMediaType:(int)arg1 ;
+(double)_iMessage_maxTrimDurationForMediaType:(int)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)newPendingConversation;
+(BOOL)isSMSSpamFilteringEnabled;
+(long long)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(id)_iMessage_localizedErrorForReason:(long long)arg1 ;
+(unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1 ;
+(id)_sms_localizedErrorForReason:(long long)arg1 ;
+(long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long*)arg4 ;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)arg1 ;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;
+(BOOL)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id*)arg4 ;
+(BOOL)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(BOOL)arg5 error:(id*)arg6 ;
+(id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3 ;
+(id)conversationForContacts:(id)arg1 candidateConversation:(id)arg2 ;
-(NSArray *)handles;
-(IMChat *)chat;
-(BOOL)isPlaceholder;
-(void)reloadIfNeeded;
-(BOOL)shouldShowCharacterCount;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMuted;
-(unsigned long long)unreadCount;
-(NSArray *)recipientStrings;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(char)sendButtonColor;
-(unsigned long long)recipientCount;
-(BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
-(BOOL)needsReload;
-(void)setNeedsReload;
-(NSAttributedString *)groupName;
-(CKEntity *)recipient;
-(id)date;
-(NSArray *)recipients;
-(void)dealloc;
-(void)setNeedsUpdatedGroupPhotoForVisualIdentity;
-(void)setNeedsUpdatedGroupNameForVisualIdentity;
-(void)setGroupIdentityUpdateHandleID:(NSString *)arg1 ;
-(BOOL)canLeave;
-(NSString *)deviceIndependentID;
-(void)didBecomeActive;
-(BOOL)shouldSendReadReceipts;
-(BOOL)isMakoConversation;
-(void)acceptTransfer:(id)arg1 ;
-(void)addRecipientHandles:(id)arg1 ;
-(void)setSendReadReceipts:(BOOL)arg1 ;
-(void)removeRecipientHandles:(id)arg1 ;
-(id)initWithChat:(id)arg1 ;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(NSArray *)pendingHandles;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(NSString *)pinningIdentifier;
-(void)setPendingHandles:(NSArray *)arg1 ;
-(BOOL)hasLeft;
-(NSSet *)mergedPinningIdentifiers;
-(void)updateConversationVisualIdentityGroupPhotoWithSender:(id)arg1 ;
-(void)setShouldShowGroupPhotoUpdateBanner:(BOOL)arg1 ;
-(void)updateConversationVisualIdentityDisplayNameWithSender:(id)arg1 ;
-(void)setShouldShowGroupNameUpdateBanner:(BOOL)arg1 ;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(void)deleteAllMessagesAndRemoveGroup;
-(int)wasDetectedAsSpam;
-(BOOL)containsHandleWithUID:(id)arg1 ;
-(long long)spamCategory;
-(BOOL)isKnownSender;
-(int)wasDetectedAsSMSCategory;
-(BOOL)wasKnownSender;
-(void)updateWasKnownSender;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)updateLastViewedDate;
-(char)buttonColor;
-(id)contactNameByHandle;
-(void)markAllMessagesAsRead;
-(CKComposition *)unsentComposition;
-(void)unmute;
-(void)sendMessage:(id)arg1 newComposition:(BOOL)arg2 ;
-(BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(void)setUnsentComposition:(CKComposition *)arg1 ;
-(id)messagesFromComposition:(id)arg1 ;
-(void)setIgnoringTypingUpdates:(BOOL)arg1 ;
-(id)uniqueIdentifier;
-(double)maxTrimDurationForMediaType:(int)arg1 ;
-(NSString *)description;
-(BOOL)supportsSurf;
-(id)_conversationList;
-(int)wasDetectedAsSMSSpam;
-(BOOL)isPinned;
-(void)loadAllMessages;
-(BOOL)hasReplyEnabled;
-(BOOL)hasLeftGroupChat;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)deleteAllMessages;
-(BOOL)forceMMS;
-(NSString *)groupIdentityUpdateHandleID;
-(BOOL)shouldShowGroupPhotoUpdateBanner;
-(BOOL)shouldShowGroupNameUpdateBanner;
-(void)setChat:(IMChat *)arg1 ;
-(NSString *)senderIdentifier;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1 ;
-(BOOL)isDowngraded;
-(void)resetCaches;
-(id)groupPhotoData;
-(BOOL)isToEmailAddress;
-(BOOL)isGroupConversation;
-(BOOL)canSendComposition:(id)arg1 error:(id*)arg2 ;
-(void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(BOOL)hasDisplayName;
-(NSString *)groupID;
-(id)_contactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(void)_createConversationVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(void)setNeedsUpdatedContactsForVisualIdentity:(BOOL)arg1 ;
-(void)setNeedsUpdatedGroupPhotoForVisualIdentity:(BOOL)arg1 ;
-(void)setNeedsUpdatedGroupNameForVisualIdentity:(BOOL)arg1 ;
-(id)_groupPhotoFileURL;
-(BOOL)needsUpdatedContactsForVisualIdentity;
-(BOOL)_contactsForVisualIdentityHaveKeys:(id)arg1 ;
-(void)_updateGroupPhotoForVisualIdentity;
-(void)_updateContactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(BOOL)needsUpdatedGroupPhotoForVisualIdentity;
-(BOOL)needsUpdatedGroupNameForVisualIdentity;
-(void)_updateGroupNameForVisualIdentity;
-(id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2 ;
-(NSString *)selectedLastAddressedHandle;
-(NSString *)selectedLastAddressedSIMID;
-(void)refreshServiceForSending;
-(void)clearConversationLoadFromSpotlight;
-(long long)maximumRecipientsForSendingService;
-(NSArray *)frequentReplies;
-(NSString *)name;
-(void)setPendingRecipients:(NSSet *)arg1 ;
-(BOOL)isPending;
-(BOOL)hasLoadedAllMessages;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_clearTypingIndicatorsIfNecessary;
-(int)wasDetectedAsiMessageSpam;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1 ;
-(void)setLimitToLoad:(unsigned)arg1 ;
-(BOOL)_earlyReturnHistoryLoad;
-(void)setHasLoadedAllMessages:(BOOL)arg1 ;
-(BOOL)hasLoadedFromSpotlight;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(void)loadMoreMessagesBeforeFirstMessage;
-(void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(NSDate *)dateLastViewed;
-(BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_chatSupportsTypingIndicators;
-(NSString *)localUserIsComposing;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1 ;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1 ;
-(id)nameWithRawAddresses:(BOOL)arg1 ;
-(id)_nameForHandle:(id)arg1 ;
-(id)_headerTitleForService:(id)arg1 shouldListParticipants:(BOOL)arg2 ;
-(id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3 ;
-(BOOL)_unknownFilteringEnabled;
-(void)willBecomeInactive;
-(BOOL)isIgnoringTypingUpdates;
-(BOOL)noAvailableServices;
-(id)entityMatchingHandle:(id)arg1 ;
-(id)orderedContactsForAvatarView;
-(void)_chatItemsDidChange:(id)arg1 ;
-(id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1 ;
-(BOOL)_handleIsForThisConversation:(id)arg1 ;
-(void)loadFrequentReplies;
-(void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1 ;
-(void)loadMoreMessagesAfterLastMessage;
-(void)loadMoreMessages;
-(NSArray *)pendingEntities;
-(id)pinnedConversationDisplayNamePreferringShortName:(BOOL)arg1 ;
-(BOOL)isBusinessConversation;
-(id)ensureMessageWithGUIDIsLoaded:(id)arg1 ;
-(void)setPendingComposeRecipients:(id)arg1 ;
-(void)resortMessagesIfNecessary;
-(void)updateUserActivity;
-(unsigned long long)disclosureAtomStyle;
-(NSString *)rawAddressedName;
-(BOOL)isPreviewTextForAttachment;
-(char)outgoingBubbleColor;
-(NSString *)serviceDisplayName;
-(NSString *)conversationListCollectionViewPinnedItemIdentifier;
-(NSString *)conversationListCollectionViewListItemIdentifier;
-(IMService *)sendingService;
-(void)setForceMMS:(BOOL)arg1 ;
-(void)setSelectedLastAddressedHandle:(NSString *)arg1 ;
-(void)setSelectedLastAddressedSIMID:(NSString *)arg1 ;
-(NSSet *)pendingRecipients;
-(void)setPreviewText:(NSAttributedString *)arg1 ;
-(BOOL)isReportedAsSpam;
-(void)setIsReportedAsSpam:(BOOL)arg1 ;
-(NSNumber *)businessConversation;
-(void)setBusinessConversation:(NSNumber *)arg1 ;
-(void)setWasKnownSender:(BOOL)arg1 ;
-(BOOL)hasSetWasKnownSender;
-(void)setHasSetWasKnownSender:(BOOL)arg1 ;
-(BOOL)holdWasKnownSenderUpdates;
-(void)setHoldWasKnownSenderUpdates:(BOOL)arg1 ;
-(CNGroupIdentity *)_conversationVisualIdentity;
-(void)set_conversationVisualIdentity:(CNGroupIdentity *)arg1 ;
-(void)fetchSuggestedNameIfNecessary;
-(BOOL)hasVerifiedBusiness;
-(id)fastPreviewTextIgnoringPluginContent;
-(BOOL)hasUnreadMessages;
-(id)shortDescription;
-(id)copyForPendingConversation;
-(BOOL)supportsMutatingGroupMembers;
-(NSString *)lastAddressedSIMID;
-(BOOL)canInsertMoreRecipients;
-(NSString *)lastAddressedHandle;
-(id)conversationVisualIdentityWithKeys:(id)arg1 requestedNumberOfContactsToFetch:(unsigned long long)arg2 ;
-(BOOL)_allowedByScreenTime;
-(void)setNeedsUpdatedContactOrderForVisualIdentity;
-(BOOL)isAdHocGroupConversation;
-(void)resetNameCaches;
-(void)updateDisplayNameIfSMSSpam;
-(BOOL)isBlockedByCommunicationLimits;
-(void)updateUnsentCompositionByAppendingComposition:(id)arg1 ;
-(unsigned)limitToLoad;
-(void)setLoadedMessageCount:(unsigned long long)arg1 ;
-(id)messageWithComposition:(id)arg1 ;
-(BOOL)isAppleConversation;
-(void)setMutedUntilDate:(id)arg1 ;
-(id)activityForNewScene;
-(NSString *)displayName;
-(NSAttributedString *)previewText;
-(id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 shouldListParticipants:(BOOL)arg3 ;
@end

