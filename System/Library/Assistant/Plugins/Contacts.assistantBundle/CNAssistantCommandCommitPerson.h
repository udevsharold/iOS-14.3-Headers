/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <libobjc.A.dylib/CNAssistantCommand.h>

@class CNContactStore, NSString;

@interface CNAssistantCommandCommitPerson : SADomainObjectCommit <CNAssistantCommand> {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(CNContactStore *)contactStore;
-(id)commitFromUpdatesCache;
@end
