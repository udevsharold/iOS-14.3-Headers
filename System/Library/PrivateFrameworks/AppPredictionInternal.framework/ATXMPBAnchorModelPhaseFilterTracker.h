/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBAnchorModelPhaseFilterTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	NSString* _anchorType;
	unsigned _numEndingCandidates;
	unsigned _numStartingCandidates;
	int _phaseDescription;
	NSString* _phaseType;
	SCD_Struct_AT7 _has;

}

@property (assign,nonatomic) BOOL hasPhaseDescription; 
@property (assign,nonatomic) int phaseDescription;                        //@synthesize phaseDescription=_phaseDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPhaseType; 
@property (nonatomic,retain) NSString * phaseType;                        //@synthesize phaseType=_phaseType - In the implementation block
@property (assign,nonatomic) BOOL hasNumStartingCandidates; 
@property (assign,nonatomic) unsigned numStartingCandidates;              //@synthesize numStartingCandidates=_numStartingCandidates - In the implementation block
@property (assign,nonatomic) BOOL hasNumEndingCandidates; 
@property (assign,nonatomic) unsigned numEndingCandidates;                //@synthesize numEndingCandidates=_numEndingCandidates - In the implementation block
@property (nonatomic,readonly) BOOL hasAnchorType; 
@property (nonatomic,retain) NSString * anchorType;                       //@synthesize anchorType=_anchorType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                          //@synthesize abGroup=_abGroup - In the implementation block
-(void)setAbGroup:(NSString *)arg1 ;
-(NSString *)abGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAbGroup;
-(void)setPhaseDescription:(int)arg1 ;
-(int)phaseDescription;
-(NSString *)anchorType;
-(void)writeTo:(id)arg1 ;
-(NSString *)phaseType;
-(void)setAnchorType:(NSString *)arg1 ;
-(void)setPhaseType:(NSString *)arg1 ;
-(void)setNumStartingCandidates:(unsigned)arg1 ;
-(void)setNumEndingCandidates:(unsigned)arg1 ;
-(unsigned)numStartingCandidates;
-(unsigned)numEndingCandidates;
-(void)setHasPhaseDescription:(BOOL)arg1 ;
-(BOOL)hasPhaseDescription;
-(id)phaseDescriptionAsString:(int)arg1 ;
-(int)StringAsPhaseDescription:(id)arg1 ;
-(BOOL)hasPhaseType;
-(void)setHasNumStartingCandidates:(BOOL)arg1 ;
-(BOOL)hasNumStartingCandidates;
-(void)setHasNumEndingCandidates:(BOOL)arg1 ;
-(BOOL)hasNumEndingCandidates;
-(BOOL)hasAnchorType;
@end
