/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameDescriptor.h>

@class NSString, NSDictionary, GKStoreItemInternal, NSSet, GKGameDescriptor;

@interface GKGameInternal : GKGameDescriptor {

	NSString* _name;
	NSDictionary* _icons;
	NSString* _defaultLeaderboardIdentifier;
	GKStoreItemInternal* _storeItem;
	SCD_Union_GK7 _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;
	NSSet* _compatiblePlatforms;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (assign,nonatomic) BOOL supportsLeaderboards; 
@property (assign,nonatomic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned short numberOfLeaderboards;                  //@synthesize numberOfLeaderboards=_numberOfLeaderboards - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier;              //@synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned short numberOfLeaderboardSets;               //@synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets - In the implementation block
@property (assign,nonatomic) BOOL supportsAchievements; 
@property (assign,nonatomic) unsigned short numberOfAchievements;                  //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned short maxAchievementPoints;                  //@synthesize maxAchievementPoints=_maxAchievementPoints - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiplayer; 
@property (assign,nonatomic) BOOL supportsTurnBasedMultiplayer; 
@property (nonatomic,retain) NSSet * compatiblePlatforms;                          //@synthesize compatiblePlatforms=_compatiblePlatforms - In the implementation block
@property (nonatomic,readonly) BOOL canBeIndexed; 
@property (assign,getter=isValid,nonatomic) BOOL valid; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                      //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,readonly) GKGameDescriptor * gameDescriptor; 
@property (assign,nonatomic) BOOL isArcadeGame; 
@property (assign,nonatomic) BOOL supportsChallenges; 
+(id)secureCodedPropertyKeys;
-(void)setValid:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GKStoreItemInternal *)storeItem;
-(BOOL)supportsChallenges;
-(unsigned short)maxAchievementPoints;
-(BOOL)supportsLeaderboards;
-(BOOL)supportsAchievements;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(BOOL)isValid;
-(unsigned short)numberOfAchievements;
-(BOOL)supportsLeaderboardSets;
-(unsigned short)numberOfCategories;
-(id)description;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)isArcadeGame;
-(NSSet *)compatiblePlatforms;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsChallenges:(BOOL)arg1 ;
-(NSString *)name;
-(unsigned)flags;
-(id)defaultCategory;
-(void)setPrerendered:(BOOL)arg1 ;
-(NSDictionary *)icons;
-(GKGameDescriptor *)gameDescriptor;
-(BOOL)isPrerendered;
-(id)serverRepresentation;
-(BOOL)supportsMultiplayer;
-(BOOL)hasAggregateLeaderboard;
-(unsigned short)numberOfLeaderboardSets;
-(BOOL)supportsTurnBasedMultiplayer;
-(NSString *)defaultLeaderboardIdentifier;
-(void)setNumberOfAchievements:(unsigned short)arg1 ;
-(void)setSupportsLeaderboards:(BOOL)arg1 ;
-(void)setSupportsLeaderboardSets:(BOOL)arg1 ;
-(void)setHasAggregateLeaderboard:(BOOL)arg1 ;
-(void)setSupportsAchievements:(BOOL)arg1 ;
-(void)setSupportsMultiplayer:(BOOL)arg1 ;
-(BOOL)canBeIndexed;
-(void)setSupportsTurnBasedMultiplayer:(BOOL)arg1 ;
-(void)setIsArcadeGame:(BOOL)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(NSString *)arg1 ;
-(unsigned short)numberOfLeaderboards;
-(void)setNumberOfLeaderboards:(unsigned short)arg1 ;
-(void)setNumberOfLeaderboardSets:(unsigned short)arg1 ;
-(void)setMaxAchievementPoints:(unsigned short)arg1 ;
-(void)setCompatiblePlatforms:(NSSet *)arg1 ;
@end
