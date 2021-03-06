/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSUserDefaults, NSDictionary, NSMutableDictionary, NSArray, GCController, NSUUID, NSMutableSet, NSString;

@interface GCControllerSettings : NSObject <NSSecureCoding> {

	NSUserDefaults* _defaults;
	NSDictionary* _elementMappingKeyToElement;
	NSMutableDictionary* _elementMappings;
	NSMutableDictionary* __elementMappingFromUserDefaults;
	NSArray* _customizedElementSettings;
	GCController* _controller;
	NSUUID* _customizedUUID;
	NSMutableDictionary* _elementSettings;
	NSMutableSet* _observedKeyPaths;
	BOOL _hapticsEnabled;
	BOOL _screenShotEnabled;
	BOOL _videoRecordingEnabled;
	BOOL _customizationsEnabled;
	BOOL _serialized;
	BOOL _customized;
	id<NSCopying><NSObject><NSSecureCoding> _uniqueIdentifier;
	NSString* _bundleIdentifier;
	/*^block*/id _settingsChangedHandler;
	unsigned long long _settingsID;

}

@property (assign,nonatomic) BOOL customized;                                                         //@synthesize customized=_customized - In the implementation block
@property (assign,nonatomic) unsigned long long settingsID;                                           //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSObject><NSSecureCoding> uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * elementMappings;                                        //@synthesize elementMappings=_elementMappings - In the implementation block
@property (assign,nonatomic) BOOL hapticsEnabled;                                                     //@synthesize hapticsEnabled=_hapticsEnabled - In the implementation block
@property (assign,nonatomic) BOOL screenShotEnabled;                                                  //@synthesize screenShotEnabled=_screenShotEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoRecordingEnabled;                                              //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL customizationsEnabled;                                              //@synthesize customizationsEnabled=_customizationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL serialized;                                                         //@synthesize serialized=_serialized - In the implementation block
@property (nonatomic,copy) id settingsChangedHandler;                                                 //@synthesize settingsChangedHandler=_settingsChangedHandler - In the implementation block
+(id)metaDefaults;
+(void)setSettingsExist:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)registerSettingsCustomizedHandler:(/*^block*/id)arg1 forKey:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)settingsCustomizedForController:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setSettingsExist:(BOOL)arg1 forController:(id)arg2 forBundleIdentifier:(id)arg3 ;
+(void)unregisterSettingsCustomizedHandlerForKey:(id)arg1 ;
+(void)unregisterSettingsCustomizedHandlerForController:(id)arg1 forKey:(id)arg2 ;
+(BOOL)settingsCustomizedForBundleIdentifier:(id)arg1 ;
+(id)settingsDispatchQueue;
+(void)registerSettingsCustomizedHandler:(/*^block*/id)arg1 forController:(id)arg2 forKey:(id)arg3 ;
+(id)settingsCustomizedChangedHandlers;
+(id)controllerSettingsCustomizedChangedHandlers;
-(void)setSerialized:(BOOL)arg1 ;
-(BOOL)videoRecordingEnabled;
-(unsigned long long)settingsID;
-(id)defaultValues;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NSCopying><NSObject><NSSecureCoding>)uniqueIdentifier;
-(id)description;
-(void)setVideoRecordingEnabled:(BOOL)arg1 ;
-(void)setHapticsEnabled:(BOOL)arg1 ;
-(BOOL)serialized;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)bundleIdentifier;
-(void)setSettingsID:(unsigned long long)arg1 ;
-(BOOL)hapticsEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettingsChangedHandler:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 forControllerIdentifier:(id)arg2 ;
-(void)_updateControllerReference:(id)arg1 ;
-(BOOL)customizationsEnabled;
-(BOOL)screenShotEnabled;
-(id)initWithBundleIdentifier:(id)arg1 forController:(id)arg2 ;
-(void)registerForSettingsCustomized;
-(void)initializeUserDefaults;
-(id)mappingKeyForElement:(id)arg1 ;
-(void)setCustomized:(BOOL)arg1 ;
-(void)unregisterForSettingsCustomized;
-(void)initializeElementMappings;
-(void)saveBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)staticDefaultValues;
-(id)suiteNameForBundleIdentifier:(id)arg1 ;
-(void)observeDefaultsKeyPaths:(id)arg1 ;
-(void)populateElementSettings;
-(void)observeDefaultsKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mappingForElement:(id)arg1 ;
-(void)saveObject:(id)arg1 forKey:(id)arg2 ;
-(void)deleteObjectForKey:(id)arg1 ;
-(id)elementSettingForKey:(id)arg1 ;
-(void)refreshSettingsExist;
-(id)initForController:(id)arg1 ;
-(void)setScreenShotEnabled:(BOOL)arg1 ;
-(void)setCustomizationsEnabled:(BOOL)arg1 ;
-(id)mappingForButton:(id)arg1 ;
-(id)mappingForDirectionPad:(id)arg1 ;
-(id)mappingForTouchpad:(id)arg1 ;
-(void)setMappingForElement:(id)arg1 toElement:(id)arg2 ;
-(id)settingsForElement:(id)arg1 ;
-(void)eraseAllSettings;
-(void)restoreElementMappingToDefault;
-(NSDictionary *)elementMappings;
-(BOOL)customized;
-(id)settingsChangedHandler;
@end

