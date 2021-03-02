/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOClient, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationClient : NSObject {

	SOClient* _client;
	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;

}

@property (nonatomic,readonly) SOConfiguration * configuration; 
@property (nonatomic,readonly) long long configVersion; 
+(id)defaultClient;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(void)_checkNewVersion;
-(id)init;
-(SOConfiguration *)configuration;
-(void)_reloadConfig;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(long long)configVersion;
@end
