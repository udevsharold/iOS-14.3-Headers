/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFSoftwareUpdateObserver.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>

@class NSMapTable, NSString;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver> {

	NSMapTable* _homeBackgroundCheckMapTable;

}

@property (nonatomic,readonly) NSMapTable * homeBackgroundCheckMapTable;              //@synthesize homeBackgroundCheckMapTable=_homeBackgroundCheckMapTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)executionEnvironmentDidEnterBackground:(id)arg1 ;
-(id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2 ;
-(NSMapTable *)homeBackgroundCheckMapTable;
-(id)fetchAvailableUpdatesForHome:(id)arg1 ;
-(id)fetchAvailableUpdatesForAccessories:(id)arg1 ;
-(id)fetchAvailableUpdatesForAccessory:(id)arg1 ;
-(long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1 ;
-(id)_softwareUpdateWithMostRecentVersionForAccessories:(id)arg1 ;
-(id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)_fetchLatestSoftwareUpdateForAccessory:(id)arg1 targetVersion:(id)arg2 ;
-(id)_checkNeedsAttentionReasonsForSoftwareUpdate:(id)arg1 accessory:(id)arg2 ;
-(id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2 ;
-(BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2 ;
-(BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id*)arg3 ;
-(id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2 ;
-(void)startSilentBackgroundCheckForHome:(id)arg1 ;
-(long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1 ;
-(id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)fakeReleaseNoteSummary;
@end

