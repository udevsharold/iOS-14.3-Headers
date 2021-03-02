/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSpringboardStartMonitorObserver.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSystemStateDelegate;
@class NSString;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate> {

	BOOL _restoreDoneHandled;
	id<MTSystemStateDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTSystemStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL restoreDoneHandled;                                //@synthesize restoreDoneHandled=_restoreDoneHandled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemRestoreDone;
+(id)_restoreNotification;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleF5Reset;
-(void)printDiagnostics;
-(BOOL)restoreDoneHandled;
-(id)gatherDiagnostics;
-(void)_verifyRestoreDone;
-(id)liveDarwinNotifications;
-(void)setRestoreDoneHandled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_handleRestoreDone;
-(BOOL)checkSystemReady;
-(void)setDelegate:(id<MTSystemStateDelegate>)arg1 ;
-(void)springboardStartMonitor:(id)arg1 didReceiveStarted:(BOOL)arg2 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id<MTSystemStateDelegate>)delegate;
-(BOOL)_checkIfRestoreDone;
@end
