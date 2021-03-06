/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CAPContactFillerContactEvent : PBCodable <NSCopying> {

	double _averageBehavioralRuleConfidence;
	double _averageBehavioralRuleConviction;
	double _averageBehavioralRuleLift;
	double _averageBehavioralRuleMLScore;
	double _averageBehavioralRulePowerFactor;
	double _averageBehavioralRuleSupport;
	double _interactionModelScore;
	double _maximumBehavioralRuleConfidence;
	double _maximumBehavioralRuleConviction;
	double _maximumBehavioralRuleLift;
	double _maximumBehavioralRuleMLScore;
	double _maximumBehavioralRulePowerFactor;
	double _maximumBehavioralRuleSupport;
	double _minimumBehavioralRuleConfidence;
	double _minimumBehavioralRuleConviction;
	double _minimumBehavioralRuleLift;
	double _minimumBehavioralRuleMLScore;
	double _minimumBehavioralRulePowerFactor;
	double _minimumBehavioralRuleSupport;
	double _stdevBehavioralRuleConfidence;
	double _stdevBehavioralRuleConviction;
	double _stdevBehavioralRuleLift;
	double _stdevBehavioralRuleMLScore;
	double _stdevBehavioralRulePowerFactor;
	double _stdevBehavioralRuleSupport;
	unsigned _normalizedIncomingCallFrequency;
	unsigned _normalizedIncomingTextFrequency;
	unsigned _normalizedOutgoingCallFrequency;
	unsigned _normalizedOutgoingTextFrequency;
	unsigned _normalizedShareFrequency;
	unsigned _numberOfBehavioralRulesAdvocating;
	int _timeSinceLastContactViaIncomingCall;
	int _timeSinceLastContactViaIncomingText;
	int _timeSinceLastContactViaOutgoingCall;
	int _timeSinceLastContactViaOutgoingText;
	int _timeSinceLastContactViaShare;
	BOOL _wasShareRecipient;
	SCD_Struct_CA3 _has;

}

@property (assign,nonatomic) int timeSinceLastContactViaShare;                         //@synthesize timeSinceLastContactViaShare=_timeSinceLastContactViaShare - In the implementation block
@property (assign,nonatomic) int timeSinceLastContactViaIncomingText;                  //@synthesize timeSinceLastContactViaIncomingText=_timeSinceLastContactViaIncomingText - In the implementation block
@property (assign,nonatomic) int timeSinceLastContactViaOutgoingText;                  //@synthesize timeSinceLastContactViaOutgoingText=_timeSinceLastContactViaOutgoingText - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastContactViaIncomingCall; 
@property (assign,nonatomic) int timeSinceLastContactViaIncomingCall;                  //@synthesize timeSinceLastContactViaIncomingCall=_timeSinceLastContactViaIncomingCall - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastContactViaOutgoingCall; 
@property (assign,nonatomic) int timeSinceLastContactViaOutgoingCall;                  //@synthesize timeSinceLastContactViaOutgoingCall=_timeSinceLastContactViaOutgoingCall - In the implementation block
@property (assign,nonatomic) unsigned normalizedShareFrequency;                        //@synthesize normalizedShareFrequency=_normalizedShareFrequency - In the implementation block
@property (assign,nonatomic) unsigned normalizedIncomingTextFrequency;                 //@synthesize normalizedIncomingTextFrequency=_normalizedIncomingTextFrequency - In the implementation block
@property (assign,nonatomic) unsigned normalizedOutgoingTextFrequency;                 //@synthesize normalizedOutgoingTextFrequency=_normalizedOutgoingTextFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedIncomingCallFrequency; 
@property (assign,nonatomic) unsigned normalizedIncomingCallFrequency;                 //@synthesize normalizedIncomingCallFrequency=_normalizedIncomingCallFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedOutgoingCallFrequency; 
@property (assign,nonatomic) unsigned normalizedOutgoingCallFrequency;                 //@synthesize normalizedOutgoingCallFrequency=_normalizedOutgoingCallFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfBehavioralRulesAdvocating; 
@property (assign,nonatomic) unsigned numberOfBehavioralRulesAdvocating;               //@synthesize numberOfBehavioralRulesAdvocating=_numberOfBehavioralRulesAdvocating - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRuleSupport; 
@property (assign,nonatomic) double averageBehavioralRuleSupport;                      //@synthesize averageBehavioralRuleSupport=_averageBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRuleConfidence; 
@property (assign,nonatomic) double averageBehavioralRuleConfidence;                   //@synthesize averageBehavioralRuleConfidence=_averageBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRuleLift; 
@property (assign,nonatomic) double averageBehavioralRuleLift;                         //@synthesize averageBehavioralRuleLift=_averageBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRuleConviction; 
@property (assign,nonatomic) double averageBehavioralRuleConviction;                   //@synthesize averageBehavioralRuleConviction=_averageBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRulePowerFactor; 
@property (assign,nonatomic) double averageBehavioralRulePowerFactor;                  //@synthesize averageBehavioralRulePowerFactor=_averageBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) BOOL hasAverageBehavioralRuleMLScore; 
@property (assign,nonatomic) double averageBehavioralRuleMLScore;                      //@synthesize averageBehavioralRuleMLScore=_averageBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRuleSupport; 
@property (assign,nonatomic) double minimumBehavioralRuleSupport;                      //@synthesize minimumBehavioralRuleSupport=_minimumBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRuleConfidence; 
@property (assign,nonatomic) double minimumBehavioralRuleConfidence;                   //@synthesize minimumBehavioralRuleConfidence=_minimumBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRuleLift; 
@property (assign,nonatomic) double minimumBehavioralRuleLift;                         //@synthesize minimumBehavioralRuleLift=_minimumBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRuleConviction; 
@property (assign,nonatomic) double minimumBehavioralRuleConviction;                   //@synthesize minimumBehavioralRuleConviction=_minimumBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRulePowerFactor; 
@property (assign,nonatomic) double minimumBehavioralRulePowerFactor;                  //@synthesize minimumBehavioralRulePowerFactor=_minimumBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumBehavioralRuleMLScore; 
@property (assign,nonatomic) double minimumBehavioralRuleMLScore;                      //@synthesize minimumBehavioralRuleMLScore=_minimumBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRuleSupport; 
@property (assign,nonatomic) double maximumBehavioralRuleSupport;                      //@synthesize maximumBehavioralRuleSupport=_maximumBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRuleConfidence; 
@property (assign,nonatomic) double maximumBehavioralRuleConfidence;                   //@synthesize maximumBehavioralRuleConfidence=_maximumBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRuleLift; 
@property (assign,nonatomic) double maximumBehavioralRuleLift;                         //@synthesize maximumBehavioralRuleLift=_maximumBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRuleConviction; 
@property (assign,nonatomic) double maximumBehavioralRuleConviction;                   //@synthesize maximumBehavioralRuleConviction=_maximumBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRulePowerFactor; 
@property (assign,nonatomic) double maximumBehavioralRulePowerFactor;                  //@synthesize maximumBehavioralRulePowerFactor=_maximumBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumBehavioralRuleMLScore; 
@property (assign,nonatomic) double maximumBehavioralRuleMLScore;                      //@synthesize maximumBehavioralRuleMLScore=_maximumBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRuleSupport; 
@property (assign,nonatomic) double stdevBehavioralRuleSupport;                        //@synthesize stdevBehavioralRuleSupport=_stdevBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRuleConfidence; 
@property (assign,nonatomic) double stdevBehavioralRuleConfidence;                     //@synthesize stdevBehavioralRuleConfidence=_stdevBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRuleLift; 
@property (assign,nonatomic) double stdevBehavioralRuleLift;                           //@synthesize stdevBehavioralRuleLift=_stdevBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRuleConviction; 
@property (assign,nonatomic) double stdevBehavioralRuleConviction;                     //@synthesize stdevBehavioralRuleConviction=_stdevBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRulePowerFactor; 
@property (assign,nonatomic) double stdevBehavioralRulePowerFactor;                    //@synthesize stdevBehavioralRulePowerFactor=_stdevBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) BOOL hasStdevBehavioralRuleMLScore; 
@property (assign,nonatomic) double stdevBehavioralRuleMLScore;                        //@synthesize stdevBehavioralRuleMLScore=_stdevBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) BOOL hasInteractionModelScore; 
@property (assign,nonatomic) double interactionModelScore;                             //@synthesize interactionModelScore=_interactionModelScore - In the implementation block
@property (assign,nonatomic) BOOL wasShareRecipient;                                   //@synthesize wasShareRecipient=_wasShareRecipient - In the implementation block
-(void)setWasShareRecipient:(BOOL)arg1 ;
-(void)setNumberOfBehavioralRulesAdvocating:(unsigned)arg1 ;
-(void)setInteractionModelScore:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)timeSinceLastContactViaShareAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaShare:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)timeSinceLastContactViaIncomingTextAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaIncomingText:(id)arg1 ;
-(id)timeSinceLastContactViaOutgoingTextAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaOutgoingText:(id)arg1 ;
-(int)timeSinceLastContactViaIncomingCall;
-(void)setHasTimeSinceLastContactViaIncomingCall:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastContactViaIncomingCall;
-(id)timeSinceLastContactViaIncomingCallAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaIncomingCall:(id)arg1 ;
-(int)timeSinceLastContactViaOutgoingCall;
-(void)setTimeSinceLastContactViaOutgoingCall:(int)arg1 ;
-(void)setHasTimeSinceLastContactViaOutgoingCall:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastContactViaOutgoingCall;
-(id)timeSinceLastContactViaOutgoingCallAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaOutgoingCall:(id)arg1 ;
-(void)setHasNormalizedIncomingCallFrequency:(BOOL)arg1 ;
-(BOOL)hasNormalizedIncomingCallFrequency;
-(void)setHasNormalizedOutgoingCallFrequency:(BOOL)arg1 ;
-(BOOL)hasNormalizedOutgoingCallFrequency;
-(void)setHasNumberOfBehavioralRulesAdvocating:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRuleLift;
-(BOOL)hasNumberOfBehavioralRulesAdvocating;
-(void)setHasAverageBehavioralRuleSupport:(BOOL)arg1 ;
-(BOOL)hasAverageBehavioralRuleSupport;
-(void)setHasAverageBehavioralRuleConfidence:(BOOL)arg1 ;
-(BOOL)hasAverageBehavioralRuleConfidence;
-(void)setHasAverageBehavioralRuleLift:(BOOL)arg1 ;
-(BOOL)hasAverageBehavioralRuleLift;
-(void)setHasAverageBehavioralRuleConviction:(BOOL)arg1 ;
-(BOOL)hasAverageBehavioralRuleConviction;
-(void)setHasAverageBehavioralRulePowerFactor:(BOOL)arg1 ;
-(BOOL)hasAverageBehavioralRulePowerFactor;
-(void)setHasAverageBehavioralRuleMLScore:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAverageBehavioralRuleMLScore;
-(void)setHasMinimumBehavioralRuleSupport:(BOOL)arg1 ;
-(BOOL)hasMinimumBehavioralRuleSupport;
-(void)setHasMinimumBehavioralRuleConfidence:(BOOL)arg1 ;
-(BOOL)hasMinimumBehavioralRuleConfidence;
-(void)setHasMinimumBehavioralRuleLift:(BOOL)arg1 ;
-(BOOL)hasMinimumBehavioralRuleLift;
-(void)setHasMinimumBehavioralRuleConviction:(BOOL)arg1 ;
-(BOOL)hasMinimumBehavioralRuleConviction;
-(void)setHasMinimumBehavioralRulePowerFactor:(BOOL)arg1 ;
-(BOOL)hasMinimumBehavioralRulePowerFactor;
-(void)setHasMinimumBehavioralRuleMLScore:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setAverageBehavioralRuleMLScore:(double)arg1 ;
-(void)setMaximumBehavioralRuleMLScore:(double)arg1 ;
-(void)setMinimumBehavioralRuleMLScore:(double)arg1 ;
-(void)setStdevBehavioralRuleMLScore:(double)arg1 ;
-(void)setAverageBehavioralRuleConfidence:(double)arg1 ;
-(void)setMaximumBehavioralRuleConfidence:(double)arg1 ;
-(void)setMinimumBehavioralRuleConfidence:(double)arg1 ;
-(BOOL)hasMinimumBehavioralRuleMLScore;
-(void)setHasMaximumBehavioralRuleSupport:(BOOL)arg1 ;
-(BOOL)hasMaximumBehavioralRuleSupport;
-(void)setHasMaximumBehavioralRuleConfidence:(BOOL)arg1 ;
-(BOOL)hasMaximumBehavioralRuleConfidence;
-(void)setHasMaximumBehavioralRuleLift:(BOOL)arg1 ;
-(BOOL)hasMaximumBehavioralRuleLift;
-(void)setHasMaximumBehavioralRuleConviction:(BOOL)arg1 ;
-(BOOL)hasMaximumBehavioralRuleConviction;
-(void)setHasMaximumBehavioralRulePowerFactor:(BOOL)arg1 ;
-(BOOL)hasMaximumBehavioralRulePowerFactor;
-(void)setHasMaximumBehavioralRuleMLScore:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasMaximumBehavioralRuleMLScore;
-(void)setHasStdevBehavioralRuleSupport:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRuleSupport;
-(void)setHasStdevBehavioralRuleConfidence:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRuleConfidence;
-(void)setHasStdevBehavioralRuleLift:(BOOL)arg1 ;
-(void)setHasStdevBehavioralRuleConviction:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRuleConviction;
-(void)setHasStdevBehavioralRulePowerFactor:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRulePowerFactor;
-(void)setHasStdevBehavioralRuleMLScore:(BOOL)arg1 ;
-(BOOL)hasStdevBehavioralRuleMLScore;
-(BOOL)hasInteractionModelScore;
-(void)setStdevBehavioralRuleConfidence:(double)arg1 ;
-(void)setAverageBehavioralRuleConviction:(double)arg1 ;
-(void)setMaximumBehavioralRuleConviction:(double)arg1 ;
-(void)setMinimumBehavioralRuleConviction:(double)arg1 ;
-(void)setStdevBehavioralRuleConviction:(double)arg1 ;
-(void)setAverageBehavioralRuleLift:(double)arg1 ;
-(void)setMaximumBehavioralRuleLift:(double)arg1 ;
-(void)setMinimumBehavioralRuleLift:(double)arg1 ;
-(void)setStdevBehavioralRuleLift:(double)arg1 ;
-(void)setAverageBehavioralRuleSupport:(double)arg1 ;
-(void)setMaximumBehavioralRuleSupport:(double)arg1 ;
-(void)setMinimumBehavioralRuleSupport:(double)arg1 ;
-(void)setStdevBehavioralRuleSupport:(double)arg1 ;
-(void)setHasInteractionModelScore:(BOOL)arg1 ;
-(int)timeSinceLastContactViaShare;
-(int)timeSinceLastContactViaIncomingText;
-(int)timeSinceLastContactViaOutgoingText;
-(unsigned)normalizedShareFrequency;
-(unsigned)normalizedIncomingTextFrequency;
-(unsigned)normalizedOutgoingTextFrequency;
-(unsigned)normalizedIncomingCallFrequency;
-(unsigned)normalizedOutgoingCallFrequency;
-(unsigned)numberOfBehavioralRulesAdvocating;
-(double)averageBehavioralRuleSupport;
-(double)averageBehavioralRuleConfidence;
-(double)averageBehavioralRuleLift;
-(double)stdevBehavioralRuleLift;
-(void)setAverageBehavioralRulePowerFactor:(double)arg1 ;
-(void)setMaximumBehavioralRulePowerFactor:(double)arg1 ;
-(void)setMinimumBehavioralRulePowerFactor:(double)arg1 ;
-(void)setStdevBehavioralRulePowerFactor:(double)arg1 ;
-(void)setNormalizedShareFrequency:(unsigned)arg1 ;
-(void)setNormalizedIncomingTextFrequency:(unsigned)arg1 ;
-(void)setNormalizedOutgoingTextFrequency:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNormalizedOutgoingCallFrequency:(unsigned)arg1 ;
-(void)setNormalizedIncomingCallFrequency:(unsigned)arg1 ;
-(void)setTimeSinceLastContactViaIncomingCall:(int)arg1 ;
-(void)setTimeSinceLastContactViaShare:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimeSinceLastContactViaIncomingText:(int)arg1 ;
-(void)setTimeSinceLastContactViaOutgoingText:(int)arg1 ;
-(double)averageBehavioralRuleConviction;
-(double)averageBehavioralRulePowerFactor;
-(double)averageBehavioralRuleMLScore;
-(double)minimumBehavioralRuleSupport;
-(double)minimumBehavioralRuleConfidence;
-(double)minimumBehavioralRuleLift;
-(double)minimumBehavioralRuleConviction;
-(double)minimumBehavioralRulePowerFactor;
-(double)minimumBehavioralRuleMLScore;
-(double)maximumBehavioralRuleSupport;
-(double)maximumBehavioralRuleConfidence;
-(double)maximumBehavioralRuleLift;
-(double)maximumBehavioralRuleConviction;
-(double)maximumBehavioralRulePowerFactor;
-(double)maximumBehavioralRuleMLScore;
-(double)stdevBehavioralRuleSupport;
-(double)stdevBehavioralRuleConfidence;
-(double)stdevBehavioralRuleConviction;
-(double)stdevBehavioralRulePowerFactor;
-(double)stdevBehavioralRuleMLScore;
-(double)interactionModelScore;
-(BOOL)wasShareRecipient;
-(void)writeTo:(id)arg1 ;
@end

