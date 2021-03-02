/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSMutableDictionary, NSMutableSet;

@interface BRInterfaceKeyboard : BRInterface {

	IOHIDEventSystemClientRef _client;
	NSMutableDictionary* _propertyCache;
	unsigned long long _doublePressTimeoutUs;
	unsigned long long _triplePressTimeoutUs;
	unsigned long long _longPressTimeoutUs;
	BOOL _isReady;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;
	NSMutableSet* _services;

}

@property (nonatomic,readonly) NSMutableSet * services;              //@synthesize services=_services - In the implementation block
+(id)interface;
-(BOOL)isReady;
-(void)_findServices;
-(BOOL)_disableState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)_enableState:(unsigned long long)arg1 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(id)description;
-(id)propertyList;
-(BOOL)_setCachedPropertiesOnService:(IOHIDServiceClientRef)arg1 ;
-(unsigned long long)unusedAssetSlots;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_servicesSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxAssetSlots;
-(NSMutableSet *)services;
-(BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3 ;
@end
