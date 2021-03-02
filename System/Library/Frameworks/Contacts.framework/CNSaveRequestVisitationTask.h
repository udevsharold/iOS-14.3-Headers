/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNChangeHistoryEventVisitorPrivate;
@class CNSaveRequest, CNChangeHistoryEventFactory;

@interface CNSaveRequestVisitationTask : CNTask {

	CNSaveRequest* _saveRequest;
	id<CNChangeHistoryEventVisitorPrivate> _visitor;
	CNChangeHistoryEventFactory* _factory;

}

@property (readonly) CNSaveRequest * saveRequest;                                 //@synthesize saveRequest=_saveRequest - In the implementation block
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;              //@synthesize visitor=_visitor - In the implementation block
@property (readonly) CNChangeHistoryEventFactory * factory;                       //@synthesize factory=_factory - In the implementation block
-(CNChangeHistoryEventFactory *)factory;
-(CNSaveRequest *)saveRequest;
-(id)run:(id*)arg1 ;
-(id<CNChangeHistoryEventVisitorPrivate>)visitor;
-(id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3 ;
-(void)sendAddedContactEvents;
-(void)sendUpdatedContactEvents;
-(void)sendDeletedContactEvents;
-(void)sendAddedGroupEvents;
-(void)sendUpdatedGroupEvents;
-(void)sendDeletedGroupEvents;
-(void)sendAddMemberToGroupEvents;
-(void)sendRemoveMemberFromGroupEvents;
-(void)sendUnlinkContactEvents;
-(void)sendAddSubgroupToGroupEvents;
-(void)sendRemoveSubgroupFromGroupEvents;
-(void)sendLinkContactsEvents;
-(void)sendPreferredContactForNameEvents;
-(void)sendPreferredContactForImageEvents;
-(void)sendDifferentMeCardEvent;
@end
