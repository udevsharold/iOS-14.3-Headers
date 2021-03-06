/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation {

	BOOL _friendsOnly;
	NSArray* _participantStates;
	long long _startIndex;
	long long _count;

}

@property (nonatomic,retain) NSArray * participantStates;              //@synthesize participantStates=_participantStates - In the implementation block
@property (assign,nonatomic) BOOL friendsOnly;                         //@synthesize friendsOnly=_friendsOnly - In the implementation block
@property (assign,nonatomic) long long startIndex;                     //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long count;                          //@synthesize count=_count - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setCount:(long long)arg1 ;
-(long long)count;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(NSArray *)participantStates;
-(void)setParticipantStates:(NSArray *)arg1 ;
-(BOOL)friendsOnly;
-(void)setFriendsOnly:(BOOL)arg1 ;
@end

