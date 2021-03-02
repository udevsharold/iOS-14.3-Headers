/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreNameParser/CoreNameParser-Structs.h>
@class NPNameComponentsData;

@interface NPHMMClassifier : NSObject {

	unsigned long long _totalGivenNamesCount;
	unsigned long long _totalFamilyNamesCount;
	unsigned long long _uniqueGivenNamesCount;
	unsigned long long _uniqueFamilyNamesCount;
	NPNameComponentsData* _nameComponentsData;
	SCD_Struct_NP2 _stateProbabilities;

}

@property (assign) SCD_Struct_NP3 stateProbabilities;              //@synthesize stateProbabilities=_stateProbabilities - In the implementation block
-(BOOL)isInitial:(id)arg1 ;
-(double)stateTransitionProbabilityFrom:(id)arg1 to:(id)arg2 ;
-(id)candidatesOfSize:(unsigned long long)arg1 constraints:(unsigned long long)arg2 compoundsConstraints:(id)arg3 labelsContraints:(id)arg4 ;
-(CFBurstTrieRef)nameFrequencyTrieRef;
-(void)dealloc;
-(unsigned long long)payloadForName:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithHMMProbabilities:(SCD_Struct_NP3)arg1 nameComponentsDate:(id)arg2 ;
-(id)candidatesBasedOnFormatSequence:(id)arg1 ;
-(void)setStateProbabilities:(SCD_Struct_NP3)arg1 ;
-(double)startProbability:(id)arg1 ;
-(unsigned long long)frequencyForName:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isLinkingToken:(id)arg1 ;
-(id)candidatesBasedOnCommaDelimiterIndex:(unsigned long long)arg1 sequenceSize:(unsigned long long)arg2 ;
-(BOOL)formCompoundGivenName:(id)arg1 ;
-(SCD_Struct_NP3)stateProbabilities;
-(BOOL)formCompoundFamilyName:(id)arg1 ;
-(BOOL)validSequence:(id)arg1 compoundsConstraints:(id)arg2 labelsConstraints:(id)arg3 ;
-(id)compoundsFromName:(id)arg1 ;
-(unsigned long long)genderMajorityForGivenName:(id)arg1 ;
-(double)emissionProbability:(id)arg1 hiddenState:(unsigned long long)arg2 isOOV:(BOOL*)arg3 ;
-(id)probabilityForHiddenSequence:(id)arg1 knowingObservationSequence:(id)arg2 boost:(unsigned long long)arg3 ;
-(BOOL)isGivenNameAbbreviation:(id)arg1 ;
-(unsigned long long)extractMetricForType:(unsigned long long)arg1 ;
-(BOOL)isCoupleName:(id)arg1 ;
-(id)compoundsFromName:(id)arg1 includeSpaceAsDelimiter:(BOOL)arg2 ;
-(BOOL)isParticle:(id)arg1 ;
-(id)hiddenStatesFromObservationSequence:(id)arg1 ;
@end
