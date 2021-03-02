/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSString, NSDictionary, NSData, GKTournamentInternal;

@interface GKMatchRequestInternal : GKInternalRepresentation {

	unsigned long long _matchType;
	NSArray* _recipients;
	NSArray* _recipientPlayerIDs;
	NSString* _inviteMessage;
	NSDictionary* _localizableInviteMessage;
	NSData* _sessionToken;
	NSString* _rid;
	unsigned _version;
	BOOL _preloadedMatch;
	unsigned long long _playerGroup;
	unsigned _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;
	BOOL _restrictToAutomatch;
	GKTournamentInternal* _tournamentForInvitePool;

}

@property (assign,nonatomic) unsigned char minPlayers;                                    //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                                    //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) unsigned char defaultNumberOfPlayers;                        //@synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned long long playerGroup;                              //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                                   //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * recipientPlayerIDs;                                //@synthesize recipientPlayerIDs=_recipientPlayerIDs - In the implementation block
@property (nonatomic,copy) NSString * inviteMessage;                                      //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableInviteMessage;                     //@synthesize localizableInviteMessage=_localizableInviteMessage - In the implementation block
@property (assign,nonatomic) BOOL restrictToAutomatch;                                    //@synthesize restrictToAutomatch=_restrictToAutomatch - In the implementation block
@property (nonatomic,retain) GKTournamentInternal * tournamentForInvitePool;              //@synthesize tournamentForInvitePool=_tournamentForInvitePool - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                                //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                                       //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * rid;                                              //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned version;                                            //@synthesize version=_version - In the implementation block
@property (assign,getter=isPreloadedMatch,nonatomic) BOOL preloadedMatch;                 //@synthesize preloadedMatch=_preloadedMatch - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSString *)rid;
-(id)init;
-(void)setSessionToken:(NSData *)arg1 ;
-(NSData *)sessionToken;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)dealloc;
-(void)setDefaultNumberOfPlayers:(unsigned char)arg1 ;
-(unsigned char)minPlayers;
-(unsigned long long)hash;
-(NSString *)inviteMessage;
-(unsigned char)maxPlayers;
-(void)setPreloadedMatch:(BOOL)arg1 ;
-(void)setPlayerGroup:(unsigned long long)arg1 ;
-(unsigned long long)playerGroup;
-(void)setRestrictToAutomatch:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)version;
-(unsigned char)defaultNumberOfPlayers;
-(void)setInviteMessage:(NSString *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)restrictToAutomatch;
-(unsigned long long)matchType;
-(unsigned)playerAttributes;
-(NSArray *)recipientPlayerIDs;
-(void)setRecipientPlayerIDs:(NSArray *)arg1 ;
-(GKTournamentInternal *)tournamentForInvitePool;
-(void)setTournamentForInvitePool:(GKTournamentInternal *)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(NSDictionary *)localizableInviteMessage;
-(BOOL)isPreloadedMatch;
-(BOOL)hasGuestPlayers;
-(void)setLocalizableInviteMessage:(NSDictionary *)arg1 ;
@end
