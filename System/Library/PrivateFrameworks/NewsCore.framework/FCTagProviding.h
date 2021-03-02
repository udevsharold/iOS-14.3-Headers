/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData;


@protocol FCTagProviding <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tagType; 
@property (nonatomic,readonly) unsigned long long userFacingTagType; 
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,readonly) NSDate * loadDate; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameCompact; 
@property (nonatomic,copy,readonly) NSString * versionKey; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) long long contentProvider; 
@property (nonatomic,readonly) BOOL isPublic; 
@property (nonatomic,readonly) BOOL isDeprecated; 
@property (nonatomic,readonly) BOOL isExplicitContent; 
@property (nonatomic,copy,readonly) NSString * replacementID; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle; 
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,copy,readonly) FCColor * groupDarkStyleTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) BOOL isNotificationEnabled; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * magazineGenre; 
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL; 
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidBundlePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations; 
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut; 
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings; 
@property (nonatomic,readonly) unsigned long long groupingEligibility; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled; 
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled; 
@property (nonatomic,readonly) BOOL isAutoDarkModeEnabled; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) BOOL isSandbox; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate; 
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration; 
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@optional
-(NSData *)backingTagRecordData;

@required
-(BOOL)isEqualToTag:(id)arg1;
-(NSString *)versionKey;
-(FCColor *)groupDarkStyleTitleColor;
-(id<FCChannelProviding>)asChannel;
-(BOOL)isInternal;
-(BOOL)isPublic;
-(FCAssetHandle *)coverImageAssetHandle;
-(BOOL)isLocal;
-(NSString *)primaryAudience;
-(id<FCFeedTheming>)theme;
-(NSString *)magazineGenre;
-(BOOL)isExplicitContent;
-(NSArray *)iAdCategories;
-(NSString *)subtitle;
-(BOOL)isAuthenticationSetup;
-(NSArray *)blockedStorefrontIDs;
-(id<FCTopicProviding>)asTopic;
-(id)prefetchPurchaseOffer;
-(NSString *)articleRecirculationConfigJSON;
-(NSString *)publisherPaidAuthorizationURL;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(NSArray *)iAdKeywords;
-(NSArray *)publisherSpecifiedArticleIDs;
-(NSString *)replacementID;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(id)authorizationURL;
-(NSString *)publisherPaidWebAccessURL;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isPurchaseSetup;
-(NSString *)publisherPaidVerificationURL;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(NSArray *)publisherPaidOfferableConfigurations;
-(BOOL)isSandbox;
-(id<FCTagStocksFields>)stocksFields;
-(BOOL)isDeprecated;
-(NSString *)language;
-(BOOL)isRealTimeTrackingEnabled;
-(BOOL)isBlockedExplicitContent;
-(NSString *)identifier;
-(id)paidFeedIDForBin:(long long)arg1;
-(BOOL)isAutoDarkModeEnabled;
-(long long)minimumNewsVersion;
-(BOOL)isNotificationEnabled;
-(void)ppt_overrideFeedID:(id)arg1;
-(BOOL)hideAccessoryText;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(long long)contentProvider;
-(id)freeFeedIDForBin:(long long)arg1;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(id<FCSectionProviding>)asSection;
-(BOOL)isHidden;
-(FCColor *)groupTitleColor;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;
-(unsigned long long)groupingEligibility;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(BOOL)isArticleReadCountReportingEnabled;
-(NSString *)nameCompact;
-(BOOL)isSubscribable;
-(NSString *)name;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(id)feedIDForBin:(long long)arg1;
-(NSDate *)loadDate;
-(long long)score;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(unsigned long long)userFacingTagType;
-(unsigned long long)tagType;
-(BOOL)isNoLongerAvailable;
-(BOOL)publisherPaidWebAccessOptIn;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;

@end
