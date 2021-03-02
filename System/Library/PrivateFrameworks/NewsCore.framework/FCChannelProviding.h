/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FCChannelProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSArray * sectionIDs; 
@property (nonatomic,copy,readonly) NSString * defaultSectionID; 
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@property (nonatomic,copy,readonly) NSArray * currentIssueIDs; 
@property (nonatomic,copy,readonly) NSString * backIssuesListID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) NSString * supergroupConfigJson; 
@required
-(NSArray *)currentIssueIDs;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(BOOL)isWhitelisted;
-(NSArray *)sectionIDs;
-(NSString *)backIssuesListID;
-(NSString *)defaultSectionID;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(BOOL)supportsNotifications;
-(NSString *)supergroupConfigJson;
-(NSString *)supergroupKnobsJson;

@end
