/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned long long installStatus; 
@property (assign,nonatomic) unsigned long long installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned long long)_installStatusForString:(id)arg1 ;
+(unsigned long long)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned long long)arg1 ;
+(id)_stringForInstallType:(unsigned long long)arg1 ;
-(NSString *)buildVersion;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)installType;
-(NSString *)hardwareType;
-(long long)jobID;
-(id)init;
-(unsigned long long)installStatus;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(void)setHardwareType:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setInstallError:(NSString *)arg1 ;
-(id)description;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(NSString *)installError;
-(BOOL)requiresDiagnosticSendingPermission;
-(void)setJobID:(long long)arg1 ;
@end
