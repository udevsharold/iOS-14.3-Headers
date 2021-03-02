/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKClinicalSourceAuthorizationController, NSString, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;
	NSString* _readUsageDescription;
	HKSource* _source;

}

@property (nonatomic,retain) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) HKSource * source;                                                                //@synthesize source=_source - In the implementation block
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(HKSource *)source;
-(NSString *)readUsageDescription;
-(void)setSource:(HKSource *)arg1 ;
-(HKClinicalSourceAuthorizationController *)authorizationController;
-(void)setAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
@end
