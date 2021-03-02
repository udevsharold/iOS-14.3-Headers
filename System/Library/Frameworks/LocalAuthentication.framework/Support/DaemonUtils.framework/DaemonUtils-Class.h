/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(BOOL)_isSiriExtensionOf:(id)arg1 runningWithAuditToken:(SCD_Struct_Ca0)arg2 ;
+(BOOL)deviceSupportsSecureDoubleClick;
+(id)_callerUUID;
+(id)sharedInstance;
+(id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
+(BOOL)callerIsAllowedNonUiExtension:(id)arg1 ;
+(void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id*)arg2 ;
+(BOOL)deviceHasPearl;
+(BOOL)deviceSupports3D;
+(id)callerDisplayNameWithPid:(int)arg1 auditToken:(SCD_Struct_Ca0)arg2 bundleId:(id*)arg3 ;
+(BOOL)deviceHasSEP;
+(id)queue;
+(id)_uuidForPid:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(id)init;
@end
