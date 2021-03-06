/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {

	long long _connectDuration;
	long long _dnsDuration;
	long long _errorCode;
	long long _httpStatusCode;
	long long _requestDuration;
	long long _responseDuration;
	long long _responseSize;
	long long _startTime;
	int _cacheState;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) int cacheState;                          //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(void)setHasStartTime:(BOOL)arg1 ;
-(void)setResponseSize:(long long)arg1 ;
-(long long)responseSize;
-(BOOL)hasStartTime;
-(long long)errorCode;
-(int)cacheState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCacheState;
-(void)setHttpStatusCode:(long long)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasCacheState:(BOOL)arg1 ;
-(BOOL)hasResponseDuration;
-(void)setConnectDuration:(long long)arg1 ;
-(void)setCacheState:(int)arg1 ;
-(void)setDnsDuration:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setStartTime:(long long)arg1 ;
-(id)description;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(void)setRequestDuration:(long long)arg1 ;
-(BOOL)hasHttpStatusCode;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(long long)requestDuration;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)startTime;
-(BOOL)hasRequestDuration;
-(long long)dnsDuration;
-(BOOL)hasErrorCode;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasResponseSize;
-(BOOL)hasConnectDuration;
-(long long)connectDuration;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(long long)responseDuration;
-(void)writeTo:(id)arg1 ;
-(void)setResponseDuration:(long long)arg1 ;
-(long long)httpStatusCode;
@end

