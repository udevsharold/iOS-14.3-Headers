/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessory, HMDMessageDispatcher, NSString, NSMutableArray, HMFUnfairLock, HMDDevice;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {

	HMDAccessory* _accessory;
	HMDMessageDispatcher* _messageDispatcher;
	NSString* _logIdentifier;
	NSMutableArray* _queuedMessages;
	HMFUnfairLock* _lock;

}

@property (readonly) HMDMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                         //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSMutableArray * queuedMessages;                       //@synthesize queuedMessages=_queuedMessages - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) BOOL companionIsResident; 
@property (readonly) HMDDevice * residentDeviceForCamera; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)enqueueMessage:(id)arg1 ;
-(HMDAccessory *)accessory;
-(id)nextMessage;
-(HMDMessageDispatcher *)messageDispatcher;
-(NSMutableArray *)queuedMessages;
-(id)initWithAccessory:(id)arg1 ;
-(HMFUnfairLock *)lock;
-(NSString *)logIdentifier;
-(HMDDevice *)residentDeviceForCamera;
-(BOOL)companionIsResident;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)dequeueMessage;
-(void)sendNextMessage;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(/*^block*/id)arg7 ;
@end
