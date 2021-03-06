/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPDroppedPin, NSString;

@interface MSPPinStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDroppedPin* _droppedPin;
	NSString* _identifier;
	int _type;
	SCD_Struct_MS4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;                     //@synthesize droppedPin=_droppedPin - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(double)timestamp;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasPosition;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(int)type;
-(MSPDroppedPin *)droppedPin;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)position;
-(BOOL)hasTimestamp;
-(PBUnknownFields *)unknownFields;
-(void)setPosition:(double)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasDroppedPin;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end

