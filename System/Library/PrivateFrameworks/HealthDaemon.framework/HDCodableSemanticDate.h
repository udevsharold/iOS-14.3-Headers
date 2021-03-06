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

@class NSString;

@interface HDCodableSemanticDate : PBCodable <NSCopying> {

	double _date;
	NSString* _keyPath;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                     //@synthesize date=_date - In the implementation block
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)date;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDate;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasKeyPath;
-(void)writeTo:(id)arg1 ;
@end

