/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {

	BOOL _indexed;
	BOOL _stored;
	BOOL _tracked;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL indexed;                  //@synthesize indexed=_indexed - In the implementation block
@property (nonatomic,readonly) BOOL stored;                   //@synthesize stored=_stored - In the implementation block
@property (nonatomic,readonly) BOOL tracked;                  //@synthesize tracked=_tracked - In the implementation block
+(void)initialize;
+(id)isSent;
+(id)domain:(id)arg1 ;
+(id)titleGeneratedFromSubject;
+(id)interactionGroupId:(id)arg1 ;
+(id)defaultDuration;
+(id)confidenceScore:(float)arg1 ;
+(id)reservationItemReferencesWithData:(id)arg1 ;
+(id)testTag:(int)arg1 ;
+(id)interactionTeamId:(id)arg1 ;
+(id)calendarAppUsageLevel:(float)arg1 ;
+(id)reservationItemReferences:(id)arg1 ;
+(id)textCalendarAttachment:(id)arg1 ;
+(id)timezoneIdentifier:(id)arg1 ;
+(id)messageWithMessageId:(id)arg1 fromSource:(id)arg2 ;
+(id)intentResponseUserActivityString:(id)arg1 ;
+(id)extraKey:(id)arg1 ;
+(id)extractedTicket;
+(id)resolveName:(id)arg1 ;
+(id)fromForwardedMessage;
+(id)isPartiallyDownloaded;
+(id)reservationContainerReferenceWithData:(id)arg1 ;
+(id)remember:(id)arg1 ;
+(id)extractedFlight;
+(id)poiFilters:(id)arg1 ;
+(id)extractedBus;
+(id)significantSender;
+(id)mailAppUsageLevel:(unsigned char)arg1 ;
+(id)identity:(id)arg1 ;
+(id)eventHash:(id)arg1 ;
+(id)messageWithMailMessageKey:(id)arg1 ;
+(id)extractedEvent;
+(id)extractedBoat;
+(id)interactionBundleId:(id)arg1 ;
+(id)extractedFromTemplateWithShortName:(id)arg1 ;
+(id)categoryTagWithCategoryType:(int)arg1 ;
+(id)url:(id)arg1 ;
+(id)naturalLanguageEventLanguageID:(id)arg1 ;
+(id)ekEventAvailabilityState:(id)arg1 ;
+(id)naturalLanguageEventAttributes:(unsigned long long)arg1 ;
+(id)contactDetail:(id)arg1 ;
+(id)fromTextMessage;
+(id)eventMetadata:(id)arg1 ;
+(id)tagForLabel:(id)arg1 value:(id)arg2 ;
+(id)extractedFood;
+(id)extractedFromTemplateWithName:(id)arg1 ;
+(id)hardName;
+(id)extractedTrain;
+(id)fromExtractedDomain;
+(id)messageWithEmailKey:(id)arg1 ;
+(id)fromReply;
+(id)geocodingModeAddressThenPOI;
+(id)geocodingModePOIOnly;
+(id)inhuman;
+(id)mailingListId:(id)arg1 ;
+(id)extractedHotel;
+(id)reminderMetadata:(id)arg1 ;
+(void)rememberLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
+(id)fromCalendarAttachment;
+(id)geocodingModeAddressWithCanonicalSearch;
+(id)human;
+(id)interactionContactIdentifier:(id)arg1 ;
+(id)geocodingModeAddressOnly;
+(id)fromSync;
+(id)fullyDissected;
+(id)schemaOrg:(id)arg1 ;
+(id)extractedEventCancellation;
+(id)messagesAppUsageLevel:(unsigned char)arg1 ;
+(id)reservationContainerReference:(id)arg1 ;
+(id)allDay;
+(id)extractedSocial;
+(id)templateException;
+(id)reminderHash:(id)arg1 ;
+(id)participantCount:(unsigned char)arg1 ;
+(id)containsEntityExtraction:(long long)arg1 ;
+(id)extractedMovie;
+(id)fromInteraction;
+(id)titleGeneratedFromTemplate;
+(id)naturalLanguageEvent;
+(id)naturalLanguageEventTypeIdentifier:(id)arg1 ;
+(id)usedBubblesCount:(unsigned char)arg1 ;
+(void)tombstoneLabel:(id)arg1 ;
+(id)extractedCarRental;
+(id)interactionId:(id)arg1 ;
+(id)allTags;
-(BOOL)isTemplateShortName;
-(BOOL)isSchemaOrg;
-(NSString *)value;
-(BOOL)isEqualToEntityTag:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
-(BOOL)isIntentResponseUserActivityString;
-(BOOL)isDomain;
-(BOOL)isExtraKey;
-(BOOL)isReservationItemReferences;
-(id)reservationContainerReference;
-(BOOL)isMailingListId;
-(unsigned long long)hash;
-(BOOL)isEventMetadata;
-(BOOL)tracked;
-(BOOL)isEventHash;
-(BOOL)isInteractionGroupId;
-(BOOL)isInteractionTeamId;
-(BOOL)isUrl;
-(BOOL)isEKEventAvailabilityState;
-(id)initWithLabel:(id)arg1 value:(id)arg2 stored:(BOOL)arg3 indexed:(BOOL)arg4 tracked:(BOOL)arg5 ;
-(BOOL)indexed;
-(BOOL)isReminderMetadata;
-(id)description;
-(BOOL)isNaturalLanguageEventTypeIdentifier;
-(BOOL)isNaturalLanguageEventAttributes;
-(id)reminderMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isContactDetail;
-(BOOL)isParticipantCount;
-(BOOL)isInteractionId;
-(BOOL)isUsedBubblesCount;
-(BOOL)isInteractionBundleId;
-(BOOL)stored;
-(BOOL)isMessagesAppUsageLevel;
-(id)name;
-(BOOL)isConfidenceScore;
-(BOOL)isCalendarAppUsageLevel;
-(BOOL)isTemplateName;
-(BOOL)isMailAppUsageLevel;
-(BOOL)isExtractedEventCategory;
-(BOOL)isInteractionContactIdentifier;
-(BOOL)isNaturalLanguageEventLanguageID;
-(NSString *)label;
-(id)eventMetadata;
-(BOOL)isPOIFilters;
-(id)reservationItemReferences;
-(id)intentResponseUserActivityString;
-(BOOL)isReservationContainerReference;
-(BOOL)isReminderHash;
@end
