/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSDictionary;


@protocol PGGraphIngestPerson <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@required
-(BOOL)isFavorite;
-(BOOL)isMe;
-(NSString *)contactID;
-(NSString *)fullName;
-(NSDate *)birthdayDate;
-(BOOL)isUserCreated;
-(NSString *)UUID;
-(unsigned long long)relationship;
-(NSDate *)anniversaryDate;
-(unsigned long long)sex;
-(unsigned long long)ageCategory;
-(NSDate *)potentialBirthdayDate;
-(NSDictionary *)locationsByAddressTypes;

@end
