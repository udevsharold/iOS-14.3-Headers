/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TFBetaApplicationProxy : NSObject {

	NSString* _bundleIdentifier;
	NSString* _logKey;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                                                        //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredLocalizedDisplayNameForInstalledVersion; 
-(NSString *)logKey;
-(NSString *)bundleIdentifier;
-(id)initForAppWithIdentifier:(id)arg1 ;
-(BOOL)isProactiveFeedbackEnabledForInstalledVersion;
-(NSString *)preferredLocalizedDisplayNameForInstalledVersion;
-(BOOL)isBetaAppLaunchScreenEnabledForInstalledVersion;
-(void)deviceWillInstallVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9 ;
-(void)setProactiveFeedbackEnabled:(BOOL)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)setBetaAppLaunchScreenEnabled:(BOOL)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)updateLocalizedTestNotes:(id)arg1 forVersion:(id)arg2 build:(id)arg3 ;
-(void)overwriteMetadataForInstalledVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9 ;
@end
