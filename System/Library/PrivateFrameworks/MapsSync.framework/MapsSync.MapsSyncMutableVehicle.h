/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSString, NSData, NSDate, NSNumber;

@interface MapsSync.MapsSyncMutableVehicle : MapsSync.MapsSyncMutableBaseItem {

	 _proxy;

}

@property (copy,nonatomic) NSString * colorHex; 
@property (copy,nonatomic) NSData * currentVehicleState; 
@property (copy,nonatomic) NSDate * dateOfVehicleIngestion; 
@property (copy,nonatomic) NSString * displayName; 
@property (copy,nonatomic) NSString * headUnitBluetoothIdentifier; 
@property (copy,nonatomic) NSString * headUnitMacAddress; 
@property (copy,nonatomic) NSString * iapIdentifier; 
@property (copy,nonatomic) NSDate * lastStateUpdateDate; 
@property (copy,nonatomic) NSString * licensePlate; 
@property (copy,nonatomic) NSString * lprPowerType; 
@property (copy,nonatomic) NSString * lprVehicleType; 
@property (copy,nonatomic) NSString * manufacturer; 
@property (copy,nonatomic) NSString * model; 
@property (copy,nonatomic) NSString * pairedAppIdentifier; 
@property (copy,nonatomic) NSData * powerByConnector; 
@property (copy,nonatomic) NSString * siriIntentsIdentifier; 
@property (retain,nonatomic) NSNumber * supportedConnectors; 
@property (copy,nonatomic) NSString * vehicleIdentifier; 
@property (retain,nonatomic) NSNumber * vehicleType; 
@property (retain,nonatomic) NSNumber * year; 
-(NSNumber *)year;
-(void)setYear:(NSNumber *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)vehicleIdentifier;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)licensePlate;
-(void)setLicensePlate:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)colorHex;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setColorHex:(NSString *)arg1 ;
-(NSString *)iapIdentifier;
-(NSData *)currentVehicleState;
-(void)setCurrentVehicleState:(NSData *)arg1 ;
-(NSDate *)dateOfVehicleIngestion;
-(void)setDateOfVehicleIngestion:(NSDate *)arg1 ;
-(NSString *)headUnitBluetoothIdentifier;
-(void)setHeadUnitBluetoothIdentifier:(NSString *)arg1 ;
-(NSString *)headUnitMacAddress;
-(void)setHeadUnitMacAddress:(NSString *)arg1 ;
-(void)setIapIdentifier:(NSString *)arg1 ;
-(NSString *)lprPowerType;
-(NSDate *)lastStateUpdateDate;
-(void)setLastStateUpdateDate:(NSDate *)arg1 ;
-(void)setLprPowerType:(NSString *)arg1 ;
-(NSString *)lprVehicleType;
-(void)setLprVehicleType:(NSString *)arg1 ;
-(NSString *)pairedAppIdentifier;
-(void)setPairedAppIdentifier:(NSString *)arg1 ;
-(NSData *)powerByConnector;
-(void)setPowerByConnector:(NSData *)arg1 ;
-(NSString *)siriIntentsIdentifier;
-(void)setSiriIntentsIdentifier:(NSString *)arg1 ;
-(NSNumber *)supportedConnectors;
-(void)setSupportedConnectors:(NSNumber *)arg1 ;
-(NSNumber *)vehicleType;
-(void)setVehicleType:(NSNumber *)arg1 ;
-(NSString *)displayName;
@end
