/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedPersonalizingItem.h>
#import <libobjc.A.dylib/FCIssueAccessCheckable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCContentArchivable.h>

@protocol FCChannelProviding;
@class NSString, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, FCAssetHandle, FCColor, FCInterestToken, NTPBIssueRecord, FCContentArchive;

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying, FCContentArchivable> {

	BOOL _isCurrent;
	BOOL _isDraft;
	BOOL _paid;
	NSString* _identifier;
	long long _type;
	NSString* _title;
	NSDate* _publicationDate;
	NSString* _coverDate;
	FCAssetHandle* _metadataJSONAssetHandle;
	FCAssetHandle* _coverImageAssetHandle;
	double _coverImageAspectRatio;
	FCColor* _coverImagePrimaryColor;
	NSString* _layeredCoverJSON;
	double _layeredCoverAspectRatio;
	FCColor* _layeredCoverPrimaryColor;
	long long _minimumNewsVersion;
	NSString* _notificationDescription;
	NSString* _issueDescription;
	NSArray* _allArticleIDs;
	NSString* _coverArticleID;
	NSArray* _allowedStorefrontIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _topicTagIDs;
	id<FCChannelProviding> _sourceChannel;
	FCInterestToken* _interestToken;
	NTPBIssueRecord* _issueRecord;

}

@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,readonly) BOOL hasAudioTrack; 
@property (nonatomic,readonly) BOOL isEvergreen; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FCInterestToken * interestToken;                                                                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NTPBIssueRecord * issueRecord;                                                                  //@synthesize issueRecord=_issueRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publicationDate;                                                                  //@synthesize publicationDate=_publicationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverDate;                                                                      //@synthesize coverDate=_coverDate - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * metadataJSONAssetHandle;                                                        //@synthesize metadataJSONAssetHandle=_metadataJSONAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle;                                                          //@synthesize coverImageAssetHandle=_coverImageAssetHandle - In the implementation block
@property (nonatomic,readonly) double coverImageAspectRatio;                                                                   //@synthesize coverImageAspectRatio=_coverImageAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) FCColor * coverImagePrimaryColor;                                                          //@synthesize coverImagePrimaryColor=_coverImagePrimaryColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * layeredCoverJSON;                                                               //@synthesize layeredCoverJSON=_layeredCoverJSON - In the implementation block
@property (nonatomic,readonly) double layeredCoverAspectRatio;                                                                 //@synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) FCColor * layeredCoverPrimaryColor;                                                        //@synthesize layeredCoverPrimaryColor=_layeredCoverPrimaryColor - In the implementation block
@property (nonatomic,readonly) BOOL isCurrent;                                                                                 //@synthesize isCurrent=_isCurrent - In the implementation block
@property (nonatomic,readonly) BOOL isDraft;                                                                                   //@synthesize isDraft=_isDraft - In the implementation block
@property (getter=isPaid,nonatomic,readonly) BOOL paid;                                                                        //@synthesize paid=_paid - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                                                                   //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationDescription;                                                        //@synthesize notificationDescription=_notificationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * issueDescription;                                                               //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allArticleIDs;                                                                   //@synthesize allArticleIDs=_allArticleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverArticleID;                                                                 //@synthesize coverArticleID=_coverArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                                                            //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                                                            //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topicTagIDs;                                                                     //@synthesize topicTagIDs=_topicTagIDs - In the implementation block
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel;                                                      //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL isLocalDraft; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) FCContentArchive * contentArchive; 
+(BOOL)_fakeIssuesTimestamp;
-(FCContentArchive *)contentArchive;
-(BOOL)isBundlePaid;
-(FCAssetHandle *)coverImageAssetHandle;
-(NSArray *)allArticleIDs;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(BOOL)isPaid;
-(FCInterestToken *)interestToken;
-(id<FCChannelProviding>)sourceChannel;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(NSString *)itemID;
-(id)init;
-(NSArray *)blockedStorefrontIDs;
-(BOOL)isDraft;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(NSString *)publisherID;
-(FCColor *)coverImagePrimaryColor;
-(NSString *)issueDescription;
-(NSString *)notificationDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(BOOL)hasGlobalUserFeedback;
-(FCAssetHandle *)metadataJSONAssetHandle;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)halfLife;
-(BOOL)isANF;
-(BOOL)hasVideo;
-(BOOL)isLocalDraft;
-(NSArray *)allowedStorefrontIDs;
-(NSString *)sourceChannelID;
-(NSDate *)publishDate;
-(double)layeredCoverAspectRatio;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(id)initWithIssueRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 sourceChannel:(id)arg4 ;
-(unsigned long long)hash;
-(double)coverImageAspectRatio;
-(NSString *)sourceFeedID;
-(double)globalUserFeedback;
-(BOOL)isBlockedExplicitContent;
-(NSString *)identifier;
-(NSArray *)topicIDs;
-(NSString *)description;
-(long long)minimumNewsVersion;
-(NSArray *)topicTagIDs;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCurrent;
-(NTPBIssueRecord *)issueRecord;
-(id)initWithIssue:(id)arg1 overrides:(id)arg2 ;
-(NSString *)coverArticleID;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageAspectRatio:(double)arg8 coverImagePrimaryColor:(id)arg9 layeredCoverJSON:(id)arg10 layeredCoverAspectRatio:(double)arg11 layeredCoverPrimaryColor:(id)arg12 isCurrent:(BOOL)arg13 isDraft:(BOOL)arg14 isPaid:(BOOL)arg15 minimumNewsVersion:(long long)arg16 allArticleIDs:(id)arg17 coverArticleID:(id)arg18 allowedStorefrontIDs:(id)arg19 blockedStorefrontIDs:(id)arg20 topicTagIDs:(id)arg21 sourceChannel:(id)arg22 notificationDescription:(id)arg23 issueDescription:(id)arg24 ;
-(NSString *)layeredCoverJSON;
-(FCColor *)layeredCoverPrimaryColor;
-(NSDate *)publicationDate;
-(NSString *)title;
-(NSString *)coverDate;
@end

