/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, AVWeakReference;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _attributes;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;

}
+(void)initialize;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(id)deviceType;
-(id)uniqueID;
-(id)modelID;
-(id)init;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)dealloc;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(BOOL)isConnected;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1 ;
-(id)localizedName;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
@end
