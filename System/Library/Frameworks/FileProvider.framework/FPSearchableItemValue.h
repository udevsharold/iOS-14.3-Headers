/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface FPSearchableItemValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	double _timeIntervalSinceReferenceDateValue;
	NSData* _nameComponents;
	NSString* _stringValue;
	SCD_Struct_FP5 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                                   //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceReferenceDateValue; 
@property (assign,nonatomic) double timeIntervalSinceReferenceDateValue;               //@synthesize timeIntervalSinceReferenceDateValue=_timeIntervalSinceReferenceDateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasNameComponents; 
@property (nonatomic,retain) NSData * nameComponents;                                  //@synthesize nameComponents=_nameComponents - In the implementation block
+(id)stringFromObject:(id)arg1 ;
+(id)objectFromString:(id)arg1 ;
-(long long)integerValue;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(BOOL)hasDoubleValue;
-(BOOL)hasIntegerValue;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimeIntervalSinceReferenceDateValue:(double)arg1 ;
-(BOOL)hasTimeIntervalSinceReferenceDateValue;
-(double)timeIntervalSinceReferenceDateValue;
-(BOOL)hasNameComponents;
-(void)setNameComponents:(NSData *)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(void)setHasTimeIntervalSinceReferenceDateValue:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)nameComponents;
@end

