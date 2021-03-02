/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NTPBArticleTopic;

@interface FCTopicTranslation : NSObject {

	BOOL _isHidden;
	BOOL _isEligibleForGrouping;
	BOOL _isEligibleForGroupingIfFavorited;
	NSString* _tagID;
	NTPBArticleTopic* _articleTopic;

}

@property (nonatomic,retain) NTPBArticleTopic * articleTopic;                    //@synthesize articleTopic=_articleTopic - In the implementation block
@property (nonatomic,retain) NSString * tagID;                                   //@synthesize tagID=_tagID - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                      //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL isEligibleForGrouping;                         //@synthesize isEligibleForGrouping=_isEligibleForGrouping - In the implementation block
@property (assign,nonatomic) BOOL isEligibleForGroupingIfFavorited;              //@synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited - In the implementation block
-(void)setIsHidden:(BOOL)arg1 ;
-(id)init;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(id)initWithLanguageBucket:(id)arg1 ;
-(NTPBArticleTopic *)articleTopic;
-(void)setArticleTopic:(NTPBArticleTopic *)arg1 ;
-(id)description;
-(BOOL)isHidden;
-(BOOL)isEligibleForGroupingIfFavorited;
-(BOOL)isEligibleForGrouping;
-(NSString *)tagID;
-(id)initWithTagID:(id)arg1 ;
@end
