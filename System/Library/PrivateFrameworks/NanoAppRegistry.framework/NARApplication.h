/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NARApplicationState, NSDictionary, NARGlance;

@interface NARApplication : NSObject <NSSecureCoding> {

	BOOL _supportsForegroundApplication;
	unsigned long long _sequenceNumber;
	NSString* _launchServicesBundleType;
	NSString* _parentApplicationBundleIdentifier;
	NSArray* _appTags;
	NARApplicationState* _appState;
	NSDictionary* _infoPlist;
	NSDictionary* _localizedStrings;
	NSDictionary* _iTunesPlistStrings;

}

@property (nonatomic,retain) NSDictionary * infoPlist;                                         //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedStrings;                                  //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * iTunesPlistStrings;                                //@synthesize iTunesPlistStrings=_iTunesPlistStrings - In the implementation block
@property (nonatomic,retain) NSArray * appTags;                                                //@synthesize appTags=_appTags - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * launchServicesBundleType;                                //@synthesize launchServicesBundleType=_launchServicesBundleType - In the implementation block
@property (assign,nonatomic) BOOL supportsForegroundApplication;                               //@synthesize supportsForegroundApplication=_supportsForegroundApplication - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * bundleName; 
@property (nonatomic,readonly) NSDictionary * localizedBundleNames; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSDictionary * localizedDisplayNames; 
@property (nonatomic,readonly) NSArray * supportedSchemes; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * itemName; 
@property (nonatomic,readonly) NSArray * localizations; 
@property (nonatomic,copy,readonly) NSString * parentApplicationBundleIdentifier;              //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) NARGlance * glance; 
@property (nonatomic,retain) NARApplicationState * appState;                                   //@synthesize appState=_appState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)vendorName;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(NSArray *)appTags;
-(NSDictionary *)infoPlist;
-(unsigned long long)sequenceNumber;
-(NSString *)parentApplicationBundleIdentifier;
-(NSString *)bundleVersion;
-(NSString *)itemName;
-(NARApplicationState *)appState;
-(void)setInfoPlist:(NSDictionary *)arg1 ;
-(NARGlance *)glance;
-(NSArray *)localizations;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setLocalizedStrings:(NSDictionary *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSDictionary *)localizedStrings;
-(NSString *)localizedDisplayName;
-(NSArray *)supportedSchemes;
-(BOOL)isHidden;
-(void)setAppState:(NARApplicationState *)arg1 ;
-(NSString *)bundleName;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)localizedDisplayNames;
-(NSDictionary *)iTunesPlistStrings;
-(BOOL)supportsForegroundApplication;
-(NSDictionary *)localizedBundleNames;
-(id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2 ;
-(NSString *)launchServicesBundleType;
-(void)setLaunchServicesBundleType:(NSString *)arg1 ;
-(void)setAppTags:(NSArray *)arg1 ;
-(void)setSupportsForegroundApplication:(BOOL)arg1 ;
-(void)setITunesPlistStrings:(NSDictionary *)arg1 ;
@end
