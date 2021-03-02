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

@interface GEOSuggestionItem : PBCodable <NSCopying> {

	NSString* _suggestionString;
	int _tappingCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionString; 
@property (nonatomic,retain) NSString * suggestionString; 
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible; 
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible; 
@property (assign,nonatomic) BOOL hasTappingCount; 
@property (assign,nonatomic) int tappingCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasInitiallyVisible;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEventuallyVisible;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(BOOL)initiallyVisible;
-(id)jsonRepresentation;
-(BOOL)eventuallyVisible;
-(void)writeTo:(id)arg1 ;
-(int)tappingCount;
-(NSString *)suggestionString;
-(void)setSuggestionString:(NSString *)arg1 ;
-(void)setTappingCount:(int)arg1 ;
-(BOOL)hasSuggestionString;
-(BOOL)hasTappingCount;
-(void)setHasTappingCount:(BOOL)arg1 ;
@end
