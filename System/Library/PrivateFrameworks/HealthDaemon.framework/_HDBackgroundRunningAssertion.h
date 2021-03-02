/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAssertion.h>

@class HDHealthStoreClient, BKSProcessAssertion, CLInUseAssertion;

@interface _HDBackgroundRunningAssertion : HDAssertion {

	BOOL _shouldAcquireCLAssertion;
	HDHealthStoreClient* _client;
	BKSProcessAssertion* _bksAssertion;
	CLInUseAssertion* _coreLocationAssertion;

}

@property (nonatomic,readonly) HDHealthStoreClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL shouldAcquireCLAssertion;                       //@synthesize shouldAcquireCLAssertion=_shouldAcquireCLAssertion - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * bksAssertion;                    //@synthesize bksAssertion=_bksAssertion - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * coreLocationAssertion;              //@synthesize coreLocationAssertion=_coreLocationAssertion - In the implementation block
-(BKSProcessAssertion *)bksAssertion;
-(CLInUseAssertion *)coreLocationAssertion;
-(BOOL)shouldAcquireCLAssertion;
-(void)setBksAssertion:(BKSProcessAssertion *)arg1 ;
-(HDHealthStoreClient *)client;
-(id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(BOOL)arg3 ;
-(void)setCoreLocationAssertion:(CLInUseAssertion *)arg1 ;
@end
