/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDevice.h>
@class NSString;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@required
-(NSString *)productType;
-(NSString *)systemVersion;
-(NSString *)appIdentifier;
-(NSString *)appVersion;
-(NSString *)model;
-(BOOL)isNetworkReachable;
-(NSString *)advertisingIdentifier;
-(NSString *)vendorIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;

@end

#import <libobjc.A.dylib/_IKJSDeviceProxy.h>
#import <libobjc.A.dylib/_IKJSDevice.h>

@protocol IKAppDeviceConfig;
@class NSString, NSNumber;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice> {

	id _networkPropertiesChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@property (nonatomic,readonly) BOOL isInAirplaneMode; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
@property (nonatomic,readonly) BOOL isSeedBuild; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (nonatomic,readonly) NSString * osBuildNumber; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(NSString *)productType;
-(NSString *)networkType;
-(NSString *)vendorID;
-(NSString *)systemVersion;
-(NSString *)appIdentifier;
-(NSString *)appVersion;
-(NSString *)model;
-(void)dealloc;
-(NSNumber *)pixelRatio;
-(BOOL)isInAirplaneMode;
-(BOOL)isNetworkReachable;
-(NSString *)advertisingIdentifier;
-(NSString *)vendorIdentifier;
-(BOOL)isSeedBuild;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(BOOL)runningAnInternalBuild;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(BOOL)isAdvertisingTrackingEnabled;
-(id)capacity:(id)arg1 ;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(NSString *)osBuildNumber;
-(id)asPrivateIKJSDevice;
@end
