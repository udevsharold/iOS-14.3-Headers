/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {

	SCD_Struct_AW15* _postConnectSubflowFailureErrors;
	long long _dataInKB;
	long long _dataOutKB;
	unsigned long long _timestamp;
	NSString* _interfaceName;
	int _secondaryFlowFailureCount;
	int _secondaryFlowSuccessCount;
	BOOL _postConnectTcpFallbackCount;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) unsigned long long postConnectSubflowFailureErrorsCount; 
@property (nonatomic,readonly) int* postConnectSubflowFailureErrors; 
@property (assign,nonatomic) BOOL hasDataInKB; 
@property (assign,nonatomic) long long dataInKB;                                                     //@synthesize dataInKB=_dataInKB - In the implementation block
@property (assign,nonatomic) BOOL hasDataOutKB; 
@property (assign,nonatomic) long long dataOutKB;                                                    //@synthesize dataOutKB=_dataOutKB - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowSuccessCount; 
@property (assign,nonatomic) int secondaryFlowSuccessCount;                                          //@synthesize secondaryFlowSuccessCount=_secondaryFlowSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowFailureCount; 
@property (assign,nonatomic) int secondaryFlowFailureCount;                                          //@synthesize secondaryFlowFailureCount=_secondaryFlowFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectTcpFallbackCount; 
@property (assign,nonatomic) BOOL postConnectTcpFallbackCount;                                       //@synthesize postConnectTcpFallbackCount=_postConnectTcpFallbackCount - In the implementation block
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)interfaceName;
-(void)dealloc;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)dataInKB;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDataInKB:(long long)arg1 ;
-(BOOL)hasInterfaceName;
-(unsigned long long)postConnectSubflowFailureErrorsCount;
-(int*)postConnectSubflowFailureErrors;
-(void)clearPostConnectSubflowFailureErrors;
-(void)addPostConnectSubflowFailureErrors:(int)arg1 ;
-(int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1 ;
-(void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasDataInKB:(BOOL)arg1 ;
-(BOOL)hasDataInKB;
-(void)setDataOutKB:(long long)arg1 ;
-(void)setHasDataOutKB:(BOOL)arg1 ;
-(BOOL)hasDataOutKB;
-(void)setSecondaryFlowSuccessCount:(int)arg1 ;
-(void)setHasSecondaryFlowSuccessCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowSuccessCount;
-(void)setSecondaryFlowFailureCount:(int)arg1 ;
-(void)setHasSecondaryFlowFailureCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowFailureCount;
-(long long)dataOutKB;
-(void)setPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(void)setHasPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(BOOL)hasPostConnectTcpFallbackCount;
-(int)secondaryFlowSuccessCount;
-(int)secondaryFlowFailureCount;
-(BOOL)postConnectTcpFallbackCount;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
@end
