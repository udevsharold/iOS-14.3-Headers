/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface MTPairedDevicePreferences : NSObject {

	BOOL _pushAlertsEnabled;
	NPSManager* _npsManager;

}

@property (nonatomic,retain) NPSManager * npsManager;               //@synthesize npsManager=_npsManager - In the implementation block
@property (nonatomic,readonly) BOOL pushAlertsEnabled;              //@synthesize pushAlertsEnabled=_pushAlertsEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NPSManager *)npsManager;
-(BOOL)_isPushAlertsEnabledInPreferences;
-(void)setNpsManager:(NPSManager *)arg1 ;
-(BOOL)isPushAlertsEnabled;
-(BOOL)pushAlertsEnabled;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
@end

