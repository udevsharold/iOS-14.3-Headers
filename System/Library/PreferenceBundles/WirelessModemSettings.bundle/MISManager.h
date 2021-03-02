/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)sharedManager;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(void)sendStateUpdate;
-(void)stopService;
-(void)setState:(int)arg1 ;
-(void)authenticate;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)didUserPreventData;
-(void)attachMIS;
-(void)detachMIS;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
@end
