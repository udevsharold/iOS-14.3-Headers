/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * allAppGroupContainers; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(NSArray *)groups;
-(NSDictionary *)entitlements;
-(NSArray *)allAppGroupContainers;
-(id)domain;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
-(NSString *)bundleDir;
@end
