/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>

@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;
@class AVAudioClient, NSObject, NSHashTable, AVAudioDevice, NSArray, NSString;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {

	AVAudioClient* _audioClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSHashTable* _delegates;
	id<TUAudioDeviceControllerActions> _actionsDelegate;

}

@property (nonatomic,retain) AVAudioClient * audioClient;                                            //@synthesize audioClient=_audioClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                                //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic,__weak) id<TUAudioDeviceControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice; 
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * inputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)devices;
-(void)removeDelegate:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSArray *)outputDevices;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
-(id)init;
-(void)setActionsDelegate:(id<TUAudioDeviceControllerActions>)arg1 ;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(NSArray *)inputDevices;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(AVAudioDevice *)currentOutputDevice;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(AVAudioDevice *)currentInputDevice;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(id<TUAudioDeviceControllerActions>)actionsDelegate;
-(NSString *)debugDescription;
-(AVAudioClient *)audioClient;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
@end
