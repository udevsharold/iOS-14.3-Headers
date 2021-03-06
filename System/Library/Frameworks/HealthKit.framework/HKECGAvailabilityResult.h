/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKECGAvailabilityResult : NSObject {

	BOOL _advertiseDirectOnboarding;
	BOOL _advertiseDirectOnboardingEscapeHatch;
	BOOL _advertiseUpgrade;
	BOOL _advertiseUpgradeEscapeHatch;

}

@property (nonatomic,readonly) BOOL advertiseDirectOnboarding;                         //@synthesize advertiseDirectOnboarding=_advertiseDirectOnboarding - In the implementation block
@property (nonatomic,readonly) BOOL advertiseDirectOnboardingEscapeHatch;              //@synthesize advertiseDirectOnboardingEscapeHatch=_advertiseDirectOnboardingEscapeHatch - In the implementation block
@property (nonatomic,readonly) BOOL advertiseUpgrade;                                  //@synthesize advertiseUpgrade=_advertiseUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL advertiseUpgradeEscapeHatch;                       //@synthesize advertiseUpgradeEscapeHatch=_advertiseUpgradeEscapeHatch - In the implementation block
+(id)resultWithAdvertiseDirectOnboarding:(BOOL)arg1 advertiseDirectOnboardingSecondary:(BOOL)arg2 advertiseUpgrade:(BOOL)arg3 advertiseUpgradeSecondary:(BOOL)arg4 ;
+(id)resultWithNoAdvertisements;
-(id)initWithAdvertiseDirectOnboarding:(BOOL)arg1 advertiseDirectOnboardingSecondary:(BOOL)arg2 advertiseUpgrade:(BOOL)arg3 advertiseUpgradeSecondary:(BOOL)arg4 ;
-(BOOL)advertiseDirectOnboarding;
-(BOOL)advertiseUpgrade;
-(BOOL)advertiseDirectOnboardingEscapeHatch;
-(BOOL)advertiseUpgradeEscapeHatch;
@end

