/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSMutableSet, NSMutableDictionary;

@interface FCPaidSubscriptionCursor : FCFeedGroupEmittingCursor {

	NSMutableSet* _processedChannelIDs;
	NSMutableDictionary* _supplementalArticleIDs;
	NSMutableDictionary* _expiredChannelIDs;

}

@property (nonatomic,retain) NSMutableSet * processedChannelIDs;                        //@synthesize processedChannelIDs=_processedChannelIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supplementalArticleIDs;              //@synthesize supplementalArticleIDs=_supplementalArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * expiredChannelIDs;                   //@synthesize expiredChannelIDs=_expiredChannelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableSet *)processedChannelIDs;
-(void)setProcessedChannelIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)supplementalArticleIDs;
-(NSMutableDictionary *)expiredChannelIDs;
-(void)purgeExpiredChannelIdentifiersNotInArray:(id)arg1 ;
-(unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)arg1 ;
-(void)purgeSupplementalArticleIDsNotInArray:(id)arg1 forChannel:(id)arg2 ;
-(void)trackSupplementalFeedItem:(id)arg1 ;
-(unsigned long long)countForFeedItem:(id)arg1 ;
-(void)setSupplementalArticleIDs:(NSMutableDictionary *)arg1 ;
-(void)setExpiredChannelIDs:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
