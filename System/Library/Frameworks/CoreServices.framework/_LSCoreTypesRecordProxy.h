/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding> {

	LSBundleRecord* _realRecord;

}

@property (nonatomic,readonly) LSBundleRecord * _realRecord;              //@synthesize realRecord=_realRecord - In the implementation block
+(Class)classForKeyedUnarchiver;
+(BOOL)supportsSecureCoding;
+(id)description;
+(id)classFallbacksForKeyedArchiver;
-(id)dataContainerURL;
-(Class)classForKeyedArchiver;
-(void)detach;
-(id)SDKVersion;
-(LSBundleRecord *)_realRecord;
-(id)machOUUIDs;
-(BOOL)isUPPValidated;
-(id)managedPersonas;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(char)developerType;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(id)accentColorName;
-(id)_loadRealRecord;
-(id)serviceRecords;
-(id)localizedShortName;
-(BOOL)isProfileValidated;
-(id)intentDefinitionURLs;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(BOOL)isFreeProfileValidated;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)intentsRestrictedWhileLocked;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(id)UIBackgroundModes;
-(id)WKBackgroundModes;
-(BOOL)supportsNowPlaying;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)signerOrganization;
-(id)supportedIntents;
-(id)supportedIntentMediaCategories;
-(id)init;
-(unsigned)platform;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)entitlements;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)executableURL;
-(unsigned long long)hash;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)description;
-(id)applicationIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)debugDescription;
-(id)localizedName;
-(id)bundleIdentifier;
-(id)URL;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
@end

