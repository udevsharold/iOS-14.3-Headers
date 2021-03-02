/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBChannelData, NTPBIssueData, NTPBIssueViewData;

@interface NTPBAudioEngagementCompleted : PBCodable <NSCopying> {

	long long _timePlayed;
	long long _trackDuration;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NTPBChannelData* _channelData;
	NSString* _engagementId;
	NSString* _feedId;
	int _feedType;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NTPBIssueData* _issueData;
	NTPBIssueViewData* _issueViewData;
	NSString* _language;
	float _playbackSpeed;
	NSString* _sourceChannelId;
	int _trackVariant;
	BOOL _adSupportedChannel;
	BOOL _isPaidSubscriberToSourceChannel;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                 //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                           //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                              //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                        //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                               //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                         //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                         //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                    //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasTrackDuration; 
@property (assign,nonatomic) long long trackDuration;                              //@synthesize trackDuration=_trackDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackVariant; 
@property (assign,nonatomic) int trackVariant;                                     //@synthesize trackVariant=_trackVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                     //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasTimePlayed; 
@property (assign,nonatomic) long long timePlayed;                                 //@synthesize timePlayed=_timePlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                            //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                    //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                        //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                  //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackSpeed; 
@property (assign,nonatomic) float playbackSpeed;                                  //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (nonatomic,readonly) BOOL hasEngagementId; 
@property (nonatomic,retain) NSString * engagementId;                              //@synthesize engagementId=_engagementId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                 //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
-(BOOL)hasChannelData;
-(void)setGroupType:(int)arg1 ;
-(BOOL)hasArticleId;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(NSString *)articleId;
-(NTPBChannelData *)channelData;
-(BOOL)hasGroupFeedId;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(NSData *)groupViewExposureId;
-(BOOL)adSupportedChannel;
-(int)groupType;
-(void)setHasGroupType:(BOOL)arg1 ;
-(id)groupTypeAsString:(int)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)hasSourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(int)feedType;
-(BOOL)hasGroupType;
-(NSString *)groupFeedId;
-(BOOL)hasFeedType;
-(BOOL)hasGroupViewExposureId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasPlaybackSpeed;
-(void)setHasPlaybackSpeed:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(NTPBIssueData *)issueData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPaidSubscriberToSourceChannel;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(NTPBIssueViewData *)issueViewData;
-(BOOL)readFrom:(id)arg1 ;
-(long long)trackDuration;
-(unsigned long long)hash;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(long long)timePlayed;
-(BOOL)hasIssueData;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NSString *)language;
-(void)setTimePlayed:(long long)arg1 ;
-(void)setHasTimePlayed:(BOOL)arg1 ;
-(BOOL)hasTimePlayed;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(NSString *)feedId;
-(id)description;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setEngagementId:(NSString *)arg1 ;
-(void)setTrackDuration:(long long)arg1 ;
-(void)setHasTrackDuration:(BOOL)arg1 ;
-(BOOL)hasTrackDuration;
-(int)trackVariant;
-(void)setTrackVariant:(int)arg1 ;
-(void)setHasTrackVariant:(BOOL)arg1 ;
-(BOOL)hasTrackVariant;
-(id)trackVariantAsString:(int)arg1 ;
-(int)StringAsTrackVariant:(id)arg1 ;
-(BOOL)hasEngagementId;
-(BOOL)hasFeedId;
-(NSString *)engagementId;
-(void)setFeedType:(int)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIssueViewData;
@end
