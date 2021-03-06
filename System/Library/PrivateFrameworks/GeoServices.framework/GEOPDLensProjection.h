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

@interface GEOPDLensProjection : PBCodable <NSCopying> {

	double _cx;
	double _cy;
	double _fovH;
	double _fovS;
	double _k2;
	double _k3;
	double _k4;
	double _lx;
	double _ly;
	int _type;
	struct {
		unsigned has_cx : 1;
		unsigned has_cy : 1;
		unsigned has_fovH : 1;
		unsigned has_fovS : 1;
		unsigned has_k2 : 1;
		unsigned has_k3 : 1;
		unsigned has_k4 : 1;
		unsigned has_lx : 1;
		unsigned has_ly : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasFovS; 
@property (assign,nonatomic) double fovS; 
@property (assign,nonatomic) BOOL hasFovH; 
@property (assign,nonatomic) double fovH; 
@property (assign,nonatomic) BOOL hasK2; 
@property (assign,nonatomic) double k2; 
@property (assign,nonatomic) BOOL hasK3; 
@property (assign,nonatomic) double k3; 
@property (assign,nonatomic) BOOL hasK4; 
@property (assign,nonatomic) double k4; 
@property (assign,nonatomic) BOOL hasCx; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) BOOL hasCy; 
@property (assign,nonatomic) double cy; 
@property (assign,nonatomic) BOOL hasLx; 
@property (assign,nonatomic) double lx; 
@property (assign,nonatomic) BOOL hasLy; 
@property (assign,nonatomic) double ly; 
+(BOOL)isValid:(id)arg1 ;
-(double)k3;
-(double)k2;
-(double)ly;
-(double)cy;
-(void)setHasCx:(BOOL)arg1 ;
-(void)setK4:(double)arg1 ;
-(BOOL)hasK2;
-(double)cx;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFovH:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasFovS;
-(void)setHasFovS:(BOOL)arg1 ;
-(void)setHasK2:(BOOL)arg1 ;
-(BOOL)hasCx;
-(BOOL)readFrom:(id)arg1 ;
-(double)lx;
-(void)setHasFovH:(BOOL)arg1 ;
-(double)fovH;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasK3:(BOOL)arg1 ;
-(BOOL)hasK4;
-(unsigned long long)hash;
-(void)setHasLy:(BOOL)arg1 ;
-(void)setLy:(double)arg1 ;
-(id)description;
-(int)type;
-(void)setHasK4:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCy;
-(id)dictionaryRepresentation;
-(BOOL)hasLy;
-(void)setHasLx:(BOOL)arg1 ;
-(double)k4;
-(void)setLx:(double)arg1 ;
-(BOOL)hasLx;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setK2:(double)arg1 ;
-(void)setK3:(double)arg1 ;
-(BOOL)hasType;
-(void)setFovS:(double)arg1 ;
-(void)setCx:(double)arg1 ;
-(void)setHasCy:(BOOL)arg1 ;
-(void)setCy:(double)arg1 ;
-(BOOL)hasK3;
-(void)writeTo:(id)arg1 ;
-(double)fovS;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasFovH;
@end

