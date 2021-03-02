/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDSiriSession : PBCodable <NSCopying> {

	unsigned long long _sessionEndTimestamp;
	unsigned long long _sessionStartTimestamp;
	unsigned long long _timestamp;
	NSString* _companionModel;
	NSString* _companionOS;
	NSMutableArray* _siriRequests;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSessionStartTimestamp; 
@property (assign,nonatomic) unsigned long long sessionStartTimestamp;              //@synthesize sessionStartTimestamp=_sessionStartTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSessionEndTimestamp; 
@property (assign,nonatomic) unsigned long long sessionEndTimestamp;                //@synthesize sessionEndTimestamp=_sessionEndTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasCompanionModel; 
@property (nonatomic,retain) NSString * companionModel;                             //@synthesize companionModel=_companionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasCompanionOS; 
@property (nonatomic,retain) NSString * companionOS;                                //@synthesize companionOS=_companionOS - In the implementation block
@property (nonatomic,retain) NSMutableArray * siriRequests;                         //@synthesize siriRequests=_siriRequests - In the implementation block
+(Class)siriRequestType;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
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
-(NSString *)companionModel;
-(void)setCompanionModel:(NSString *)arg1 ;
-(void)setCompanionOS:(NSString *)arg1 ;
-(void)setSiriRequests:(NSMutableArray *)arg1 ;
-(void)addSiriRequest:(id)arg1 ;
-(unsigned long long)siriRequestsCount;
-(void)clearSiriRequests;
-(id)siriRequestAtIndex:(unsigned long long)arg1 ;
-(void)setSessionStartTimestamp:(unsigned long long)arg1 ;
-(void)setHasSessionStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionStartTimestamp;
-(void)setSessionEndTimestamp:(unsigned long long)arg1 ;
-(void)setHasSessionEndTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionEndTimestamp;
-(BOOL)hasCompanionModel;
-(BOOL)hasCompanionOS;
-(unsigned long long)sessionStartTimestamp;
-(unsigned long long)sessionEndTimestamp;
-(NSString *)companionOS;
-(NSMutableArray *)siriRequests;
@end
