/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBBiometricMonitorObserver.h>

@protocol SBBiometricMonitorDataSource;
@class UIWindow, SBBiometricMonitorViewController, NSString;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver> {

	BOOL _enabled;
	UIWindow* _debugWindow;
	SBBiometricMonitorViewController* _debugViewController;
	BOOL _deferredMatchUpdatePending;
	BOOL _deferredPresenceDetectUpdatePending;
	id<SBBiometricMonitorDataSource> _dataSource;

}

@property (nonatomic,retain) id<SBBiometricMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enable;
-(id)init;
-(void)disable;
-(void)setDataSource:(id<SBBiometricMonitorDataSource>)arg1 ;
-(id<SBBiometricMonitorDataSource>)dataSource;
-(void)_updateMatchState;
-(void)_updatePresenceDetectState;
-(void)_cancelDeferredUpdateMatchState;
-(void)_doDeferredMatchStateUpdate;
-(void)_doDeferredPresenceDetectUpdate;
-(void)_deferredUpdateMatchState;
-(BOOL)_isDeferredMatchStateUpdatePending;
-(BOOL)_isDeferredPresenceDetectStateUpdatePending;
-(void)_cancelDeferredUpdatePresenceDetectState;
-(void)_deferredUpdatePresenceDetectState;
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1 ;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1 ;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1 ;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg1 ;
@end
