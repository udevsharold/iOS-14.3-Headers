/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;
@class NSString, NSDate, NSMutableSet, CUWiFiScanner, HMFTimer;

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFTimerDelegate, HMFLogging> {

	NSString* _browsingIdentifier;
	NSDate* _browsingStartTime;
	id<HAPAirPlayAccessoryBrowserDelegate> _airplayDelegate;
	NSString* _scanning2Pt4SSID;
	/*^block*/id _found2Pt4Completion;
	id<HAPWACAccessoryBrowserDelegate> _delegate;
	NSMutableSet* _foundUnconfiguredUnpairedAccessories;
	NSMutableSet* _foundUnconfiguredPairedAccessories;
	NSMutableSet* _found2Pt4Networks;
	CUWiFiScanner* _cuWiFiScanner;
	unsigned long long _state;
	HMFTimer* _backoffTimer;

}

@property (nonatomic,retain) NSString * browsingIdentifier;                                              //@synthesize browsingIdentifier=_browsingIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * browsingStartTime;                                                 //@synthesize browsingStartTime=_browsingStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAirPlayAccessoryBrowserDelegate> airplayDelegate;              //@synthesize airplayDelegate=_airplayDelegate - In the implementation block
@property (nonatomic,retain) NSString * scanning2Pt4SSID;                                                //@synthesize scanning2Pt4SSID=_scanning2Pt4SSID - In the implementation block
@property (nonatomic,copy) id found2Pt4Completion;                                                       //@synthesize found2Pt4Completion=_found2Pt4Completion - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPWACAccessoryBrowserDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredUnpairedAccessories;                        //@synthesize foundUnconfiguredUnpairedAccessories=_foundUnconfiguredUnpairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredPairedAccessories;                          //@synthesize foundUnconfiguredPairedAccessories=_foundUnconfiguredPairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * found2Pt4Networks;                                           //@synthesize found2Pt4Networks=_found2Pt4Networks - In the implementation block
@property (nonatomic,retain) CUWiFiScanner * cuWiFiScanner;                                              //@synthesize cuWiFiScanner=_cuWiFiScanner - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) HMFTimer * backoffTimer;                                                  //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)found2Pt4Completion;
-(void)handleFoundUnconfiguredPairedWACDevice:(id)arg1 ;
-(void)stopDiscoveringAccessoryServers;
-(NSMutableSet *)found2Pt4Networks;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_stopBrowsingForWACAccessories;
-(void)timerDidFire:(id)arg1 ;
-(id)_removeUnconfiguredWACDevice:(id)arg1 ;
-(void)setBrowsingIdentifier:(NSString *)arg1 ;
-(id)visible2Pt4Networks;
-(NSMutableSet *)foundUnconfiguredUnpairedAccessories;
-(void)_reportFound2Pt4Network:(id)arg1 ;
-(void)_initWiFiScannerWithScanner:(id)arg1 ;
-(void)setFound2Pt4Networks:(NSMutableSet *)arg1 ;
-(unsigned long long)state;
-(CUWiFiScanner *)cuWiFiScanner;
-(NSString *)browsingIdentifier;
-(void)handleChangeUnconfiguredWACDevice:(id)arg1 ;
-(void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1 ;
-(id<HAPAirPlayAccessoryBrowserDelegate>)airplayDelegate;
-(void)initWiFiScannerWithScanner:(id)arg1 ;
-(void)handleFoundAPDevice:(id)arg1 ;
-(void)setFoundUnconfiguredUnpairedAccessories:(NSMutableSet *)arg1 ;
-(void)setFound2Pt4Completion:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)handleRemovedUnconfiguredWACDevice:(id)arg1 ;
-(NSMutableSet *)foundUnconfiguredPairedAccessories;
-(void)_restartBrowsingWithAllNetworks;
-(void)setCuWiFiScanner:(CUWiFiScanner *)arg1 ;
-(void)setFoundUnconfiguredPairedAccessories:(NSMutableSet *)arg1 ;
-(void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)_handleUnconfiguredPairedWACDevice:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)_handleBrowsingBackOffTimerExpiry;
-(void)scan2Pt4APWithSSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1 ;
-(NSDate *)browsingStartTime;
-(void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)_startBrowsingForWACAccessories;
-(NSString *)scanning2Pt4SSID;
-(HMFTimer *)backoffTimer;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1 ;
-(void)setScanning2Pt4SSID:(NSString *)arg1 ;
-(id<HAPWACAccessoryBrowserDelegate>)delegate;
-(void)setBrowsingStartTime:(NSDate *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)setAirplayDelegate:(id<HAPAirPlayAccessoryBrowserDelegate>)arg1 ;
@end

