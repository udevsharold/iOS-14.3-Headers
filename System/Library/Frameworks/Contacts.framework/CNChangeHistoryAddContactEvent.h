/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, NSString;

@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent {

	CNContact* _contact;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CNContact * contact;                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(NSString *)containerIdentifier;
-(id)init;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CNContact *)contact;
-(id)description;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
