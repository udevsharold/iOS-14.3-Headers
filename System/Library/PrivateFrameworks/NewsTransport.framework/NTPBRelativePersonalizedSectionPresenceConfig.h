/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBRelativePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	double _scalar;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasScalar; 
@property (assign,nonatomic) double scalar;               //@synthesize scalar=_scalar - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)scalar;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasScalar;
-(void)setHasScalar:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScalar:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end

