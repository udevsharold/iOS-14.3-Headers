/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent {

	CNContact* _member;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNContact * member;              //@synthesize member=_member - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(CNContact *)member;
-(id)init;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithMember:(id)arg1 group:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(CNGroup *)group;
-(void)encodeWithCoder:(id)arg1 ;
@end

