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

@class SYMessageHeader, NSData, NSString;

@interface SYStartSyncSession : PBCodable <NSCopying> {

	double _sessionTimeout;
	SYMessageHeader* _header;
	NSData* _metadata;
	NSString* _reason;
	NSString* _sessionID;
	BOOL _expectsRestartSupport;
	BOOL _expectsRollbackSupport;
	BOOL _isResetSync;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) BOOL isResetSync;                         //@synthesize isResetSync=_isResetSync - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL expectsRollbackSupport;              //@synthesize expectsRollbackSupport=_expectsRollbackSupport - In the implementation block
@property (assign,nonatomic) BOOL expectsRestartSupport;               //@synthesize expectsRestartSupport=_expectsRestartSupport - In the implementation block
@property (assign,nonatomic) double sessionTimeout;                    //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(NSString *)sessionID;
-(void)setMetadata:(NSData *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(NSData *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasReason;
-(id)description;
-(BOOL)hasMetadata;
-(NSString *)reason;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setReason:(NSString *)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isResetSync;
-(double)sessionTimeout;
-(void)setIsResetSync:(BOOL)arg1 ;
-(void)setExpectsRollbackSupport:(BOOL)arg1 ;
-(void)setExpectsRestartSupport:(BOOL)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(BOOL)expectsRollbackSupport;
-(BOOL)expectsRestartSupport;
@end
