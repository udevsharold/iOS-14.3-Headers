/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDictionary, NSNumber;


@protocol BCSLinkItemDescribing <NSObject>
@property (nonatomic,retain,readonly) NSURL * linkURL; 
@property (nonatomic,copy,readonly) NSString * fullHash; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSString * heroImageURLString; 
@property (nonatomic,retain,readonly) NSString * iconImageURLString; 
@property (nonatomic,retain,readonly) NSURL * redirectURL; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) BOOL isPoweredBy; 
@property (nonatomic,retain,readonly) NSDictionary * mapIconStyleAttributes; 
@property (nonatomic,retain,readonly) NSNumber * mapItemMUID; 
@required
-(NSURL *)redirectURL;
-(NSURL *)linkURL;
-(NSString *)bundleID;
-(long long)action;
-(BOOL)isPoweredBy;
-(NSString *)fullHash;
-(NSDictionary *)mapIconStyleAttributes;
-(NSNumber *)mapItemMUID;
-(NSString *)heroImageURLString;
-(NSString *)iconImageURLString;

@end

