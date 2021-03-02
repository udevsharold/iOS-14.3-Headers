/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUSUICommandLineToolClientInterface.h>

@protocol SUSUICommandLineToolClientDelegate;
@class NSXPCConnection, NSString;

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {

	NSXPCConnection* _serverConnection;
	id<SUSUICommandLineToolClientDelegate> _delegate;
	BOOL _connected;
	BOOL _serverIsExiting;

}

@property (assign,nonatomic,__weak) id<SUSUICommandLineToolClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)dealloc;
-(void)setPasscodePolicy:(unsigned long long)arg1 ;
-(void)_noteConnectionDropped;
-(id)initWithDelegate:(id)arg1 ;
-(id)_remoteInterface;
-(void)_invalidateConnection;
-(void)setDelegate:(id<SUSUICommandLineToolClientDelegate>)arg1 ;
-(void)reboot:(BOOL)arg1 ;
-(void)invalidate;
-(id<SUSUICommandLineToolClientDelegate>)delegate;
-(void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(BOOL)arg2 errorCode:(id)arg3 ;
-(void)showFollowUp:(unsigned long long)arg1 ;
-(void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)toggleSettingsBadge:(BOOL)arg1 ;
-(void)simulateComingFromOTAUpdate;
-(void)downloadDidFinish;
-(void)_noteServerExiting;
@end
