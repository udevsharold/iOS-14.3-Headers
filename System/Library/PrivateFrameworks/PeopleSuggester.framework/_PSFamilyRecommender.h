/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, CNContactStore, HKHealthStore, _PSContactResolver, NSObject;

@interface _PSFamilyRecommender : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	_PSContactResolver* _contactResolver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _PSContactResolver * contactResolver;                //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)init;
-(_PSContactResolver *)contactResolver;
-(id)familyRecommendationSuggestionsForShareSheet;
-(CNContactStore *)contactStore;
-(id)contactKeysToFetch;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)currentFamily;
-(id)currentFamilyExcludingMe:(id)arg1 ;
-(id)contactIdsFromContactRelationsAndNamesUsingMe:(id)arg1 ;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(id)contactIdsFromEmergencyContacts;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg1 ;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg1 lookBackDays:(long long)arg2 ;
-(id)familyRecipientsForShareSheet;
-(id)fetchAllContactIdsFromContactStore:(id)arg1 ;
-(id)nonFamilyRelations;
-(id)familyRecommendations;
-(HKHealthStore *)healthStore;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
-(_CDInteractionStore *)interactionStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

