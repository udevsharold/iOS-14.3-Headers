/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class FMFSession, NAFuture, NSHashTable, NSString;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate> {

	FMFSession* _fmfSession;
	NAFuture* _activeFMFDeviceFuture;
	NAFuture* _availableFMFDevicesFuture;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) FMFSession * fmfSession;                                //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,retain) NAFuture * activeFMFDeviceFuture;                         //@synthesize activeFMFDeviceFuture=_activeFMFDeviceFuture - In the implementation block
@property (nonatomic,retain) NAFuture * availableFMFDevicesFuture;                     //@synthesize availableFMFDevicesFuture=_availableFMFDevicesFuture - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NAFuture * availableLocationDevicesFuture; 
@property (nonatomic,readonly) NAFuture * activeLocationDeviceFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)didUpdateActiveDeviceList:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(FMFSession *)fmfSession;
-(NAFuture *)activeLocationDeviceFuture;
-(NAFuture *)availableLocationDevicesFuture;
-(id)updateActiveLocationDevice:(id)arg1 ;
-(NAFuture *)activeFMFDeviceFuture;
-(NAFuture *)availableFMFDevicesFuture;
-(void)_updateActiveFMFDevice:(id)arg1 ;
-(void)setActiveFMFDeviceFuture:(NAFuture *)arg1 ;
-(void)setAvailableFMFDevicesFuture:(NAFuture *)arg1 ;
@end

