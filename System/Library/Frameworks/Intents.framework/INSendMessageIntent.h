/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendMessageIntentExport.h>

@class NSArray, NSString, INSpeakableString, INPerson;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long outgoingMessageType; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,copy,readonly) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy,readonly) NSString * conversationIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) INPerson * sender; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (assign,nonatomic) long long effect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)cd_sender;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(id)cd_derivedIntentIdentifier;
-(NSString *)content;
-(NSString *)conversationIdentifier;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8 ;
-(void)setContent:(NSString *)arg1 ;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 ;
-(NSArray *)attachments;
-(void)setServiceName:(NSString *)arg1 ;
-(INPerson *)sender;
-(NSString *)serviceName;
-(long long)effect;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)_metadata;
-(id)groupName;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setSender:(INPerson *)arg1 ;
-(BOOL)_isValidSubProducer:(id)arg1 ;
-(NSArray *)recipients;
-(id)_spotlightContentType;
-(void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(void)setEffect:(long long)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(void)setSpeakableGroupName:(INSpeakableString *)arg1 ;
-(INSpeakableString *)speakableGroupName;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(BOOL)_isUserConfirmationRequired;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(void)setGroupName:(id)arg1 ;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1 ;
-(long long)_preferredInteractionDirection;
-(id)_redactedDictionaryRepresentation;
-(id)_keyCodableAttributes;
@end
