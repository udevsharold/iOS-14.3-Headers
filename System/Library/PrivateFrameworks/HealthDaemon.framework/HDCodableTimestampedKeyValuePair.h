/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {

	double _numberDoubleValue;
	long long _numberIntValue;
	double _timestamp;
	NSData* _bytesValue;
	NSString* _key;
	NSString* _stringValue;
	SCD_Struct_HD12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;               //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) BOOL hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;               //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                    //@synthesize bytesValue=_bytesValue - In the implementation block
-(NSData *)bytesValue;
-(NSString *)key;
-(BOOL)hasStringValue;
-(void)setKey:(NSString *)arg1 ;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasBytesValue;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)setBytesValue:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNumberIntValue:(long long)arg1 ;
-(void)setHasNumberIntValue:(BOOL)arg1 ;
-(BOOL)hasNumberIntValue;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setHasNumberDoubleValue:(BOOL)arg1 ;
-(BOOL)hasNumberDoubleValue;
-(long long)numberIntValue;
-(double)numberDoubleValue;
-(void)setTimestampWithDate:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3 ;
-(id)decodedValue;
-(id)decodedTimestamp;
@end

