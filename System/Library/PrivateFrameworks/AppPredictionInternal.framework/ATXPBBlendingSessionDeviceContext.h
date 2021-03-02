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

@interface ATXPBBlendingSessionDeviceContext : PBCodable <NSCopying> {

	double _secondsBeforeBlendingUpdate;
	int _currentLOIType;
	unsigned _dayOfWeek;
	unsigned _timeOfDay;
	BOOL _dateInWeekend;
	BOOL _lastUnlockMoreThan1HourAgo;
	BOOL _lastUnlockMoreThan30MinutesAgo;
	SCD_Struct_AT27 _has;

}

@property (assign,nonatomic) BOOL hasTimeOfDay; 
@property (assign,nonatomic) unsigned timeOfDay;                                  //@synthesize timeOfDay=_timeOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasDateInWeekend; 
@property (assign,nonatomic) BOOL dateInWeekend;                                  //@synthesize dateInWeekend=_dateInWeekend - In the implementation block
@property (assign,nonatomic) BOOL hasLastUnlockMoreThan30MinutesAgo; 
@property (assign,nonatomic) BOOL lastUnlockMoreThan30MinutesAgo;                 //@synthesize lastUnlockMoreThan30MinutesAgo=_lastUnlockMoreThan30MinutesAgo - In the implementation block
@property (assign,nonatomic) BOOL hasLastUnlockMoreThan1HourAgo; 
@property (assign,nonatomic) BOOL lastUnlockMoreThan1HourAgo;                     //@synthesize lastUnlockMoreThan1HourAgo=_lastUnlockMoreThan1HourAgo - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentLOIType; 
@property (assign,nonatomic) int currentLOIType;                                  //@synthesize currentLOIType=_currentLOIType - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsBeforeBlendingUpdate; 
@property (assign,nonatomic) double secondsBeforeBlendingUpdate;                  //@synthesize secondsBeforeBlendingUpdate=_secondsBeforeBlendingUpdate - In the implementation block
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(int)StringAsCurrentLOIType:(id)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setCurrentLOIType:(int)arg1 ;
-(unsigned)dayOfWeek;
-(void)setHasCurrentLOIType:(BOOL)arg1 ;
-(unsigned)timeOfDay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)currentLOIType;
-(unsigned long long)hash;
-(id)description;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)currentLOITypeAsString:(int)arg1 ;
-(void)setTimeOfDay:(unsigned)arg1 ;
-(BOOL)hasTimeOfDay;
-(void)setHasTimeOfDay:(BOOL)arg1 ;
-(BOOL)dateInWeekend;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCurrentLOIType;
-(void)setDateInWeekend:(BOOL)arg1 ;
-(void)setHasDateInWeekend:(BOOL)arg1 ;
-(BOOL)hasDateInWeekend;
-(void)setLastUnlockMoreThan30MinutesAgo:(BOOL)arg1 ;
-(void)setHasLastUnlockMoreThan30MinutesAgo:(BOOL)arg1 ;
-(BOOL)hasLastUnlockMoreThan30MinutesAgo;
-(void)setLastUnlockMoreThan1HourAgo:(BOOL)arg1 ;
-(void)setHasLastUnlockMoreThan1HourAgo:(BOOL)arg1 ;
-(BOOL)hasLastUnlockMoreThan1HourAgo;
-(void)setSecondsBeforeBlendingUpdate:(double)arg1 ;
-(void)setHasSecondsBeforeBlendingUpdate:(BOOL)arg1 ;
-(BOOL)hasSecondsBeforeBlendingUpdate;
-(BOOL)lastUnlockMoreThan30MinutesAgo;
-(BOOL)lastUnlockMoreThan1HourAgo;
-(double)secondsBeforeBlendingUpdate;
@end
