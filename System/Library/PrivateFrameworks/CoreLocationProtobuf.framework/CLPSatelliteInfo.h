/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPSatelliteInfo : PBCodable <NSCopying> {

	SCD_Struct_CL6* _azimuths;
	SCD_Struct_CL6* _cnos;
	SCD_Struct_CL6* _elevations;
	SCD_Struct_CL16* _isUsedInFixes;
	SCD_Struct_CL6* _satIds;

}

@property (nonatomic,readonly) unsigned long long satIdsCount; 
@property (nonatomic,readonly) int* satIds; 
@property (nonatomic,readonly) unsigned long long cnosCount; 
@property (nonatomic,readonly) int* cnos; 
@property (nonatomic,readonly) unsigned long long azimuthsCount; 
@property (nonatomic,readonly) int* azimuths; 
@property (nonatomic,readonly) unsigned long long elevationsCount; 
@property (nonatomic,readonly) int* elevations; 
@property (nonatomic,readonly) unsigned long long isUsedInFixesCount; 
@property (nonatomic,readonly) BOOL* isUsedInFixes; 
-(void)clearCnos;
-(int)cnosAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elevationsCount;
-(void)setSatIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setElevations:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(int)azimuthsAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(int*)cnos;
-(void)clearIsUsedInFixes;
-(unsigned long long)satIdsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)addIsUsedInFixes:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addElevations:(int)arg1 ;
-(id)description;
-(int)satIdsAtIndex:(unsigned long long)arg1 ;
-(void)addAzimuths:(int)arg1 ;
-(void)addCnos:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)azimuthsCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAzimuths;
-(id)dictionaryRepresentation;
-(BOOL*)isUsedInFixes;
-(void)setIsUsedInFixes:(BOOL*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isUsedInFixesAtIndex:(unsigned long long)arg1 ;
-(void)setCnos:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setAzimuths:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearElevations;
-(int)elevationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cnosCount;
-(int*)azimuths;
-(void)addSatIds:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)satIds;
-(void)clearSatIds;
-(unsigned long long)isUsedInFixesCount;
-(int*)elevations;
@end
