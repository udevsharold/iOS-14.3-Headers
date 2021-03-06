/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class STScreenTimeConfiguration, NSXPCConnection;

@interface STScreenTimeConfigurationObserver : NSObject {

	int _notificationToken;
	STScreenTimeConfiguration* _configuration;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) STScreenTimeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign) int notificationToken;                                  //@synthesize notificationToken=_notificationToken - In the implementation block
-(void)startObserving;
-(void)stopObserving;
-(int)notificationToken;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(STScreenTimeConfiguration *)configuration;
-(void)setNotificationToken:(int)arg1 ;
-(void)setConfiguration:(STScreenTimeConfiguration *)arg1 ;
-(void)_requestConfiguration;
-(void)_updateWithConfiguration:(id)arg1 ;
-(id)initWithUpdateQueue:(id)arg1 ;
@end

