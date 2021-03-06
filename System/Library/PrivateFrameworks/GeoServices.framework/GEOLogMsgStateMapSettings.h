/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {

	int _locationType;
	int _navVoiceVolume;
	int _preferredTransportMode;
	BOOL _avoidBusyRoads;
	BOOL _avoidHighways;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	BOOL _avoidTolls;
	BOOL _eBike;
	BOOL _findMyCarEnabled;
	BOOL _headingEnabled;
	BOOL _labelEnabled;
	BOOL _pauseSpokenAudioEnabled;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	struct {
		unsigned has_locationType : 1;
		unsigned has_navVoiceVolume : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHighways : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_avoidTolls : 1;
		unsigned has_eBike : 1;
		unsigned has_findMyCarEnabled : 1;
		unsigned has_headingEnabled : 1;
		unsigned has_labelEnabled : 1;
		unsigned has_pauseSpokenAudioEnabled : 1;
		unsigned has_speedLimitEnabled : 1;
		unsigned has_trafficEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode; 
@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL hasHeadingEnabled; 
@property (assign,nonatomic) BOOL headingEnabled; 
@property (assign,nonatomic) BOOL hasSpeedLimitEnabled; 
@property (assign,nonatomic) BOOL speedLimitEnabled; 
@property (assign,nonatomic) BOOL hasNavVoiceVolume; 
@property (assign,nonatomic) int navVoiceVolume; 
@property (assign,nonatomic) BOOL hasPauseSpokenAudioEnabled; 
@property (assign,nonatomic) BOOL pauseSpokenAudioEnabled; 
@property (assign,nonatomic) BOOL hasFindMyCarEnabled; 
@property (assign,nonatomic) BOOL findMyCarEnabled; 
@property (assign,nonatomic) BOOL hasTrafficEnabled; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL hasLabelEnabled; 
@property (assign,nonatomic) BOOL labelEnabled; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType; 
@property (assign,nonatomic) BOOL hasEBike; 
@property (assign,nonatomic) BOOL eBike; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)trafficEnabled;
-(BOOL)hasAvoidHighways;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)hasAvoidHills;
-(BOOL)avoidHighways;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)avoidHills;
-(BOOL)hasAvoidTolls;
-(BOOL)hasAvoidBusyRoads;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)avoidBusyRoads;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(void)setAvoidHills:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(BOOL)avoidStairs;
-(void)setAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasAvoidStairs;
-(BOOL)hasFindMyCarEnabled;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(void)setEBike:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportMode;
-(int)StringAsNavVoiceVolume:(id)arg1 ;
-(BOOL)hasLocationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)preferredTransportMode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)findMyCarEnabled;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(BOOL)hasLabelEnabled;
-(void)setHasPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(BOOL)pauseSpokenAudioEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)headingEnabled;
-(BOOL)hasHeadingEnabled;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasNavVoiceVolume;
-(void)setHasHeadingEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)speedLimitEnabled;
-(void)setPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)setHasPreferredTransportMode:(BOOL)arg1 ;
-(int)StringAsLocationType:(id)arg1 ;
-(void)setFindMyCarEnabled:(BOOL)arg1 ;
-(void)setHasNavVoiceVolume:(BOOL)arg1 ;
-(void)setHasLabelEnabled:(BOOL)arg1 ;
-(BOOL)hasTrafficEnabled;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(void)setHasEBike:(BOOL)arg1 ;
-(BOOL)labelEnabled;
-(id)initWithDictionary:(id)arg1 ;
-(int)locationType;
-(id)jsonRepresentation;
-(void)setPreferredTransportMode:(int)arg1 ;
-(void)setNavVoiceVolume:(int)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(BOOL)hasEBike;
-(BOOL)eBike;
-(int)navVoiceVolume;
-(BOOL)hasPauseSpokenAudioEnabled;
-(void)setLabelEnabled:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasFindMyCarEnabled:(BOOL)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(id)navVoiceVolumeAsString:(int)arg1 ;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitEnabled;
@end

