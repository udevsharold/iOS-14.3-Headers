/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(SCD_Struct_PL11)arg1 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
@end

