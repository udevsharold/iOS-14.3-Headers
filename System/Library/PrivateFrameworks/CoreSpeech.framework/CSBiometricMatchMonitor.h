/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/BKDeviceDelegate.h>

@protocol CSBiometricMatchMonitorDelegate;
@class BKDevice, NSString;

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate> {

	id<CSBiometricMatchMonitorDelegate> _delegate;
	BKDevice* _biometricDevice;

}

@property (nonatomic,retain) BKDevice * biometricDevice;                                       //@synthesize biometricDevice=_biometricDevice - In the implementation block
@property (assign,nonatomic,__weak) id<CSBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startObserving;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_stopMonitoring;
-(id)init;
-(void)setDelegate:(id<CSBiometricMatchMonitorDelegate>)arg1 ;
-(id<CSBiometricMatchMonitorDelegate>)delegate;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(void)device:(id)arg1 matchEventOccurred:(id)arg2 ;
-(unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
@end
