/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/_INSiriAuthorizationManagerExport.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSiriAuthorizationRestricted;
+(BOOL)_siriEnabled;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1 ;
+(id)_tccAccessInfoForBundle:(id)arg1 ;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2 ;
+(long long)_rawSiriAuthorizationStatusForAppID:(id)arg1 ;
@end

