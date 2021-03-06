/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {

	long long _appSessionDuration;
	int _appsAutoSubscribeFeedCount;
	NSMutableArray* _autoSubscribedFeedIds;
	int _channelSubscriptionCount;
	NSMutableArray* _groupableFeedIds;
	int _internalAutoSubscribeFeedCount;
	NSMutableArray* _lastVisibleViews;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	int _portraitAutoSubscribeFeedCount;
	int _safariAutoSubscribeFeedCount;
	int _sessionEndReason;
	NSMutableArray* _subscribedFeedIds;
	int _topicSubscriptionCount;
	BOOL _breakingNewsAvailableDuringSession;
	BOOL _breakingNewsDismissedDuringSession;
	BOOL _syncedOtherUserIdDuringSession;
	SCD_Struct_NT33 _has;

}

@property (assign,nonatomic) BOOL hasSessionEndReason; 
@property (assign,nonatomic) int sessionEndReason;                                     //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastVisibleViews;                        //@synthesize lastVisibleViews=_lastVisibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppSessionDuration; 
@property (assign,nonatomic) long long appSessionDuration;                             //@synthesize appSessionDuration=_appSessionDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                       //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsAvailableDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsAvailableDuringSession;                  //@synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsDismissedDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsDismissedDuringSession;                  //@synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoSubscribedFeedIds;                   //@synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupableFeedIds;                        //@synthesize groupableFeedIds=_groupableFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasPortraitAutoSubscribeFeedCount; 
@property (assign,nonatomic) int portraitAutoSubscribeFeedCount;                       //@synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSafariAutoSubscribeFeedCount; 
@property (assign,nonatomic) int safariAutoSubscribeFeedCount;                         //@synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppsAutoSubscribeFeedCount; 
@property (assign,nonatomic) int appsAutoSubscribeFeedCount;                           //@synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasInternalAutoSubscribeFeedCount; 
@property (assign,nonatomic) int internalAutoSubscribeFeedCount;                       //@synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncedOtherUserIdDuringSession; 
@property (assign,nonatomic) BOOL syncedOtherUserIdDuringSession;                      //@synthesize syncedOtherUserIdDuringSession=_syncedOtherUserIdDuringSession - In the implementation block
+(Class)notificationChannelIdsType;
+(Class)paidSubscriptionChannelIdsType;
+(Class)autoSubscribedFeedIdsType;
+(Class)lastVisibleViewsType;
+(Class)groupableFeedIdsType;
+(Class)subscribedFeedIdsType;
-(NSMutableArray *)groupableFeedIds;
-(void)setSessionEndReason:(int)arg1 ;
-(BOOL)hasSyncedOtherUserIdDuringSession;
-(int)sessionEndReason;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(unsigned long long)notificationChannelIdsCount;
-(int)channelSubscriptionCount;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(BOOL)hasChannelSubscriptionCount;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)clearAutoSubscribedFeedIds;
-(void)setHasSafariAutoSubscribeFeedCount:(BOOL)arg1 ;
-(id)lastVisibleViewsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSafariAutoSubscribeFeedCount;
-(NSMutableArray *)subscribedFeedIds;
-(BOOL)hasInternalAutoSubscribeFeedCount;
-(NSMutableArray *)notificationChannelIds;
-(int)notitificationsEnabledChannelsCount;
-(BOOL)hasSessionEndReason;
-(void)setHasSessionEndReason:(BOOL)arg1 ;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(int)portraitAutoSubscribeFeedCount;
-(void)setHasPortraitAutoSubscribeFeedCount:(BOOL)arg1 ;
-(id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subscribedFeedIdsCount;
-(int)topicSubscriptionCount;
-(void)setAutoSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(unsigned long long)groupableFeedIdsCount;
-(BOOL)hasAppsAutoSubscribeFeedCount;
-(BOOL)hasPortraitAutoSubscribeFeedCount;
-(void)addAutoSubscribedFeedIds:(id)arg1 ;
-(BOOL)hasNotificationEnabledChannelsCount;
-(void)setAppsAutoSubscribeFeedCount:(int)arg1 ;
-(int)notificationEnabledChannelsCount;
-(void)setAppSessionDuration:(long long)arg1 ;
-(unsigned long long)autoSubscribedFeedIdsCount;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(void)addNotificationChannelIds:(id)arg1 ;
-(void)clearNotificationChannelIds;
-(int)safariAutoSubscribeFeedCount;
-(void)setGroupableFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)hasTopicSubscriptionCount;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(void)setSafariAutoSubscribeFeedCount:(int)arg1 ;
-(int)appsAutoSubscribeFeedCount;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(NSMutableArray *)autoSubscribedFeedIds;
-(void)clearGroupableFeedIds;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(void)clearSubscribedFeedIds;
-(void)setHasAppsAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(int)StringAsSessionEndReason:(id)arg1 ;
-(BOOL)breakingNewsAvailableDuringSession;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(void)setLastVisibleViews:(NSMutableArray *)arg1 ;
-(long long)appSessionDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBreakingNewsDismissedDuringSession;
-(void)addGroupableFeedIds:(id)arg1 ;
-(void)setHasInternalAutoSubscribeFeedCount:(BOOL)arg1 ;
-(unsigned long long)lastVisibleViewsCount;
-(void)setHasAppSessionDuration:(BOOL)arg1 ;
-(void)setHasBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)sessionEndReasonAsString:(int)arg1 ;
-(void)clearPaidSubscriptionChannelIds;
-(BOOL)breakingNewsDismissedDuringSession;
-(void)setHasSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(void)clearLastVisibleViews;
-(unsigned long long)hash;
-(void)setBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(NSMutableArray *)lastVisibleViews;
-(id)description;
-(void)setInternalAutoSubscribeFeedCount:(int)arg1 ;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(BOOL)hasBreakingNewsAvailableDuringSession;
-(void)setBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(BOOL)syncedOtherUserIdDuringSession;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLastVisibleViews:(id)arg1 ;
-(void)setSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAppSessionDuration;
-(int)internalAutoSubscribeFeedCount;
-(id)groupableFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(void)setPortraitAutoSubscribeFeedCount:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setTopicSubscriptionCount:(int)arg1 ;
@end

