/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityElectrocardiogramOnboardingCountryCodeRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _onboardingCountryCode;

}

@property (nonatomic,retain) NSString * onboardingCountryCode;              //@synthesize onboardingCountryCode=_onboardingCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(void)processUserInfo:(id)arg1 ;
-(void)setOnboardingCountryCode:(NSString *)arg1 ;
-(NSString *)onboardingCountryCode;
-(BOOL)evaluate;
@end

