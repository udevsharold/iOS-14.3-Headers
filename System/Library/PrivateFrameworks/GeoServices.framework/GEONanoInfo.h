/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol OS_dispatch_queue;
@class NSConditionLock, NSObject, NSNumber, NRDevice, NSString;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {

	NSConditionLock* _pairedDeviceLock;
	NSObject*<OS_dispatch_queue> _nanoregQueue;
	NSNumber* _hasPairedDevice;
	NRDevice* _currentDevice;
	NSString* _deviceSystemVersion;
	NSString* _deviceSystemBuildVersion;
	NSString* _deviceProductType;
	NSNumber* _deviceIsAltAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInfo;
-(id)hasPairedDevice;
-(void)_readDeviceInfo:(id)arg1 ;
-(id)init;
-(void)_stopObservingDevice:(id)arg1 ;
-(id)deviceIsAltAcct;
-(id)deviceSystemVersion;
-(id)deviceSystemVersionIfAvailable;
-(id)_hasPairedDeviceBlocking:(BOOL)arg1 ;
-(id)_deviceSystemBuildVersionBlocking:(BOOL)arg1 ;
-(id)deviceProductType;
-(void)setupClient;
-(id)_observingProperties;
-(id)_deviceProductTypeBlocking:(BOOL)arg1 ;
-(id)deviceProductTypeIfAvailable;
-(id)deviceOsVersionIfAvailable;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)deviceSystemBuildVersionIfAvailable;
-(id)_deviceIsAltAcctBlocking:(BOOL)arg1 ;
-(id)deviceIsAltAcctIfAvailable;
-(id)deviceSystemBuildVersion;
-(id)_deviceSystemVersionBlocking:(BOOL)arg1 ;
-(id)hasPairedDeviceIfAvailable;
-(void)_startObservingDevice:(id)arg1 ;
@end

