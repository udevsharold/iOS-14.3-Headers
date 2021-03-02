/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerWifidAvailability : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	double _wifidBootTimeDiff;
	unsigned _pid;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifidBootTimeDiff; 
@property (assign,nonatomic) double wifidBootTimeDiff;                  //@synthesize wifidBootTimeDiff=_wifidBootTimeDiff - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) unsigned pid;                              //@synthesize pid=_pid - In the implementation block
-(unsigned long long)timestamp;
-(void)setHasPid:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasWifidBootTimeDiff:(BOOL)arg1 ;
-(unsigned)pid;
-(void)setPid:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasWifidBootTimeDiff;
-(void)setWifidBootTimeDiff:(double)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasPid;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(double)wifidBootTimeDiff;
@end
