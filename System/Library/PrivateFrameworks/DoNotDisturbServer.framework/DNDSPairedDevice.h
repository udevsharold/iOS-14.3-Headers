/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject <NSCopying> {

	NSString* _deviceIdentifier;
	unsigned long long _deviceClass;
	unsigned long long _syncProtocolVersion;
	NSUUID* _pairingIdentifier;
	NSString* _pairingDataStore;

}

@property (nonatomic,copy,readonly) NSUUID * pairingIdentifier;                     //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingDataStore;                    //@synthesize pairingDataStore=_pairingDataStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceClass;                      //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long syncProtocolVersion;              //@synthesize syncProtocolVersion=_syncProtocolVersion - In the implementation block
-(NSUUID *)pairingIdentifier;
-(NSString *)deviceIdentifier;
-(unsigned long long)deviceClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)syncProtocolVersion;
-(NSString *)pairingDataStore;
-(id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5 ;
@end
