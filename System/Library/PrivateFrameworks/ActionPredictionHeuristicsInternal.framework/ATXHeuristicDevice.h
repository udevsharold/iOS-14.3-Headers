/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, CNContact, CNFavorites, NSDate, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {

	CNContactStore* _contactStoreLazy;
	CNContact* _meContactLazy;
	BOOL _meContactChecked;
	CNFavorites* _favoriteContactsLazy;
	NSDate* _now;
	NSMutableDictionary* _wrappedObjects;

}

@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) CNFavorites * favoriteContacts; 
@property (nonatomic,readonly) NSDate * now; 
+(id)sharedEventStore;
+(id)sharedCalendarVisibilityManager;
-(id)meContact;
-(id)wrap:(id)arg1 ;
-(id)_dictContactForParticipant:(id)arg1 ;
-(id)contactsForPredicate:(id)arg1 ;
-(id)_dictForAttachment:(id)arg1 ;
-(id)_unwrap:(id)arg1 ;
-(id)_dictContactForIdentifier:(id)arg1 ;
-(id)dictForEvent:(id)arg1 ;
-(id)_contactKeysToFetch;
-(id)_wrap:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)_contactForPredicate:(id)arg1 ;
-(NSDate *)now;
-(CNFavorites *)favoriteContacts;
-(id)dictContactForCNContact:(id)arg1 ;
-(void)updateMeContact;
-(void)setNow:(NSDate *)arg1 ;
@end

