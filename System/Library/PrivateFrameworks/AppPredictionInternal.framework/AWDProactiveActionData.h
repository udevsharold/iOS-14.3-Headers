/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveActionData : PBCodable <NSCopying> {

	double _score;
	unsigned long long _timestamp;
	NSString* _actionKey;
	int _cacheRank;
	NSString* _engaged;
	NSString* _heuristicName;
	NSString* _sessionId;
	AWDProactiveAppPredictionSubscores* _subscores;
	BOOL _engagedAction;
	BOOL _futureMedia;
	BOOL _shown;
	SCD_Struct_Co1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActionKey; 
@property (nonatomic,retain) NSString * actionKey;                                        //@synthesize actionKey=_actionKey - In the implementation block
@property (assign,nonatomic) BOOL hasCacheRank; 
@property (assign,nonatomic) int cacheRank;                                               //@synthesize cacheRank=_cacheRank - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedAction; 
@property (assign,nonatomic) BOOL engagedAction;                                          //@synthesize engagedAction=_engagedAction - In the implementation block
@property (assign,nonatomic) BOOL hasFutureMedia; 
@property (assign,nonatomic) BOOL futureMedia;                                            //@synthesize futureMedia=_futureMedia - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                                //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasShown; 
@property (assign,nonatomic) BOOL shown;                                                  //@synthesize shown=_shown - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscores; 
@property (nonatomic,retain) AWDProactiveAppPredictionSubscores * subscores;              //@synthesize subscores=_subscores - In the implementation block
@property (nonatomic,readonly) BOOL hasHeuristicName; 
@property (nonatomic,retain) NSString * heuristicName;                                    //@synthesize heuristicName=_heuristicName - In the implementation block
@property (nonatomic,readonly) BOOL hasEngaged; 
@property (nonatomic,retain) NSString * engaged;                                          //@synthesize engaged=_engaged - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                        //@synthesize sessionId=_sessionId - In the implementation block
-(void)setSessionId:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasScore:(BOOL)arg1 ;
-(void)setFutureMedia:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSubscores;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasShown;
-(BOOL)readFrom:(id)arg1 ;
-(int)cacheRank;
-(BOOL)hasActionKey;
-(void)setHeuristicName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setEngagedAction:(BOOL)arg1 ;
-(void)setHasCacheRank:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setActionKey:(NSString *)arg1 ;
-(void)setCacheRank:(int)arg1 ;
-(id)description;
-(NSString *)heuristicName;
-(BOOL)hasScore;
-(BOOL)hasEngaged;
-(void)setEngaged:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasEngagedAction;
-(BOOL)hasTimestamp;
-(BOOL)hasFutureMedia;
-(void)setHasEngagedAction:(BOOL)arg1 ;
-(BOOL)hasHeuristicName;
-(void)setHasFutureMedia:(BOOL)arg1 ;
-(void)setHasShown:(BOOL)arg1 ;
-(NSString *)actionKey;
-(NSString *)sessionId;
-(void)setShown:(BOOL)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(AWDProactiveAppPredictionSubscores *)subscores;
-(NSString *)engaged;
-(BOOL)futureMedia;
-(BOOL)engagedAction;
-(void)setSubscores:(AWDProactiveAppPredictionSubscores *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCacheRank;
-(BOOL)shown;
@end

