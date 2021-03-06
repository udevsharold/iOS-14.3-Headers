/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate;
@class MNLocation, MNTrafficIncidentAlert, NSTimer;

@interface MNTrafficIncidentAlertUpdater : NSObject {

	id<MNTrafficIncidentAlertUpdaterDelegate> _delegate;
	MNLocation* _lastLocation;
	MNTrafficIncidentAlert* _pendingAlert;
	MNTrafficIncidentAlert* _activeAlert;
	BOOL _isSpeakingAlert;
	int _trafficIncidentStatus;
	NSTimer* _alertRetryTimer;

}

@property (assign,nonatomic,__weak) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)clearAlerts;
-(void)updateForLocation:(id)arg1 ;
-(void)setDelegate:(id<MNTrafficIncidentAlertUpdaterDelegate>)arg1 ;
-(id<MNTrafficIncidentAlertUpdaterDelegate>)delegate;
-(void)updateForReroute:(id)arg1 ;
-(void)updateForAlertFromResponse:(id)arg1 ;
-(void)updateRerouteProposalStatusForRequest:(id)arg1 ;
-(void)_activateAlertForLocation:(id)arg1 ;
-(void)_alertRetryTimerFired:(id)arg1 ;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg1 ;
@end

