/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSPlatform : NSObject

@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * productHardwareModel; 
@property (nonatomic,copy,readonly) NSString * productHardwareModelName; 
@property (nonatomic,copy,readonly) NSString * productClass; 
@property (nonatomic,copy,readonly) NSString * localizedProductName; 
@property (nonatomic,copy,readonly) NSString * operatingSystemName; 
@property (nonatomic,copy,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) long long homeButtonType; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productBuildVersion; 
@property (getter=isInternalInstall,nonatomic,readonly) BOOL internalInstall; 
@property (getter=isDeveloperInstall,nonatomic,readonly) BOOL developerInstall; 
@property (getter=isCarrierInstall,nonatomic,readonly) BOOL carrierInstall; 
@property (getter=isMultiCore,nonatomic,readonly) BOOL multiCore; 
@property (nonatomic,readonly) BOOL hasGasGauge; 
@property (nonatomic,readonly) BOOL hasOrbCapability; 
+(id)sharedInstance;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(BOOL)isInternalInstall;
-(BOOL)isCarrierInstall;
-(NSString *)uniqueDeviceIdentifier;
-(int)deviceClass;
-(NSString *)productClass;
-(NSString *)productHardwareModelName;
-(BOOL)isDeveloperInstall;
-(BOOL)isMultiCore;
-(long long)homeButtonType;
-(NSString *)operatingSystemName;
-(NSString *)productHardwareModel;
-(NSString *)localizedProductName;
-(BOOL)hasOrbCapability;
-(BOOL)hasGasGauge;
@end
