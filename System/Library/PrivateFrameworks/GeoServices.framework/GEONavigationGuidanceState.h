/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevelIgnoringTimeCriterion;
	int _guidanceLevel;
	int _navigationState;
	int _navigationType;
	int _trackedTransportType;
	BOOL _shouldSuppressCellularDataAlerts;
	struct {
		unsigned has_guidanceLevelIgnoringTimeCriterion : 1;
		unsigned has_guidanceLevel : 1;
		unsigned has_navigationState : 1;
		unsigned has_navigationType : 1;
		unsigned has_trackedTransportType : 1;
		unsigned has_shouldSuppressCellularDataAlerts : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType; 
@property (assign,nonatomic) BOOL hasNavigationState; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) BOOL hasGuidanceLevel; 
@property (assign,nonatomic) int guidanceLevel; 
@property (assign,nonatomic) BOOL hasShouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL shouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion; 
@property (assign,nonatomic) int guidanceLevelIgnoringTimeCriterion; 
@property (assign,nonatomic) BOOL hasNavigationType; 
@property (assign,nonatomic) int navigationType; 
+(BOOL)isValid:(id)arg1 ;
-(int)navigationState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setGuidanceLevel:(int)arg1 ;
-(void)setShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1 ;
-(int)trackedTransportType;
-(void)setHasTrackedTransportType:(BOOL)arg1 ;
-(BOOL)hasTrackedTransportType;
-(id)trackedTransportTypeAsString:(int)arg1 ;
-(int)StringAsTrackedTransportType:(id)arg1 ;
-(void)setHasNavigationState:(BOOL)arg1 ;
-(BOOL)hasNavigationState;
-(id)navigationStateAsString:(int)arg1 ;
-(int)guidanceLevel;
-(int)StringAsNavigationState:(id)arg1 ;
-(void)setHasGuidanceLevel:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevel;
-(id)guidanceLevelAsString:(int)arg1 ;
-(int)StringAsGuidanceLevel:(id)arg1 ;
-(BOOL)shouldSuppressCellularDataAlerts;
-(int)guidanceLevelIgnoringTimeCriterion;
-(void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressCellularDataAlerts;
-(void)setHasGuidanceLevelIgnoringTimeCriterion:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevelIgnoringTimeCriterion;
-(id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1 ;
-(int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1 ;
-(void)setHasNavigationType:(BOOL)arg1 ;
-(BOOL)hasNavigationType;
-(id)navigationTypeAsString:(int)arg1 ;
-(int)StringAsNavigationType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(id)initWithTransportType:(int)arg1 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
-(int)navigationType;
-(void)setNavigationState:(int)arg1 ;
-(void)setTrackedTransportType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNavigationType:(int)arg1 ;
@end
