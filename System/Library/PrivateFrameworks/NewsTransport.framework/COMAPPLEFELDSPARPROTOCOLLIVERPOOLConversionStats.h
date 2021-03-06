/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {

	double _conversions;
	double _impressions;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasConversions; 
@property (assign,nonatomic) double conversions;               //@synthesize conversions=_conversions - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)impressions;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasImpressions;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(double)conversions;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setImpressions:(double)arg1 ;
-(void)setConversions:(double)arg1 ;
-(void)setHasConversions:(BOOL)arg1 ;
-(BOOL)hasConversions;
-(void)writeTo:(id)arg1 ;
-(void)setHasImpressions:(BOOL)arg1 ;
@end

