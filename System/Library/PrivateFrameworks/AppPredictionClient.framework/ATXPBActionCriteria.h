/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	NSData* _predicate;
	BOOL _isLockScreenEligible;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsLockScreenEligible; 
@property (assign,nonatomic) BOOL isLockScreenEligible;                 //@synthesize isLockScreenEligible=_isLockScreenEligible - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) NSData * predicate;                        //@synthesize predicate=_predicate - In the implementation block
-(double)endDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPredicate:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)startDate;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)predicate;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)isLockScreenEligible;
-(void)setIsLockScreenEligible:(BOOL)arg1 ;
-(void)setHasIsLockScreenEligible:(BOOL)arg1 ;
-(BOOL)hasIsLockScreenEligible;
-(BOOL)hasPredicate;
@end
