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

@interface ATXPBBlendingSessionClientModelSuggestion : PBCodable <NSCopying> {

	double _rawScore;
	NSString* _executableId;
	int _suggestedConfidenceCategory;
	SCD_Struct_Co2 _has;

}

@property (nonatomic,readonly) BOOL hasExecutableId; 
@property (nonatomic,retain) NSString * executableId;                          //@synthesize executableId=_executableId - In the implementation block
@property (assign,nonatomic) BOOL hasRawScore; 
@property (assign,nonatomic) double rawScore;                                  //@synthesize rawScore=_rawScore - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestedConfidenceCategory; 
@property (assign,nonatomic) int suggestedConfidenceCategory;                  //@synthesize suggestedConfidenceCategory=_suggestedConfidenceCategory - In the implementation block
-(void)setRawScore:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuggestedConfidenceCategory:(int)arg1 ;
-(BOOL)hasRawScore;
-(double)rawScore;
-(void)setHasRawScore:(BOOL)arg1 ;
-(void)setHasSuggestedConfidenceCategory:(BOOL)arg1 ;
-(BOOL)hasSuggestedConfidenceCategory;
-(id)suggestedConfidenceCategoryAsString:(int)arg1 ;
-(int)StringAsSuggestedConfidenceCategory:(id)arg1 ;
-(int)suggestedConfidenceCategory;
-(void)writeTo:(id)arg1 ;
-(void)setExecutableId:(NSString *)arg1 ;
-(BOOL)hasExecutableId;
-(NSString *)executableId;
@end

