/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSUserDefaults, NSString, NSDictionary;

@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain {

	NSUserDefaults* _sbLegacyDefaults;

}

@property (nonatomic,retain) NSString * lastOSVersion; 
@property (nonatomic,retain) NSDictionary * softwareUpdateState; 
@property (assign,nonatomic) BOOL needsAlertPresentationAfterOTAUpdate; 
-(void)setLastOSVersion:(NSString *)arg1 ;
-(NSString *)lastOSVersion;
-(void)setNeedsAlertPresentationAfterOTAUpdate:(BOOL)arg1 ;
-(BOOL)needsAlertPresentationAfterOTAUpdate;
-(void)setSoftwareUpdateState:(NSDictionary *)arg1 ;
-(NSDictionary *)softwareUpdateState;
-(id)init;
-(void)clearDeveloperInstallBrickAlerts;
-(void)_bindAndRegisterDefaults;
-(id)_initWithLegacyDefaults:(id)arg1 ;
-(void)_migrateLegacySpringBoardPreferences;
-(void)_clearLegacySpringBoardPreferences;
-(void)migrateAndClearLegacyPreferences;
@end
