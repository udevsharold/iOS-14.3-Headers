/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileInstallation/MobileInstallation-Structs.h>
@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedInstance;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_sharedConnection;
-(void)_invalidateObject;
-(BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)arg1 keepStagingDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeWrappedAppWithBundleID:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(id)createWrappedAppForInstalledBundleIdentifier:(id)arg1 inTargetDirectory:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
-(id)updateWrappedAppAt:(id)arg1 forInstalledBundleIdentifier:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
@end

