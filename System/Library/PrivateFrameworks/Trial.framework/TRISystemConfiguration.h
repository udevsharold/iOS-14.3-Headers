/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Trial/Trial-Structs.h>
@class NSString;

@interface TRISystemConfiguration : NSObject {

	NSString* _persistentDeviceIdentifierPath;
	NSString* _cachedDeviceIdentifier;

}
+(id)_sharedSystemInfo;
+(id)sharedInstance;
-(BOOL)isInternalBuild;
-(id)deviceId;
-(id)osBuild;
-(id)trialVersionTag;
-(BOOL)isBetaUserWithIsStale:(BOOL*)arg1 ;
-(id)userSettingsLanguageCode;
-(id)userSettingsRegionCode;
-(id)init;
-(id)deviceClass;
-(id)_systemInfoWithIsStale:(BOOL*)arg1 ;
-(id)_trialVersion;
-(BOOL)deleteDeviceIdentifier;
-(id)createPersistentDeviceIdentifier;
-(BOOL)deleteDeviceIdentifierWithPath:(id)arg1 ;
-(BOOL)setDeviceIdentifier:(id)arg1 path:(id)arg2 ;
-(id)readDeviceIdentifierWithPath:(id)arg1 ;
-(id)createDeviceIdentifierWithPath:(id)arg1 ;
-(id)storedDeviceIdentifier;
-(id)deviceInfoForQuestion:(id)arg1 ;
-(int)populationType;
-(id)reloadSystemInfo;
-(unsigned long long)trialVersionMajor;
-(unsigned long long)trialVersionMinor;
-(BOOL)resetDeviceIdentifier;
-(id)reloadDeviceId;
-(SCD_Struct_TR5)marketingOSVersion;
-(id)enabledInputModeIdentifiers;
-(id)osType;
-(id)initWithPaths:(id)arg1 ;
-(BOOL)isBetaBuild;
-(id)systemInfo;
-(BOOL)setDeviceIdentifier:(id)arg1 ;
-(id)deviceModelCode;
@end

