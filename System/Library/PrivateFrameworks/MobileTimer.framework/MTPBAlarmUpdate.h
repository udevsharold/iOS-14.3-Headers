/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTPBAlarmProperties;

@interface MTPBAlarmUpdate : PBCodable <NSCopying> {

	MTPBAlarmProperties* _alarmProperties;

}

@property (nonatomic,retain) MTPBAlarmProperties * alarmProperties;              //@synthesize alarmProperties=_alarmProperties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAlarmProperties:(MTPBAlarmProperties *)arg1 ;
-(MTPBAlarmProperties *)alarmProperties;
-(void)writeTo:(id)arg1 ;
@end
