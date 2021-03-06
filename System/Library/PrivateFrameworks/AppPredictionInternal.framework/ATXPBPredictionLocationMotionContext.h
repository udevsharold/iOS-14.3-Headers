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

@class ATXPBPredictionLocationOfInterest, NSData;

@interface ATXPBPredictionLocationMotionContext : PBCodable <NSCopying> {

	double _distanceFromGym;
	double _distanceFromHome;
	double _distanceFromSchool;
	double _distanceFromWork;
	ATXPBPredictionLocationOfInterest* _currentLOI;
	NSData* _currentLocation;
	int _motionType;
	ATXPBPredictionLocationOfInterest* _previousLOI;
	BOOL _canPredictClipsGivenRecentMotion;
	BOOL _locationEnabled;
	SCD_Struct_AT27 _has;

}

@property (nonatomic,readonly) BOOL hasPreviousLOI; 
@property (nonatomic,retain) ATXPBPredictionLocationOfInterest * previousLOI;              //@synthesize previousLOI=_previousLOI - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentLOI; 
@property (nonatomic,retain) ATXPBPredictionLocationOfInterest * currentLOI;               //@synthesize currentLOI=_currentLOI - In the implementation block
@property (assign,nonatomic) BOOL hasMotionType; 
@property (assign,nonatomic) int motionType;                                               //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentLocation; 
@property (nonatomic,retain) NSData * currentLocation;                                     //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLocationEnabled; 
@property (assign,nonatomic) BOOL locationEnabled;                                         //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromHome; 
@property (assign,nonatomic) double distanceFromHome;                                      //@synthesize distanceFromHome=_distanceFromHome - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromWork; 
@property (assign,nonatomic) double distanceFromWork;                                      //@synthesize distanceFromWork=_distanceFromWork - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromSchool; 
@property (assign,nonatomic) double distanceFromSchool;                                    //@synthesize distanceFromSchool=_distanceFromSchool - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromGym; 
@property (assign,nonatomic) double distanceFromGym;                                       //@synthesize distanceFromGym=_distanceFromGym - In the implementation block
@property (assign,nonatomic) BOOL hasCanPredictClipsGivenRecentMotion; 
@property (assign,nonatomic) BOOL canPredictClipsGivenRecentMotion;                        //@synthesize canPredictClipsGivenRecentMotion=_canPredictClipsGivenRecentMotion - In the implementation block
-(ATXPBPredictionLocationOfInterest *)currentLOI;
-(ATXPBPredictionLocationOfInterest *)previousLOI;
-(void)setCurrentLocation:(NSData *)arg1 ;
-(BOOL)locationEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)motionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPreviousLOI:(ATXPBPredictionLocationOfInterest *)arg1 ;
-(NSData *)currentLocation;
-(unsigned long long)hash;
-(BOOL)canPredictClipsGivenRecentMotion;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(void)setCurrentLOI:(ATXPBPredictionLocationOfInterest *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasCurrentLocation;
-(void)setMotionType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)distanceFromHome;
-(double)distanceFromWork;
-(double)distanceFromSchool;
-(double)distanceFromGym;
-(void)setLocationEnabled:(BOOL)arg1 ;
-(void)setDistanceFromHome:(double)arg1 ;
-(void)setDistanceFromWork:(double)arg1 ;
-(void)setDistanceFromSchool:(double)arg1 ;
-(void)setDistanceFromGym:(double)arg1 ;
-(void)setCanPredictClipsGivenRecentMotion:(BOOL)arg1 ;
-(BOOL)hasPreviousLOI;
-(BOOL)hasCurrentLOI;
-(void)setHasMotionType:(BOOL)arg1 ;
-(BOOL)hasMotionType;
-(id)motionTypeAsString:(int)arg1 ;
-(int)StringAsMotionType:(id)arg1 ;
-(void)setHasLocationEnabled:(BOOL)arg1 ;
-(BOOL)hasLocationEnabled;
-(void)setHasDistanceFromHome:(BOOL)arg1 ;
-(BOOL)hasDistanceFromHome;
-(void)setHasDistanceFromWork:(BOOL)arg1 ;
-(BOOL)hasDistanceFromWork;
-(void)setHasDistanceFromSchool:(BOOL)arg1 ;
-(BOOL)hasDistanceFromSchool;
-(void)setHasDistanceFromGym:(BOOL)arg1 ;
-(BOOL)hasDistanceFromGym;
-(void)setHasCanPredictClipsGivenRecentMotion:(BOOL)arg1 ;
-(BOOL)hasCanPredictClipsGivenRecentMotion;
@end

