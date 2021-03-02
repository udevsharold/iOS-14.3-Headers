/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>

@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>
+(id)defaultPropertiesToLoad;
-(id)semanticIdentifier;
-(id)comment;
-(void)setDisplayNameRaw:(id)arg1 ;
-(id)invitedBy;
-(void)setUUID:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)proposedStartDate;
-(void)setEmailAddress:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)displayNameRaw;
-(void)setProposedStartDate:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)emailAddress;
-(int)proposedStartDateStatus;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(void)setURL:(id)arg1 ;
-(id)phoneNumber;
-(void)setPhoneNumber:(id)arg1 ;
-(id)owner;
-(id)URL;
-(id)lastName;
-(id)firstName;
-(id)url;
-(id)displayName;
@end
