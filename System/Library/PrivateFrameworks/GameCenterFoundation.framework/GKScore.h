/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKScoreInternal, GKGame, NSString, NSDate, GKPlayer;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _shouldSetDefaultLeaderboard;
	GKScoreInternal* _internal;
	GKGame* _game;

}

@property (nonatomic,copy) NSString * category; 
@property (retain) GKScoreInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (retain,readonly) NSString * playerID; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * formattedValue; 
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier; 
@property (assign) BOOL valueSet; 
@property (nonatomic,retain) GKGame * game;                                      //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) long long value; 
@property (nonatomic,copy) NSString * leaderboardIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
@property (nonatomic,retain,readonly) NSDate * date; 
@property (nonatomic,retain,readonly) GKPlayer * player; 
@property (assign,nonatomic) BOOL shouldSetDefaultLeaderboard;                   //@synthesize shouldSetDefaultLeaderboard=_shouldSetDefaultLeaderboard - In the implementation block
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)reportScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)reportScores:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(GKGame *)game;
-(NSString *)playerID;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(GKPlayer *)player;
-(GKScoreInternal *)internal;
-(unsigned long long)hash;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)description;
-(void)setInternal:(GKScoreInternal *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 ;
-(BOOL)shouldSetDefaultLeaderboard;
-(id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportScoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldSetDefaultLeaderboard:(BOOL)arg1 ;
@end
