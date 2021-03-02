/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSListController.h>
#import <libobjc.A.dylib/TPSCloudCallingURLControllerDelegate.h>

@class NSString;

@interface TPSCloudCallingListController : TPSListController <TPSCloudCallingURLControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1 ;
-(void)presentOrUpdateViewController:(id)arg1 ;
-(void)presentPrivacySplashController;
-(void)privacySplashControllerDidRequestDismissal:(id)arg1 ;
@end
