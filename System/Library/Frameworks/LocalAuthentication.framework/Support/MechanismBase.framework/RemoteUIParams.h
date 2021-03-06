/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAUIMechanismLARemoteUIHost;
@class MechanismUI, NSData, NSNumber;

@interface RemoteUIParams : NSObject {

	BOOL _undimScreen;
	BOOL _forSiri;
	int _pid;
	MechanismUI*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	NSData* _auditTokenData;
	NSNumber* _userId;

}

@property (nonatomic,readonly) MechanismUI*<LAUIMechanism>*<LARemoteUIHost> uiMechanism;              //@synthesize uiMechanism=_uiMechanism - In the implementation block
@property (nonatomic,readonly) NSData * auditTokenData;                                               //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,readonly) BOOL undimScreen;                                                      //@synthesize undimScreen=_undimScreen - In the implementation block
@property (nonatomic,readonly) BOOL forSiri;                                                          //@synthesize forSiri=_forSiri - In the implementation block
@property (nonatomic,readonly) int pid;                                                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSNumber * userId;                                                     //@synthesize userId=_userId - In the implementation block
-(NSNumber *)userId;
-(NSData *)auditTokenData;
-(int)pid;
-(BOOL)undimScreen;
-(BOOL)forSiri;
-(id)initWithUIMechanism:(id)arg1 auditToken:(id)arg2 undimScreen:(BOOL)arg3 forSiri:(BOOL)arg4 pid:(int)arg5 userId:(id)arg6 ;
-(MechanismUI*<LAUIMechanism>*<LARemoteUIHost>)uiMechanism;
@end

