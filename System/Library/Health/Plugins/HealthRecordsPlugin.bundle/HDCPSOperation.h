/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HDProfile, HDClinicalProviderServiceManager;

@interface HDCPSOperation : NSOperation {

	HDProfile* _profile;
	HDClinicalProviderServiceManager* _providerServiceManager;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDClinicalProviderServiceManager * providerServiceManager;              //@synthesize providerServiceManager=_providerServiceManager - In the implementation block
-(id)init;
-(HDProfile *)profile;
-(HDClinicalProviderServiceManager *)providerServiceManager;
-(id)initWithManager:(id)arg1 profile:(id)arg2 ;
@end
