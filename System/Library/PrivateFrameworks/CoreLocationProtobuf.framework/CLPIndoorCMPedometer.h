/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {

	double _firstStepTime;
	double _timestamp;
	float _activeTime;
	float _distance;
	int _floorsAscended;
	int _floorsDescended;
	int _numberOfSteps;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) float distance;                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSteps; 
@property (assign,nonatomic) int numberOfSteps;                    //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsAscended; 
@property (assign,nonatomic) int floorsAscended;                   //@synthesize floorsAscended=_floorsAscended - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsDescended; 
@property (assign,nonatomic) int floorsDescended;                  //@synthesize floorsDescended=_floorsDescended - In the implementation block
@property (assign,nonatomic) BOOL hasFirstStepTime; 
@property (assign,nonatomic) double firstStepTime;                 //@synthesize firstStepTime=_firstStepTime - In the implementation block
@property (assign,nonatomic) BOOL hasActiveTime; 
@property (assign,nonatomic) float activeTime;                     //@synthesize activeTime=_activeTime - In the implementation block
-(BOOL)hasDistance;
-(void)setHasFirstStepTime:(BOOL)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(double)timestamp;
-(BOOL)hasFirstStepTime;
-(float)distance;
-(void)setHasFloorsAscended:(BOOL)arg1 ;
-(void)setDistance:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFloorsDescended:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasFloorsDescended;
-(BOOL)readFrom:(id)arg1 ;
-(int)numberOfSteps;
-(BOOL)hasNumberOfSteps;
-(void)setFirstStepTime:(double)arg1 ;
-(unsigned long long)hash;
-(float)activeTime;
-(int)floorsDescended;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasNumberOfSteps:(BOOL)arg1 ;
-(BOOL)hasActiveTime;
-(BOOL)hasTimestamp;
-(void)setNumberOfSteps:(int)arg1 ;
-(int)floorsAscended;
-(void)setActiveTime:(float)arg1 ;
-(void)setFloorsAscended:(int)arg1 ;
-(void)setHasActiveTime:(BOOL)arg1 ;
-(BOOL)hasFloorsAscended;
-(void)writeTo:(id)arg1 ;
-(double)firstStepTime;
-(void)setHasFloorsDescended:(BOOL)arg1 ;
@end

