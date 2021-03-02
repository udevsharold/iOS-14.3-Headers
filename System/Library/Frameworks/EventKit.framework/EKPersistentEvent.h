/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
+(Class)meltedClass;
+(id)relations;
+(id)defaultPropertiesToLoad;
+(id)eventWithRandomUUID;
-(long long)availability;
-(id)endDate;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(id)suggestionInfo;
-(id)originalStartDate;
-(id)birthdayContactName;
-(int)entityType;
-(id)organizer;
-(id)birthdayID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)participationStatusModifiedDate;
-(void)setSuggestionInfo:(id)arg1 ;
-(void)setBirthdayContactIdentifier:(id)arg1 ;
-(long long)privacyLevel;
-(id)actions;
-(void)setTravelTime:(id)arg1 ;
-(void)setOriginalStartDate:(id)arg1 ;
-(long long)travelAdvisoryBehavior;
-(id)birthdayContactIdentifier;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(void)setConferenceURL:(id)arg1 ;
-(void)setEndDateRaw:(id)arg1 ;
-(void)setAvailability:(long long)arg1 ;
-(long long)status;
-(id)travelTime;
-(unsigned long long)junkStatus;
-(void)setRecurrenceSet:(id)arg1 ;
-(void)setCanForward:(BOOL)arg1 ;
-(id)conferenceURL;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(BOOL)disallowProposeNewTime;
-(void)setPrivacyLevel:(long long)arg1 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(id)description;
-(void)setLocationPredictionState:(long long)arg1 ;
-(id)responseComment;
-(int)externalTrackingStatus;
-(void)setFiredTTL:(BOOL)arg1 ;
-(id)recurrenceSet;
-(void)setParticipationStatusModifiedDate:(id)arg1 ;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(void)setActions:(id)arg1 ;
-(long long)locationPredictionState;
-(void)setResponseComment:(id)arg1 ;
-(BOOL)canForward;
-(BOOL)firedTTL;
-(void)setBirthdayID:(id)arg1 ;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(id)endDateRaw;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setBirthdayContactName:(id)arg1 ;
-(unsigned)invitationChangedProperties;
-(void)setDisallowProposeNewTime:(BOOL)arg1 ;
@end
