/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSDate, FCNetworkEventStats;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {

	int _cellularRadioAccessTechnology;
	int _eventType;
	NSMutableArray* _failures;
	NSString* _respondingPop;
	NSMutableArray* _successes;
	BOOL _wifiReachabilityStatus;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) FCNetworkEventStats * totalDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * dnsDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * connectDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * timeToFirstByteStats; 
@property (nonatomic,readonly) unsigned long long cacheHitCount; 
@property (nonatomic,readonly) unsigned long long cacheMissCount; 
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                             //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachabilityStatus; 
@property (assign,nonatomic) BOOL wifiReachabilityStatus;                               //@synthesize wifiReachabilityStatus=_wifiReachabilityStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                         //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPop; 
@property (nonatomic,retain) NSString * respondingPop;                                  //@synthesize respondingPop=_respondingPop - In the implementation block
@property (nonatomic,retain) NSMutableArray * successes;                                //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;                                 //@synthesize failures=_failures - In the implementation block
+(Class)failuresType;
+(Class)successesType;
-(NSDate *)endDate;
-(FCNetworkEventStats *)totalDurationStats;
-(FCNetworkEventStats *)dnsDurationStats;
-(FCNetworkEventStats *)connectDurationStats;
-(FCNetworkEventStats *)timeToFirstByteStats;
-(unsigned long long)cacheMissCount;
-(NSDate *)startDate;
-(unsigned long long)cacheHitCount;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(int)cellularRadioAccessTechnology;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(int)eventType;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)setHasWifiReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasWifiReachabilityStatus;
-(BOOL)hasRespondingPop;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(BOOL)wifiReachabilityStatus;
-(NSString *)respondingPop;
-(BOOL)hasEventType;
-(NSMutableArray *)failures;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRespondingPop:(NSString *)arg1 ;
-(void)setWifiReachabilityStatus:(BOOL)arg1 ;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(NSMutableArray *)successes;
-(void)writeTo:(id)arg1 ;
@end
