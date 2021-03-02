/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaSettingsProvider.h>

@class NSString;

@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)timeScale;
+(id)sharedInstance;
+(int)frameRate;
+(void)setProviderDelegate:(id)arg1 ;
+(CGSize)renderSize;
+(id)providerDelegate;
+(CGSize)frameSize;
-(int)timeScale;
-(int)frameRate;
-(CGSize)renderSize;
-(CGSize)frameSize;
@end
