/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying> {

	NSString* _errorDescription;
	HDCodableRoutineLocationResponse* _fetchLocationResponse;
	HDCodableRoutinePredictedLocationsResponse* _fetchNextLocationResponse;
	NSString* _requestIdentifier;
	int _requestType;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                        //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchLocationResponse; 
@property (nonatomic,retain) HDCodableRoutineLocationResponse * fetchLocationResponse;                            //@synthesize fetchLocationResponse=_fetchLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchNextLocationResponse; 
@property (nonatomic,retain) HDCodableRoutinePredictedLocationsResponse * fetchNextLocationResponse;              //@synthesize fetchNextLocationResponse=_fetchNextLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                                         //@synthesize errorDescription=_errorDescription - In the implementation block
-(int)requestType;
-(BOOL)hasErrorDescription;
-(id)requestTypeAsString:(int)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequestType;
-(int)StringAsRequestType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(NSString *)errorDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasRequestIdentifier;
-(void)setFetchLocationResponse:(HDCodableRoutineLocationResponse *)arg1 ;
-(void)setFetchNextLocationResponse:(HDCodableRoutinePredictedLocationsResponse *)arg1 ;
-(BOOL)hasFetchLocationResponse;
-(BOOL)hasFetchNextLocationResponse;
-(HDCodableRoutineLocationResponse *)fetchLocationResponse;
-(HDCodableRoutinePredictedLocationsResponse *)fetchNextLocationResponse;
@end
