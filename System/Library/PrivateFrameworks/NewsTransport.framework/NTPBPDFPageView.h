/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBPDFPageView : PBCodable <NSCopying> {

	SCD_Struct_NT10* _pageIndices;
	NSString* _campaignId;
	NTPBChannelData* _channelData;
	int _groupType;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewData* _issueViewData;
	NSString* _language;
	NSString* _notificationId;
	int _pageCount;
	int _paidSubscriberToFeedType;
	int _paidSubscriptionConversionPointType;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	NSString* _sourceChannelId;
	BOOL _adSupportedChannel;
	BOOL _isFreeIssue;
	BOOL _isPaidSubscriberToSourceChannel;
	BOOL _viewFromNotificationDirectOpen;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                        //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) unsigned long long pageIndicesCount; 
@property (nonatomic,readonly) int* pageIndices; 
@property (assign,nonatomic) BOOL hasPageCount; 
@property (assign,nonatomic) int pageCount;                                            //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) BOOL hasIsFreeIssue; 
@property (assign,nonatomic) BOOL isFreeIssue;                                         //@synthesize isFreeIssue=_isFreeIssue - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                  //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                  //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                     //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                            //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                    //@synthesize campaignId=_campaignId - In the implementation block
@property (assign,nonatomic) BOOL hasViewFromNotificationDirectOpen; 
@property (assign,nonatomic) BOOL viewFromNotificationDirectOpen;                      //@synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                                //@synthesize notificationId=_notificationId - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                            //@synthesize channelData=_channelData - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriberToFeedType; 
@property (assign,nonatomic) int paidSubscriberToFeedType;                             //@synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                    //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                  //@synthesize referringUrl=_referringUrl - In the implementation block
-(BOOL)hasChannelData;
-(NSString *)campaignId;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(void)setGroupType:(int)arg1 ;
-(NSString *)referringSourceApplication;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(NTPBChannelData *)channelData;
-(void)setViewFromNotificationDirectOpen:(BOOL)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(NSString *)parentFeedId;
-(BOOL)hasCampaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(BOOL)adSupportedChannel;
-(int)groupType;
-(void)setHasGroupType:(BOOL)arg1 ;
-(NSString *)notificationId;
-(BOOL)viewFromNotificationDirectOpen;
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasReferringUrl;
-(BOOL)hasSourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(BOOL)hasGroupType;
-(NSString *)sourceChannelId;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(void)setNotificationId:(NSString *)arg1 ;
-(BOOL)hasNotificationId;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(id)paidSubscriberToFeedTypeAsString:(int)arg1 ;
-(BOOL)hasReferringSourceApplication;
-(NTPBIssueData *)issueData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(BOOL)isPaidSubscriberToSourceChannel;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(void)setReferringUrl:(NSString *)arg1 ;
-(NTPBIssueExposureData *)issueExposureData;
-(BOOL)hasIssueExposureData;
-(NSString *)referringUrl;
-(void)setParentFeedType:(int)arg1 ;
-(void)dealloc;
-(NTPBIssueViewData *)issueViewData;
-(BOOL)hasViewFromNotificationDirectOpen;
-(BOOL)hasParentFeedType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)pageCount;
-(unsigned long long)hash;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(int)parentFeedType;
-(BOOL)hasParentFeedId;
-(BOOL)hasIssueData;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NSString *)language;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(id)description;
-(void)setHasPaidSubscriberToFeedType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setParentFeedId:(NSString *)arg1 ;
-(int)StringAsPaidSubscriberToFeedType:(id)arg1 ;
-(unsigned long long)pageIndicesCount;
-(int)pageIndicesAtIndex:(unsigned long long)arg1 ;
-(void)addPageIndices:(int)arg1 ;
-(int*)pageIndices;
-(void)clearPageIndices;
-(void)setPageIndices:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasPageCount:(BOOL)arg1 ;
-(BOOL)hasPageCount;
-(void)setIsFreeIssue:(BOOL)arg1 ;
-(void)setHasIsFreeIssue:(BOOL)arg1 ;
-(BOOL)hasIsFreeIssue;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(BOOL)isFreeIssue;
-(void)setPageCount:(int)arg1 ;
-(BOOL)hasPaidSubscriberToFeedType;
-(void)setHasViewFromNotificationDirectOpen:(BOOL)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(int)paidSubscriberToFeedType;
-(void)setPaidSubscriberToFeedType:(int)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIssueViewData;
@end
