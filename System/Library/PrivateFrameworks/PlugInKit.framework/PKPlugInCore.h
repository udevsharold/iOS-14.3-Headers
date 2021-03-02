/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary, NSUUID, NSData, NSDate;

@interface PKPlugInCore : NSObject {

	NSString* _identifier;
	NSString* _originalIdentifier;
	NSURL* _url;
	NSURL* _containingUrl;
	NSString* _containingBundleIdentifier;
	BOOL _onSystemVolume;
	NSDictionary* _bundleInfoDictionary;
	NSDictionary* _plugInDictionary;
	NSDictionary* _entitlements;
	unsigned long long _hubProtocolVersion;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSDictionary* _localizedFileProviderActionNames;
	NSDictionary* _annotations;
	long long _lastModified;
	NSUUID* _uuid;
	NSData* _cdhash;
	NSString* _requirement;
	NSURL* _dataContainerURL;
	unsigned _extensionPointPlatform;
	BOOL _isRBManaged;
	NSUUID* _discoveryInstanceUUID;

}

@property (retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * originalIdentifier;                                  //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * bundleInfoDictionary;                            //@synthesize bundleInfoDictionary=_bundleInfoDictionary - In the implementation block
@property (retain) NSDictionary * plugInDictionary;                                //@synthesize plugInDictionary=_plugInDictionary - In the implementation block
@property (retain) NSDictionary * entitlements;                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (retain) NSDictionary * annotations;                                     //@synthesize annotations=_annotations - In the implementation block
@property (copy) NSURL * containingUrl;                                            //@synthesize containingUrl=_containingUrl - In the implementation block
@property (copy) NSString * containingBundleIdentifier;                            //@synthesize containingBundleIdentifier=_containingBundleIdentifier - In the implementation block
@property (readonly) BOOL oldStyle; 
@property (readonly) NSString * path; 
@property (readonly) NSString * containingPath; 
@property (assign) BOOL onSystemVolume;                                            //@synthesize onSystemVolume=_onSystemVolume - In the implementation block
@property (readonly) NSUUID * discoveryInstanceUUID;                               //@synthesize discoveryInstanceUUID=_discoveryInstanceUUID - In the implementation block
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSString * version; 
@property (readonly) id protocolSpec; 
@property (readonly) NSString * principalSpec; 
@property (assign) unsigned long long hubProtocolVersion;                          //@synthesize hubProtocolVersion=_hubProtocolVersion - In the implementation block
@property (readonly) NSString * sdkSpec; 
@property (readonly) NSString * localizedName;                                     //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) NSString * localizedShortName;                                //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (retain) NSString * localizedContainingName;                             //@synthesize localizedContainingName=_localizedContainingName - In the implementation block
@property (readonly) NSDictionary * localizedFileProviderActionNames;              //@synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames - In the implementation block
@property (assign) long long lastModified;                                         //@synthesize lastModified=_lastModified - In the implementation block
@property (readonly) NSDate * timestamp; 
@property (retain) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSData * cdhash;                                                //@synthesize cdhash=_cdhash - In the implementation block
@property (retain) NSString * requirement;                                         //@synthesize requirement=_requirement - In the implementation block
@property (readonly) BOOL isAppExtension; 
@property (readonly) BOOL isMultiplexed; 
@property (readonly) BOOL isHybrid; 
@property (readonly) BOOL isDedicated; 
@property (readonly) BOOL isData; 
@property (assign) BOOL isRBManaged;                                               //@synthesize isRBManaged=_isRBManaged - In the implementation block
@property (readonly) unsigned extensionPointPlatform;                              //@synthesize extensionPointPlatform=_extensionPointPlatform - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                           //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
+(id)readSDKDictionary:(id)arg1 forPlatform:(unsigned)arg2 ;
-(id)embeddedCodePath;
-(void)setBundleInfoDictionary:(NSDictionary *)arg1 ;
-(id)sdkOnlyKeyPaths;
-(BOOL)isRBManaged;
-(unsigned)extensionPointPlatform;
-(BOOL)isMultiplexed;
-(BOOL)isAppExtension;
-(NSURL *)dataContainerURL;
-(void)setPlugInDictionary:(NSDictionary *)arg1 ;
-(id)pluginKey:(id)arg1 ;
-(void)setCdhash:(NSData *)arg1 ;
-(NSString *)principalSpec;
-(id)initWithName:(id)arg1 extensionPointPlatform:(unsigned)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)diagnose;
-(BOOL)isData;
-(NSDictionary *)localizedFileProviderActionNames;
-(BOOL)isHybrid;
-(BOOL)oldStyle;
-(BOOL)isDedicated;
-(NSString *)localizedContainingName;
-(NSString *)containingBundleIdentifier;
-(id)infoKey:(id)arg1 ;
-(NSDictionary *)bundleInfoDictionary;
-(NSDictionary *)plugInDictionary;
-(NSUUID *)discoveryInstanceUUID;
-(id)embeddedProtocolSpec;
-(BOOL)useBundle:(id)arg1 error:(id*)arg2 ;
-(id)export:(id*)arg1 ;
-(NSData *)cdhash;
-(id)augmentInterface:(id)arg1 ;
-(unsigned long long)hubProtocolVersion;
-(id)mergeSharedResources:(id)arg1 into:(id)arg2 ;
-(NSString *)originalIdentifier;
-(void)_loadLocalizedFileProviderActionNames;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(NSDictionary *)annotations;
-(id)normalizeInfoDictionary:(id)arg1 ;
-(id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2 ;
-(id)protocolSpec;
-(id)attribute:(id)arg1 ;
-(NSURL *)containingUrl;
-(void)setContainingBundleIdentifier:(NSString *)arg1 ;
-(void)setLocalizedContainingName:(NSString *)arg1 ;
-(void)canonicalize;
-(void)setOriginalIdentifier:(NSString *)arg1 ;
-(id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2 ;
-(void)setOnSystemVolume:(BOOL)arg1 ;
-(NSString *)sdkSpec;
-(void)setLastModified:(long long)arg1 ;
-(void)_loadLocalizedNames;
-(NSString *)containingPath;
-(long long)lastModified;
-(id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(void)setIsRBManaged:(BOOL)arg1 ;
-(void)updateFromForm:(id)arg1 ;
-(void)setContainingUrl:(NSURL *)arg1 ;
-(void)localizedInfoDictionaryForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAnnotation:(id)arg1 value:(id)arg2 ;
-(BOOL)setupWithForm:(id)arg1 ;
-(BOOL)setDictionaries:(id)arg1 ;
-(void)setAnnotations:(NSDictionary *)arg1 ;
-(BOOL)setupWithName:(id)arg1 extensionPointPlatform:(unsigned)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7 ;
-(id)initWithForm:(id)arg1 ;
-(void)setHubProtocolVersion:(unsigned long long)arg1 ;
-(BOOL)onSystemVolume;
-(NSString *)localizedShortName;
-(NSDate *)timestamp;
-(id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(id)init;
-(NSString *)requirement;
-(NSDictionary *)entitlements;
-(NSString *)path;
-(NSDictionary *)attributes;
-(void)setRequirement:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSUUID *)uuid;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)version;
-(NSString *)localizedName;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
@end
