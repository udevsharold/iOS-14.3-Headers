/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDServerConfiguration, NSObject;

@interface CKDGlobalConfigurationOperation : CKDOperation {

	CKDServerConfiguration* _configuration;
	NSObject*<OS_dispatch_group> _configurationFetchedGroup;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationFetchedGroup;              //@synthesize configurationFetchedGroup=_configurationFetchedGroup - In the implementation block
-(void)main;
-(CKDServerConfiguration *)configuration;
-(id)activityCreate;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(BOOL)shouldCheckAppVersion;
-(void)setConfigurationFetchedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationFetchedGroup;
@end
