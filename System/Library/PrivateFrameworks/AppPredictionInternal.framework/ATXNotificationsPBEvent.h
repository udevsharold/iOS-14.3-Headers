/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXNotificationsPBEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _event;
	int _pos;
	BOOL _isOffscreen;
	BOOL _topOfPile;
	SCD_Struct_Co3 _has;

}

@property (assign,nonatomic) BOOL hasEvent; 
@property (assign,nonatomic) int event;                                 //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsOffscreen; 
@property (assign,nonatomic) BOOL isOffscreen;                          //@synthesize isOffscreen=_isOffscreen - In the implementation block
@property (assign,nonatomic) BOOL hasPos; 
@property (assign,nonatomic) int pos;                                   //@synthesize pos=_pos - In the implementation block
@property (assign,nonatomic) BOOL hasTopOfPile; 
@property (assign,nonatomic) BOOL topOfPile;                            //@synthesize topOfPile=_topOfPile - In the implementation block
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)event;
-(BOOL)hasPos;
-(BOOL)hasEvent;
-(BOOL)isOffscreen;
-(unsigned long long)hash;
-(id)description;
-(void)setEvent:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)eventAsString:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasEvent:(BOOL)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)topOfPile;
-(void)setPos:(int)arg1 ;
-(void)setTopOfPile:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)pos;
-(void)setIsOffscreen:(BOOL)arg1 ;
-(void)setHasIsOffscreen:(BOOL)arg1 ;
-(BOOL)hasIsOffscreen;
-(void)setHasPos:(BOOL)arg1 ;
-(void)setHasTopOfPile:(BOOL)arg1 ;
-(BOOL)hasTopOfPile;
@end
