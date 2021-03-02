/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {

	NSString* _validCharacters;
	int _end;
	int _start;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) int start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) int end; 
@property (nonatomic,readonly) BOOL hasValidCharacters; 
@property (nonatomic,retain) NSString * validCharacters; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasEnd;
-(void)setStart:(int)arg1 ;
-(void)setEnd:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStart;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)validCharacters;
-(void)setValidCharacters:(NSString *)arg1 ;
-(BOOL)hasValidCharacters;
-(int)start;
-(int)end;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasEnd:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
