/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver> {

	BOOL _isWristDetectDisabled;

}

@property (nonatomic,readonly) BOOL isWristDetectDisabled;              //@synthesize isWristDetectDisabled=_isWristDetectDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_updateWristDetectSetting;
-(BOOL)_wristDetectionEnabledRestriction;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_isWristDetectionDisabled;
-(BOOL)isWristDetectDisabled;
@end

