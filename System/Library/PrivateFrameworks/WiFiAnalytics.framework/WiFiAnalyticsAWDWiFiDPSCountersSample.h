/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDWiFiNWActivityPeerStats;

@interface WiFiAnalyticsAWDWiFiDPSCountersSample : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	WiFiAnalyticsAWDWiFiNWActivityControllerStats* _controllerStats;
	WiFiAnalyticsAWDWiFiNWActivityPeerStats* _peerStats;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats * controllerStats;              //@synthesize controllerStats=_controllerStats - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityPeerStats * peerStats;                          //@synthesize peerStats=_peerStats - In the implementation block
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setControllerStats:(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)arg1 ;
-(BOOL)hasControllerStats;
-(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)peerStats;
-(void)setPeerStats:(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)arg1 ;
-(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)controllerStats;
-(BOOL)hasPeerStats;
@end
