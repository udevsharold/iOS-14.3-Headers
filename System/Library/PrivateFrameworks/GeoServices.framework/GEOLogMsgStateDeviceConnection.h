/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCarrierName;
	NSString* _deviceCountryCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cellularDataState;
	int _deviceNetworkConnectivity;
	struct {
		unsigned has_cellularDataState : 1;
		unsigned has_deviceNetworkConnectivity : 1;
		unsigned read_deviceCarrierName : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeviceNetworkConnectivity; 
@property (assign,nonatomic) int deviceNetworkConnectivity; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceCarrierName; 
@property (nonatomic,retain) NSString * deviceCarrierName; 
@property (assign,nonatomic) BOOL hasCellularDataState; 
@property (assign,nonatomic) int cellularDataState; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCellularDataState:(int)arg1 ;
-(NSString *)deviceCarrierName;
-(id)cellularDataStateAsString:(int)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsCellularDataState:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasCellularDataState:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)deviceNetworkConnectivityAsString:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasDeviceNetworkConnectivity:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)deviceNetworkConnectivity;
-(int)StringAsDeviceNetworkConnectivity:(id)arg1 ;
-(BOOL)hasDeviceCarrierName;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasCellularDataState;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(NSString *)deviceCountryCode;
-(int)cellularDataState;
-(void)setDeviceNetworkConnectivity:(int)arg1 ;
-(BOOL)hasDeviceNetworkConnectivity;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
@end

