/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYLogEngineState, NSString, SYLogSessionState, SYLogDeviceState, NSMutableArray, NSDictionary;

@interface SYLogServiceState : PBCodable <NSCopying> {

	SYLogEngineState* _engine;
	int _enqueuedSyncType;
	NSString* _name;
	NSString* _peerGenerationID;
	NSString* _peerID;
	int _serviceType;
	SYLogSessionState* _session;
	SYLogDeviceState* _targetedDevice;
	NSMutableArray* _transportOptions;
	BOOL _sessionQueueRunning;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) NSDictionary * cocoaTransportOptions; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEngine; 
@property (nonatomic,retain) SYLogEngineState * engine;                         //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) SYLogSessionState * session;                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL sessionQueueRunning;                          //@synthesize sessionQueueRunning=_sessionQueueRunning - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetedDevice; 
@property (nonatomic,retain) SYLogDeviceState * targetedDevice;                 //@synthesize targetedDevice=_targetedDevice - In the implementation block
@property (assign,nonatomic) int enqueuedSyncType;                              //@synthesize enqueuedSyncType=_enqueuedSyncType - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportOptions;                 //@synthesize transportOptions=_transportOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerGenerationID; 
@property (nonatomic,retain) NSString * peerGenerationID;                       //@synthesize peerGenerationID=_peerGenerationID - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                   //@synthesize serviceType=_serviceType - In the implementation block
+(Class)transportOptionsType;
-(SYLogDeviceState *)targetedDevice;
-(SYLogEngineState *)engine;
-(void)setSession:(SYLogSessionState *)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(SYLogSessionState *)session;
-(void)setName:(NSString *)arg1 ;
-(id)serviceTypeAsString:(int)arg1 ;
-(unsigned long long)transportOptionsCount;
-(BOOL)hasTargetedDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)enqueuedSyncType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasServiceType;
-(int)StringAsServiceType:(id)arg1 ;
-(NSString *)peerGenerationID;
-(BOOL)hasSession;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCocoaTransportOptions:(NSDictionary *)arg1 ;
-(void)addTransportOptions:(id)arg1 ;
-(void)setPeerGenerationID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)StringAsEnqueuedSyncType:(id)arg1 ;
-(void)setTransportOptions:(NSMutableArray *)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
-(NSString *)peerID;
-(id)description;
-(void)clearTransportOptions;
-(BOOL)hasPeerGenerationID;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDictionary *)cocoaTransportOptions;
-(BOOL)hasPeerID;
-(void)setTargetedDevice:(SYLogDeviceState *)arg1 ;
-(NSString *)name;
-(id)enqueuedSyncTypeAsString:(int)arg1 ;
-(id)transportOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setSessionQueueRunning:(BOOL)arg1 ;
-(NSMutableArray *)transportOptions;
-(void)setEnqueuedSyncType:(int)arg1 ;
-(BOOL)sessionQueueRunning;
-(void)setEngine:(SYLogEngineState *)arg1 ;
-(BOOL)hasEngine;
-(void)writeTo:(id)arg1 ;
@end

