/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	NSString* _errorCode;
	NSString* _errorDomain;
	int _migratorType;
	int _result;
	SCD_Struct_WB11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) int result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(void)setResult:(int)arg1 ;
-(BOOL)hasResult;
-(BOOL)hasDuration;
-(int)result;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)errorCode;
-(void)setHasResult:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(id)resultAsString:(int)arg1 ;
-(int)StringAsResult:(id)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMigratorType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasErrorCode;
-(int)migratorType;
-(void)setErrorCode:(NSString *)arg1 ;
-(unsigned long long)duration;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
@end

