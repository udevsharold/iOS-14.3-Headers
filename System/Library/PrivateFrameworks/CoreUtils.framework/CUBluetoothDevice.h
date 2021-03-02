/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject {

	BOOL _magicPaired;
	BOOL _supportsAACPService;
	BOOL _present;
	unsigned _connectedServices;
	int _colorCode;
	unsigned _deviceFlags;
	unsigned _deviceType;
	int _disconnectReason;
	int _primaryPlacement;
	int _secondaryPlacement;
	unsigned _productIdentifier;
	int _streamState;
	unsigned _versionID;
	SCD_Struct_CU6 _address;
	NSString* _addressString;
	NSUUID* _identifier;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _name;

}

@property (assign,nonatomic) SCD_Struct_CU6 address;                  //@synthesize address=_address - In the implementation block
@property (copy) NSString * addressString;                            //@synthesize addressString=_addressString - In the implementation block
@property (assign,nonatomic) int colorCode;                           //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;              //@synthesize connectedServices=_connectedServices - In the implementation block
@property (assign,nonatomic) unsigned deviceFlags;                    //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (assign,nonatomic) unsigned deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int disconnectReason;                    //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (copy) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL magicPaired;                        //@synthesize magicPaired=_magicPaired - In the implementation block
@property (copy) NSString * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (copy) NSString * modelNumber;                              //@synthesize modelNumber=_modelNumber - In the implementation block
@property (copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int primaryPlacement;                    //@synthesize primaryPlacement=_primaryPlacement - In the implementation block
@property (assign,nonatomic) int secondaryPlacement;                  //@synthesize secondaryPlacement=_secondaryPlacement - In the implementation block
@property (assign,nonatomic) BOOL present;                            //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) int streamState;                         //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) BOOL supportsAACPService;                //@synthesize supportsAACPService=_supportsAACPService - In the implementation block
@property (assign,nonatomic) unsigned versionID;                      //@synthesize versionID=_versionID - In the implementation block
-(NSString *)addressString;
-(unsigned)versionID;
-(void)setAddress:(SCD_Struct_CU6)arg1 ;
-(unsigned)deviceType;
-(void)setName:(NSString *)arg1 ;
-(BOOL)present;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(unsigned)deviceFlags;
-(void)setAddressString:(NSString *)arg1 ;
-(id)init;
-(void)setModelNumber:(NSString *)arg1 ;
-(SCD_Struct_CU6)address;
-(void)setPresent:(BOOL)arg1 ;
-(int)colorCode;
-(NSString *)modelNumber;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)hash;
-(void)setConnectedServices:(unsigned)arg1 ;
-(BOOL)magicPaired;
-(void)setDeviceType:(unsigned)arg1 ;
-(BOOL)supportsAACPService;
-(int)secondaryPlacement;
-(int)primaryPlacement;
-(void)setSupportsAACPService:(BOOL)arg1 ;
-(void)setVersionID:(unsigned)arg1 ;
-(void)setSecondaryPlacement:(int)arg1 ;
-(void)setPrimaryPlacement:(int)arg1 ;
-(void)setMagicPaired:(BOOL)arg1 ;
-(void)setColorCode:(int)arg1 ;
-(int)disconnectReason;
-(void)setDisconnectReason:(int)arg1 ;
-(int)streamState;
-(void)setStreamState:(int)arg1 ;
-(NSUUID *)identifier;
-(unsigned)productIdentifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProductIdentifier:(unsigned)arg1 ;
-(NSString *)name;
-(unsigned)connectedServices;
-(void)setDeviceFlags:(unsigned)arg1 ;
@end
