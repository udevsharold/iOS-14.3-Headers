/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	long long _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (assign,nonatomic) long long serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
-(void)_stopListeningForNotifications;
-(id)logName;
-(void)dealloc;
-(IMServiceImpl *)service;
-(NSArray *)activeAccounts;
-(id)initWithServiceType:(long long)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_startListeningForNotifications;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
@end
