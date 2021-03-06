/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDCapabilities : NSObject {

	long long _platform;
	long long _deviceType;
	long long _device;
	long long _renderer;

}

@property (nonatomic,readonly) long long platform;                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) long long deviceType;                            //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long device;                                //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long renderer;                              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BOOL isRendererH3OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH4OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH5OrBelow; 
@property (nonatomic,readonly) BOOL hasLightningPort; 
@property (nonatomic,readonly) CGSize maximumTextureSize; 
@property (nonatomic,readonly) CGSize maximumHardcodedTextureSize; 
@property (nonatomic,readonly) BOOL isMetalCapable; 
+(id)currentCapabilities;
+(id)currentCapabilitiesOverride;
+(void)setCurrentCapabilitiesOverride:(id)arg1 ;
-(long long)renderer;
-(long long)deviceType;
-(id)init;
-(long long)platform;
-(long long)device;
-(BOOL)isRendererH4OrBelow;
-(CGSize)maximumMetalTextureSizeForDevice:(id)arg1 ;
-(CGSize)maximumTextureSize;
-(BOOL)isMetalCapable;
-(void)p_setupPlatform;
-(void)p_setupDevice;
-(BOOL)isRendererH3OrBelow;
-(CGSize)maximumHardcodedTextureSize;
-(BOOL)isRendererH5OrBelow;
-(BOOL)hasLightningPort;
-(BOOL)p_isMetalCapable;
@end

