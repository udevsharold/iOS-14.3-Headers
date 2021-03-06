/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class PKMapContainer, NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {

	os_unfair_lock_s _mapAccessLock;
	PKMapContainer* _mapContainer;
	NSTimer* _mapNeedsWriteTimer;

}
+(id)_instanceName;
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_updateMapsFromDisk;
-(void)_handlePurgedNotification:(id)arg1 ;
-(void)_handleDiskMapChangedNotification:(id)arg1 ;
-(id)_keyForRecipientAddress:(id)arg1 ;
-(void)_locked_setMapNeedsWrite;
-(BOOL)_writeMapToDisk;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1 ;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1 ;
-(id)__init;
-(id)recipientForRecipientAddress:(id)arg1 ;
-(void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg1 ;
-(BOOL)purgeCache;
@end

