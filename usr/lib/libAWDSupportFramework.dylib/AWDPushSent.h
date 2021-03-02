/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	unsigned _error;
	unsigned _flushes;
	NSString* _guid;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _sendDuration;
	NSString* _topic;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasFlushes; 
@property (assign,nonatomic) unsigned flushes;                          //@synthesize flushes=_flushes - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(unsigned)connectionType;
-(int)linkQuality;
-(NSString *)topic;
-(void)setGuid:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasError;
-(void)mergeFrom:(id)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasGuid;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned long long)hash;
-(BOOL)hasTopic;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(void)setLinkQuality:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDualChannelState;
-(id)dictionaryRepresentation;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setError:(unsigned)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)setDualChannelState:(unsigned)arg1 ;
-(NSString *)guid;
-(BOOL)hasLinkQuality;
-(void)writeTo:(id)arg1 ;
-(unsigned)payloadSize;
-(unsigned)dualChannelState;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setSendDuration:(unsigned)arg1 ;
-(unsigned)sendDuration;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(void)setFlushes:(unsigned)arg1 ;
-(void)setHasFlushes:(BOOL)arg1 ;
-(BOOL)hasFlushes;
-(unsigned)flushes;
@end
