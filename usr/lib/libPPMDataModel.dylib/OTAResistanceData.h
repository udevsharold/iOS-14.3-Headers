/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libPPMDataModel.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTAResistanceData : PBCodable <NSCopying> {

	SCD_Struct_OT1* _resistance25Cs;
	SCD_Struct_OT1* _temperatureCoeffs;

}

@property (nonatomic,readonly) unsigned long long resistance25CsCount; 
@property (nonatomic,readonly) float* resistance25Cs; 
@property (nonatomic,readonly) unsigned long long temperatureCoeffsCount; 
@property (nonatomic,readonly) float* temperatureCoeffs; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)resistance25CsCount;
-(void)clearResistance25Cs;
-(float)resistance25CAtIndex:(unsigned long long)arg1 ;
-(void)addResistance25C:(float)arg1 ;
-(unsigned long long)temperatureCoeffsCount;
-(void)clearTemperatureCoeffs;
-(float)temperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addTemperatureCoeff:(float)arg1 ;
-(float*)resistance25Cs;
-(void)setResistance25Cs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)temperatureCoeffs;
-(void)setTemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
@end

