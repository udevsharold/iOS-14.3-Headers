/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTPBChannelMembershipRecord, FCInterestToken, NSString;

@interface FCChannelMembership : NSObject {

	NTPBChannelMembershipRecord* _record;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBChannelMembershipRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                   //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) BOOL isAllowedToSeeDrafts; 
@property (nonatomic,readonly) NSString * draftArticleListID; 
@property (nonatomic,readonly) NSString * draftIssueListID; 
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(NTPBChannelMembershipRecord *)record;
-(NSString *)channelID;
-(BOOL)isAllowedToSeeDrafts;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(void)setRecord:(NTPBChannelMembershipRecord *)arg1 ;
@end

