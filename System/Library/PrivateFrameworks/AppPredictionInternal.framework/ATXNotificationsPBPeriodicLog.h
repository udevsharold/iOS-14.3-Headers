/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXNotificationsPBPeriodicLog : PBCodable <NSCopying> {

	unsigned long long _periodEnd;
	unsigned long long _periodStart;
	NSMutableArray* _datas;
	NSString* _userId;
	SCD_Struct_Co2 _has;

}

@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                           //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodStart; 
@property (assign,nonatomic) unsigned long long periodStart;              //@synthesize periodStart=_periodStart - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodEnd; 
@property (assign,nonatomic) unsigned long long periodEnd;                //@synthesize periodEnd=_periodEnd - In the implementation block
@property (nonatomic,retain) NSMutableArray * datas;                      //@synthesize datas=_datas - In the implementation block
+(Class)dataType;
-(NSString *)userId;
-(BOOL)hasUserId;
-(NSMutableArray *)datas;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(void)setDatas:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)periodEnd;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)periodStart;
-(id)dictionaryRepresentation;
-(void)addData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)setPeriodStart:(unsigned long long)arg1 ;
-(void)setHasPeriodStart:(BOOL)arg1 ;
-(BOOL)hasPeriodStart;
-(void)setPeriodEnd:(unsigned long long)arg1 ;
-(void)setHasPeriodEnd:(BOOL)arg1 ;
-(BOOL)hasPeriodEnd;
@end
