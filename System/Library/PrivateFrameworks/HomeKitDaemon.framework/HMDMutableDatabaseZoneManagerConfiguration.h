/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerConfiguration.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (getter=isZoneOwner) BOOL zoneOwner; 
@property (assign) BOOL shouldCreateZone; 
@property (copy) NSSet * externalRecordTypesForSubscriptions; 
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion; 
@property (copy) NSSet * requiredSupportedFeatures; 
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end
