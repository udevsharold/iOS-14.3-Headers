/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableMedicalCoding : PBCodable <NSCopying> {

	NSString* _code;
	NSString* _codingSystem;
	NSString* _codingVersion;
	NSString* _displayString;

}

@property (nonatomic,readonly) BOOL hasCodingSystem; 
@property (nonatomic,retain) NSString * codingSystem;               //@synthesize codingSystem=_codingSystem - In the implementation block
@property (nonatomic,readonly) BOOL hasCodingVersion; 
@property (nonatomic,retain) NSString * codingVersion;              //@synthesize codingVersion=_codingVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
-(NSString *)code;
-(NSString *)displayString;
-(void)setCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayString:(NSString *)arg1 ;
-(BOOL)hasCode;
-(NSString *)codingSystem;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDisplayString;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)codingVersion;
-(void)writeTo:(id)arg1 ;
-(void)setCodingSystem:(NSString *)arg1 ;
-(void)setCodingVersion:(NSString *)arg1 ;
-(BOOL)hasCodingSystem;
-(BOOL)hasCodingVersion;
@end

