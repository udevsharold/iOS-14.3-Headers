/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitEventLog : PBCodable <NSCopying> {

	SCD_Struct_AW8* _events;
	unsigned long long _timestamp;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
-(unsigned*)events;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearEvents;
-(id)description;
-(void)addEvent:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(unsigned long long)eventsCount;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)eventAtIndex:(unsigned long long)arg1 ;
@end
