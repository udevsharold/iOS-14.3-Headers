/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Trial/Trial-Structs.h>
@interface TRIEntitlement : NSObject
+(BOOL)_isValidFormatForTeamId:(id)arg1 ;
+(id)objectForCurrentProcessEntitlement:(id)arg1 ;
+(id)stringForCurrentProcessEntitlement:(id)arg1 ;
+(id)stringForEntitlement:(id)arg1 withAuditToken:(SCD_Struct_TR0)arg2 ;
+(id)_teamIdFromSecTaskWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)stringForEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
+(id)valueForEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ofType:(unsigned long long*)arg3 ;
+(BOOL)isEntitledToApplicationGroup:(id)arg1 withAuditToken:(SCD_Struct_TR0)arg2 ;
+(id)applicationBundleIdentifierWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)applicationBundleIdentifierFromSelf;
+(id)codeSignIdentifierWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)teamIdWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)objectForEntitlement:(id)arg1 withAuditToken:(SCD_Struct_TR0)arg2 ;
@end

