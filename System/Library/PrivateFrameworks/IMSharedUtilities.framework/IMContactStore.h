/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class CNContactStore, NSData, NSDictionary, NSMutableDictionary, CNContact, NSObject, NSArray;

@interface IMContactStore : NSObject {

	BOOL _batchFetchingForLaunchCompleted;
	CNContactStore* _contactStore;
	NSData* _changeHistoryToken;
	NSDictionary* _handleIDToCNIDMap;
	NSMutableDictionary* _CNIDToHandleIDsMap;
	NSMutableDictionary* _IDToCNContactMap;
	double _lastContactStoreSync;
	double _lastMeContactStoreSync;
	CNContact* _meContact;
	NSObject*<OS_dispatch_queue> _changeHistoryFetchQueue;
	NSArray* _CNIDsForBatchFetch;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * changeHistoryToken;                                       //@synthesize changeHistoryToken=_changeHistoryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * handleIDToCNIDMap;                                  //@synthesize handleIDToCNIDMap=_handleIDToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToHandleIDsMap;                          //@synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IDToCNContactMap;                            //@synthesize IDToCNContactMap=_IDToCNContactMap - In the implementation block
@property (assign,nonatomic) BOOL batchFetchingForLaunchCompleted;                              //@synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted - In the implementation block
@property (assign,nonatomic) double lastContactStoreSync;                                       //@synthesize lastContactStoreSync=_lastContactStoreSync - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                                     //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                             //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> changeHistoryFetchQueue;              //@synthesize changeHistoryFetchQueue=_changeHistoryFetchQueue - In the implementation block
@property (nonatomic,retain) NSArray * CNIDsForBatchFetch;                                      //@synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch - In the implementation block
+(id)phoneticFullNameForCNContact:(id)arg1 ;
+(id)nickNameForCNContact:(id)arg1 ;
+(id)validateAndCleanupID:(id)arg1 ;
+(id)abbreviatedNameForCNContact:(id)arg1 ;
+(id)companyNameForCNContact:(id)arg1 ;
+(id)createMutableContactWithMapURL:(id)arg1 andLocalizedLocationString:(id)arg2 ;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg1 ;
+(id)createMutableContactWithID:(id)arg1 ;
+(id)sharedInstance;
+(id)phoneNumbersForCNContact:(id)arg1 ;
+(id)phoneticFirstNameForCNContact:(id)arg1 ;
+(BOOL)isCNContactAKnownContact:(id)arg1 ;
+(id)IDsFromCNContact:(id)arg1 ;
+(id)kIMCNContactIdentifierKey;
+(id)firstNameForCNContact:(id)arg1 ;
+(Class)IMCNContactFormatterClass;
+(Class)IMCNLabeledValueClass;
+(id)keysForNicknameHandling;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1 ;
+(id)kIMCNContactLinkIdentifierKey;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg1 ;
+(id)keysForCNContact;
+(id)_stringFromContact:(id)arg1 withStyle:(long long)arg2 ;
+(id)keysForMeContact;
+(id)kIMCNContactImageDataKey;
+(id)kIMCNContactCropRectKey;
+(Class)IMCNGeminiManagerClass;
+(id)displayNameForContact:(id)arg1 ;
+(id)kIMCNContactThumbnailImageDataKey;
+(id)kIMCNContactEmailAddressesKey;
+(id)lastNameForCNContact:(id)arg1 ;
+(id)dialingForCurrentLocale;
+(id)dialingCodeForID:(id)arg1 ;
+(id)kIMCNContactPhoneNumbersKey;
+(id)descriptionForCNContact:(id)arg1 ;
+(id)kIMCNContactImageDataAvailableKey;
+(BOOL)shouldShowAbbreviatedNames;
+(Class)IMCNPhoneNumberClass;
+(Class)IMCNContactFetchRequestClass;
+(id)mePredicate;
+(id)predicateForID:(id)arg1 ;
+(BOOL)shouldShowNickNames;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(id)emailsForCNContact:(id)arg1 ;
+(id)phoneticLastNameForCNContact:(id)arg1 ;
+(Class)IMCNMutableContactClass;
+(id)fullNameForCNContact:(id)arg1 ;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(id)getHandleIDToCNIDMap;
-(id)completedContact:(id)arg1 withKeys:(id)arg2 ;
-(void)logHandleIDs:(id)arg1 ;
-(id)getAllKeysFromIDToCNContactMap;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)getCurrentHistoryToken;
-(BOOL)batchFetchingForLaunchCompleted;
-(id)init;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg1 ;
-(void)resetMeCard;
-(double)lastMeContactStoreSync;
-(id)getContactStore;
-(void)_logDictionaryInformation:(id)arg1 inRange:(NSRange)arg2 ;
-(id)getContactForID:(id)arg1 ;
-(NSData *)changeHistoryToken;
-(void)logDictionary:(id)arg1 ;
-(void)setCNIDToHandleIDsMap:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)logContactFetchRequestResults:(id)arg1 ;
-(id)getIDToCNContactMap;
-(id)fetchCNContactWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)CNIDToHandleIDsMap;
-(NSMutableDictionary *)IDToCNContactMap;
-(BOOL)isIDAKnownContact:(id)arg1 ;
-(void)generateCNIDToHandleIDMap;
-(void)setIDToCNContactMap:(NSMutableDictionary *)arg1 ;
-(id)fetchCNContactForHandleWithID:(id)arg1 ;
-(void)logDictionary:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(BOOL)arg2 ;
-(id)fetchMeContactWithKeys:(id)arg1 ;
-(void)replaceContact:(id)arg1 withID:(id)arg2 ;
-(void)setLastContactStoreSync:(double)arg1 ;
-(id)handleIDsForCNID:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(NSArray *)CNIDsForBatchFetch;
-(void)checkForContactStoreChanges;
-(void)setBatchFetchingCompleted;
-(void)contactStoreChanged:(id)arg1 ;
-(void)setHandleIDToCNIDMap:(NSDictionary *)arg1 ;
-(void)setBatchFetchingForLaunchCompleted:(BOOL)arg1 ;
-(void)_logArray:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2 ;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(void)logCNContact:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2 ;
-(void)setCNIDsForBatchFetch:(NSArray *)arg1 ;
-(void)addIDToCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(void)setChangeHistoryFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)changeHistoryFetchQueue;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(void)handleDropEverythingEvent;
-(void)setChangeHistoryToken:(NSData *)arg1 ;
-(double)lastContactStoreSync;
-(NSDictionary *)handleIDToCNIDMap;
-(void)removeContactWithID:(id)arg1 ;
-(void)removeIDFromCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(void)logHandleID:(id)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(void)logCurrentHistoryToken;
-(void)logCNContact:(id)arg1 andID:(id)arg2 ;
-(void)addEntriesToIDToCNContactMap:(id)arg1 ;
-(void)replaceWithMutableContactForID:(id)arg1 ;
-(id)getCNIDToHandleIDsMap;
-(id)fetchMeContactWithKeys:(id)arg1 withError:(id*)arg2 ;
-(void)addContact:(id)arg1 withID:(id)arg2 ;
@end

