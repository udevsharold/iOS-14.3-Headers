/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVLNetworkMonitor, TVLNetworkInterface, CUMessageSession, TVLTimeSync, TVLListenEngine;

@interface TVLAudioLatencyEstimator : NSObject {

	float _version;
	unsigned long long _role;
	/*^block*/id _progressEventHandler;
	/*^block*/id _completion;
	TVLNetworkMonitor* _networkMonitor;
	TVLNetworkInterface* _awdlInterface;
	TVLNetworkInterface* _wifiInterface;
	CUMessageSession* _session;
	TVLTimeSync* _timeSync;
	TVLListenEngine* _listenEngine;
	/*^block*/id _internalProgressEventHandler;

}

@property (assign,nonatomic) float version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) TVLNetworkMonitor * networkMonitor;               //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,retain) TVLNetworkInterface * awdlInterface;              //@synthesize awdlInterface=_awdlInterface - In the implementation block
@property (nonatomic,retain) TVLNetworkInterface * wifiInterface;              //@synthesize wifiInterface=_wifiInterface - In the implementation block
@property (nonatomic,retain) CUMessageSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) TVLTimeSync * timeSync;                           //@synthesize timeSync=_timeSync - In the implementation block
@property (nonatomic,retain) TVLListenEngine * listenEngine;                   //@synthesize listenEngine=_listenEngine - In the implementation block
@property (nonatomic,copy) id internalProgressEventHandler;                    //@synthesize internalProgressEventHandler=_internalProgressEventHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                        //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) id progressEventHandler;                            //@synthesize progressEventHandler=_progressEventHandler - In the implementation block
-(void)_tearDown;
-(void)setSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)session;
-(unsigned long long)role;
-(void)activate;
-(void)estimate;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithMessageSession:(id)arg1 ;
-(float)version;
-(id)progressEventHandler;
-(void)_invalidateWithError:(id)arg1 ;
-(TVLNetworkMonitor *)networkMonitor;
-(void)setProgressEventHandler:(id)arg1 ;
-(void)setVersion:(float)arg1 ;
-(void)setNetworkMonitor:(TVLNetworkMonitor *)arg1 ;
-(void)invalidate;
-(void)_initWithMessageSession:(id)arg1 ;
-(void)networkMonitorInterfacesDidUpdate:(id)arg1 ;
-(id)networkInterfaceOfType:(unsigned long long)arg1 fromInterfaces:(id)arg2 ;
-(void)_synchronizeClocksWithOptions:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_estimateAudioLatencyWithOptions:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)estimateAudioLatencyWithToneIdentifier:(id)arg1 ;
-(void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)startNetworkMonitoring;
-(void)_sendMessage:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)setTimeSync:(TVLTimeSync *)arg1 ;
-(void)setListenEngine:(TVLListenEngine *)arg1 ;
-(TVLTimeSync *)timeSync;
-(TVLListenEngine *)listenEngine;
-(void)_postInternalProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(id)internalProgressEventHandler;
-(void)setAudioLatencyEstimationCompletionHandler:(/*^block*/id)arg1 ;
-(TVLNetworkInterface *)awdlInterface;
-(void)setAwdlInterface:(TVLNetworkInterface *)arg1 ;
-(TVLNetworkInterface *)wifiInterface;
-(void)setWifiInterface:(TVLNetworkInterface *)arg1 ;
-(void)setInternalProgressEventHandler:(id)arg1 ;
@end

