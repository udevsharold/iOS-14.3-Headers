/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSourceDelegate.h>
#import <HMFoundation/HMFSystemInfoMigrationDataSourceDelegate.h>

@protocol HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoMigrationDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource;
@class NSString, HMFSoftwareVersion, HMFMACAddress;

@interface HMFSystemInfo : HMFObject <HMFSystemInfoNameDataSourceDelegate, HMFSystemInfoMigrationDataSourceDelegate> {

	id<HMFSystemInfoNameDataSource> _nameDataSource;
	id<HMFSystemInfoMarketingInformationDataSource> _marketingDataSource;
	id<HMFSystemInfoSerialNumberDataSource> _serialNumberDataSource;
	id<HMFSystemInfoProductInfoDataSource> _productInfoDataSource;
	id<HMFSystemInfoSoftwareVersionDataSource> _softwareVersionDataSource;
	id<HMFSystemInfoMigrationDataSource> _migrationDataSource;
	id<HMFSystemInfoWiFiDataSource> _WiFiDataSource;
	id<HMFSystemInfoBluetoothLEDataSource> _bluetoothLEDataSource;

}

@property (nonatomic,readonly) id<HMFSystemInfoNameDataSource> nameDataSource;                                    //@synthesize nameDataSource=_nameDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoMarketingInformationDataSource> marketingDataSource;               //@synthesize marketingDataSource=_marketingDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoSerialNumberDataSource> serialNumberDataSource;                    //@synthesize serialNumberDataSource=_serialNumberDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoProductInfoDataSource> productInfoDataSource;                      //@synthesize productInfoDataSource=_productInfoDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoSoftwareVersionDataSource> softwareVersionDataSource;              //@synthesize softwareVersionDataSource=_softwareVersionDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoMigrationDataSource> migrationDataSource;                          //@synthesize migrationDataSource=_migrationDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoWiFiDataSource> WiFiDataSource;                                    //@synthesize WiFiDataSource=_WiFiDataSource - In the implementation block
@property (nonatomic,readonly) id<HMFSystemInfoBluetoothLEDataSource> bluetoothLEDataSource;                      //@synthesize bluetoothLEDataSource=_bluetoothLEDataSource - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * modelIdentifier; 
@property (copy,readonly) NSString * model; 
@property (copy,readonly) NSString * regionInfo; 
@property (copy,readonly) NSString * serialNumber; 
@property (readonly) long long productPlatform; 
@property (readonly) long long productClass; 
@property (readonly) long long productVariant; 
@property (copy,readonly) HMFSoftwareVersion * softwareVersion; 
@property (getter=isMigrating,readonly) BOOL migrating; 
@property (copy,readonly) HMFMACAddress * WiFiInterfaceMACAddress; 
@property (readonly) BOOL supportsBLE; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)systemInfo;
-(BOOL)isMigrating;
-(NSString *)serialNumber;
-(NSString *)modelIdentifier;
-(long long)productClass;
-(long long)productVariant;
-(NSString *)model;
-(BOOL)supportsBLE;
-(NSString *)regionInfo;
-(id<HMFSystemInfoNameDataSource>)nameDataSource;
-(NSString *)name;
-(long long)productPlatform;
-(HMFMACAddress *)WiFiInterfaceMACAddress;
-(HMFSoftwareVersion *)softwareVersion;
-(void)dataSource:(id)arg1 didUpdateName:(id)arg2 ;
-(id<HMFSystemInfoMarketingInformationDataSource>)marketingDataSource;
-(id<HMFSystemInfoSerialNumberDataSource>)serialNumberDataSource;
-(id<HMFSystemInfoProductInfoDataSource>)productInfoDataSource;
-(id<HMFSystemInfoSoftwareVersionDataSource>)softwareVersionDataSource;
-(id<HMFSystemInfoMigrationDataSource>)migrationDataSource;
-(id<HMFSystemInfoWiFiDataSource>)WiFiDataSource;
-(id<HMFSystemInfoBluetoothLEDataSource>)bluetoothLEDataSource;
-(void)dataSource:(id)arg1 didUpdateMigrating:(BOOL)arg2 ;
@end

