/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsSessionDuration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _duration;
	int _endedByScreenLock;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasEndedByScreenLock; 
@property (assign,nonatomic) int endedByScreenLock;                     //@synthesize endedByScreenLock=_endedByScreenLock - In the implementation block
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSessionId;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(NSString *)sessionId;
-(int)duration;
-(void)writeTo:(id)arg1 ;
-(void)setEndedByScreenLock:(int)arg1 ;
-(void)setHasEndedByScreenLock:(BOOL)arg1 ;
-(BOOL)hasEndedByScreenLock;
-(int)endedByScreenLock;
@end

